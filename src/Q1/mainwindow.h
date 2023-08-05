#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSpinBox>

extern "C" {
#include <../calculate.h>
}


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString new_label;
    int flag;

private slots:
    void digits_numbers();
    void ravno();
    void ac();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
