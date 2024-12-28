#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <ctime>
#include <QPushButton>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Kết nối tín hiệu với slots
    connect(ui->btnGenerateKeys, &QPushButton::clicked, this, &MainWindow::generateKeys);
    connect(ui->btnEncrypt, &QPushButton::clicked, this, &MainWindow::encryptMessage);
    connect(ui->btnDecrypt, &QPushButton::clicked, this, &MainWindow::decryptMessage);
    connect(ui->btnReadFile, &QPushButton::clicked, this, &MainWindow::readFile);
    connect(ui->btnSaveFile, &QPushButton::clicked, this, &MainWindow::saveFile);
    connect(ui->btnReadFile_2, &QPushButton::clicked, this, &MainWindow::readFile1);
    connect(ui->btnSaveFile_2, &QPushButton::clicked, this, &MainWindow::saveFile1);

    srand(time(0)); // Khởi tạo bộ sinh số ngẫu nhiên
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Hàm tính GCD
int MainWindow::gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

// Hàm tìm nghịch đảo modulo
int MainWindow::find_A(int a, int m) {
    int m0 = m, y = 0, x = 1;

    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }

    return (x < 0) ? x + m0 : x;
}

// Hàm kiểm tra số nguyên tố
bool MainWindow::isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm sinh số nguyên tố lớn
int MainWindow::generatePrime() {
    int candidate = rand() % 5000 + 1000; // Sinh số lớn hơn 1000
    while (!isPrime(candidate)) {
        candidate = rand() % 5000 + 1000;
    }
    return candidate;
}

// Hàm tính lũy thừa theo modulo
long long MainWindow::power_recursive(long long a, int n, int m) {
    if (n == 0) return 1;
    long long half = power_recursive(a, n / 2, m);
    half = (half * half) % m;
    return (n % 2 != 0) ? (half * a) % m : half;
}

// Slot sinh khóa RSA
void MainWindow::generateKeys() {
    int primeP = generatePrime();
    int primeQ = generatePrime();
    while (primeP == primeQ) {
        primeQ = generatePrime();
    }

    numberN = primeP * primeQ;
    int phiN = (primeP - 1) * (primeQ - 1);

    numberB = 3;
    while (gcd(numberB, phiN) != 1) {
        numberB++;
    }

    numberA = find_A(numberB, phiN);

    // Hiển thị các thông số
    ui->txtPrimeP->setText(QString::number(primeP));
    ui->txtPrimeQ->setText(QString::number(primeQ));
    ui->txtN->setText(QString::number(numberN));
    ui->txtPhiN->setText(QString::number(phiN));
    ui->txtPublicKey->setText(QString::number(numberB));
    ui->txtPrivateKey->setText(QString::number(numberA));
    ui->txtPublickey_1->setText(QString::number(numberB));
    ui->txtPrivateKey_1->setText(QString::number(numberA));
}

// Slot mã hóa
void MainWindow::encryptMessage() {
    QString plainText = ui->txtPlainText->toPlainText();
    if (plainText.isEmpty()) {
        QMessageBox::warning(this, "Error", "Bản rõ không được để trống!");
        return;
    }

    for (const QChar &ch : plainText) {
        if (ch.unicode() > 65535) { // Kiểm tra ký tự vượt quá bảng mã Unicode
            QMessageBox::warning(this, "Error", "Bản rõ chứa ký tự không hợp lệ!");
            return;
        }
    }

    QString encryptedMessage;
    for (const QChar &ch : plainText) {
        int ascii = ch.unicode();
        int encryptedChar = power_recursive(ascii, numberB, numberN);
        encryptedMessage += QString::number(encryptedChar) + " ";
    }

    ui->txtEncryptedMessage->setText(encryptedMessage);
}

// Slot giải mã
void MainWindow::decryptMessage() {
    QString encryptedText = ui->txtEncryptedInput->toPlainText();
    if (encryptedText.isEmpty()) {
        QMessageBox::warning(this, "Error", "Bản mã không được để trống!");
        return;
    }

    QStringList encryptedNumbers = encryptedText.split(" ", Qt::SkipEmptyParts);
    for (const QString &numStr : encryptedNumbers) {
        if (!numStr.toInt() && numStr != "0") { // Kiểm tra nếu không phải số
            QMessageBox::warning(this, "Error", "Bản mã chứa ký tự không hợp lệ!");
            return;
        }
    }

    QString decryptedMessage;
    for (const QString &numStr : encryptedNumbers) {
        int encryptedChar = numStr.toInt();
        int decryptedChar = power_recursive(encryptedChar, numberA, numberN);
        decryptedMessage += QChar(decryptedChar);
    }

    ui->txtDecryptedMessage->setText(decryptedMessage);
}

// Nút đọc file
void MainWindow::readFile() {
    QString fileName = QFileDialog::getOpenFileName(this, "Chọn file", "", "Text Files (*.txt)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Không thể mở file!");
        return;
    }

    QTextStream in(&file);
    QString content = in.readAll();
    ui->txtPlainText->setPlainText(content);
    file.close();
}

// Nút xuất file
void MainWindow::saveFile() {
    QString fileName = QFileDialog::getSaveFileName(this, "Lưu file", "", "Text Files (*.txt)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Không thể lưu file!");
        return;
    }

    QTextStream out(&file);
    out << ui->txtEncryptedMessage->toPlainText();
    file.close();
}

// Nút đọc file
void MainWindow::readFile1() {
    QString fileName = QFileDialog::getOpenFileName(this, "Chọn file", "", "Text Files (*.txt)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Không thể mở file!");
        return;
    }

    QTextStream in(&file);
    QString content = in.readAll();
    ui->txtEncryptedInput->setPlainText(content);
    file.close();
}

// Nút xuất file
void MainWindow::saveFile1() {
    QString fileName = QFileDialog::getSaveFileName(this, "Lưu file", "", "Text Files (*.txt)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Không thể lưu file!");
        return;
    }

    QTextStream out(&file);
    out << ui->txtDecryptedMessage->toPlainText();
    file.close();
}
