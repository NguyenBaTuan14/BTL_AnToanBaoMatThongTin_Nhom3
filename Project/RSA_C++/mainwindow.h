#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QTextEdit>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void generateKeys();
    void encryptMessage();
    void decryptMessage();
    void readFile();
    void saveFile();
    void readFile1();
    void saveFile1();

private:
    Ui::MainWindow *ui;

    // Các biến lưu thông số RSA
    int numberN, numberB, numberA;

    // Hàm hỗ trợ (logic RSA)
    int gcd(int a, int b);
    int find_A(int a, int m);
    bool isPrime(int n);
    int generatePrime();
    long long power_recursive(long long a, int n, int m);
};

#endif // MAINWINDOW_H
