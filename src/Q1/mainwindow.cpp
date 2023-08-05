#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{   ui->setupUi(this);
    connect(ui->pushButton_0, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_tochka, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_ravno, SIGNAL(clicked()),this, SLOT(ravno()));
    connect(ui->pushButton_plus, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_minus, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_umno, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_delen, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_stepen, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_log, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_cos, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_sin, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_tan, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_mod, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_acos, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_asin, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_atan, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_ln, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_x, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_AC, SIGNAL(clicked()),this, SLOT(ac()));
    connect(ui->pushButton_open, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    connect(ui->pushButton_close, SIGNAL(clicked()),this, SLOT(digits_numbers()));
    ui->Box_min->setRange(-1000000, 1000000);
    ui->Box_max->setRange(-1000000, 1000000);
    ui->Box_x->setRange(-1000000, 1000000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{

    QPushButton *button = (QPushButton *)sender();
//    new_label = ui->result_show->text() + button->text();
//    ui->result_show->setText(new_label);
    if(button->text() == 'x') {
        flag = 1;
    }
    new_label = ui->result_show->text() + button->text();
    ui->result_show->setText(new_label);

}

void MainWindow::ravno() {
    QByteArray str_bit = new_label.toLocal8Bit();
    QByteArray x_bit = new_label.toLocal8Bit();
    double z = 0.0;
    int error = 0;
    if (flag == 1) {
        QString str = ui->Box_x->text();
        error = go(str_bit.data(), str.toLocal8Bit().data(), &z);
    } else {
        error = go(str_bit.data(), x_bit.data(), &z);
    }

    z = floor( z*10000000 )/10000000;
    if (error == 0) {
        ui->result_show->setText(QString::number(z, 'g', 15));
    } else {
        ui->result_show->setText("Error");
    }


}

void MainWindow::ac() {
    ui->result_show->clear();

}

void MainWindow::on_pushButton_clicked()
{
    QByteArray str_bit = new_label.toLocal8Bit();
    QString new_x;

    QString str = ui->Box_min->text();
    double min = str.toDouble();
    str = ui->Box_max->text();
    double max =  str.toDouble();
    str = ui->step->text();
    double step = str.toDouble();

    if(min == 0 && max == 0 && step == 0) {
        ui->result_show->setText("Error");
    } else {
        int N = (max - min) / step + 2;
        QVector<double> x(N), y(N);
        int i=0;
        double z = 0;
        for (double X = min; X <= max; X += step) {
            x[i] = X;
            new_x = QString::number(X, 'g', 17);
            go(str_bit.data(), new_x.toLocal8Bit().data(),&z);
            y[i] = z;
            i++;
        }
        ui->widget->clearGraphs();
        ui->widget->addGraph();
        ui->widget->graph(0)->setData(x, y);
        ui->widget->xAxis->setLabel("x");
        ui->widget->yAxis->setLabel("y");
        ui->widget->xAxis->setRange(min, max);
        double minY = y[0], maxY = y[0];
        for (int i = 1; i < N; i++) {
          if (y[i] < minY) minY = y[i];
          if (y[i] > maxY) maxY = y[i];
        }
        ui->widget->yAxis->setRange(minY, maxY);
        ui->widget->replot();
    }


}

