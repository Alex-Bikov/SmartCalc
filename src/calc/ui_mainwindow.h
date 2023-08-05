/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLineEdit *result_show;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_stepen;
    QPushButton *pushButton_delen;
    QPushButton *pushButton_umno;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_tochka;
    QPushButton *pushButton_close;
    QPushButton *pushButton_open;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_log;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_x;
    QPushButton *pushButton_ravno;
    QCustomPlot *widget;
    QPushButton *pushButton;
    QDoubleSpinBox *Box_max;
    QDoubleSpinBox *Box_min;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *step;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(712, 509);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 300, 50, 50));
        QFont font;
        font.setPointSize(15);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        result_show = new QLineEdit(centralwidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(69, 99, 251, 51));
        result_show->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgb(80, 80, 80)\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(170, 300, 50, 50));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(170, 350, 50, 50));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 300, 50, 50));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(170, 250, 50, 50));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 250, 50, 50));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(270, 250, 50, 50));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(170, 200, 50, 50));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(220, 200, 50, 50));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(270, 200, 50, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setPointSize(15);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(320, 150, 50, 50));
        pushButton_AC->setFont(font);
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(241, 164, 61);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(192, 129, 45), stop: 1 rgb(192, 129, 45));\n"
"}"));
        pushButton_stepen = new QPushButton(centralwidget);
        pushButton_stepen->setObjectName(QString::fromUtf8("pushButton_stepen"));
        pushButton_stepen->setGeometry(QRect(270, 150, 50, 50));
        pushButton_stepen->setFont(font);
        pushButton_stepen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(241, 164, 61);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(192, 129, 45), stop: 1 rgb(192, 129, 45));\n"
"}"));
        pushButton_delen = new QPushButton(centralwidget);
        pushButton_delen->setObjectName(QString::fromUtf8("pushButton_delen"));
        pushButton_delen->setGeometry(QRect(320, 200, 50, 50));
        pushButton_delen->setFont(font);
        pushButton_delen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(241, 164, 61);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(192, 129, 45), stop: 1 rgb(192, 129, 45));\n"
"}"));
        pushButton_umno = new QPushButton(centralwidget);
        pushButton_umno->setObjectName(QString::fromUtf8("pushButton_umno"));
        pushButton_umno->setGeometry(QRect(320, 250, 50, 50));
        pushButton_umno->setFont(font);
        pushButton_umno->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(241, 164, 61);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(192, 129, 45), stop: 1 rgb(192, 129, 45));\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(320, 300, 50, 50));
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(241, 164, 61);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(192, 129, 45), stop: 1 rgb(192, 129, 45));\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(320, 350, 50, 50));
        pushButton_plus->setFont(font);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(241, 164, 61);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(192, 129, 45), stop: 1 rgb(192, 129, 45));\n"
"}"));
        pushButton_tochka = new QPushButton(centralwidget);
        pushButton_tochka->setObjectName(QString::fromUtf8("pushButton_tochka"));
        pushButton_tochka->setGeometry(QRect(220, 350, 50, 50));
        pushButton_tochka->setFont(font);
        pushButton_tochka->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(220, 150, 50, 50));
        pushButton_close->setFont(font);
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_open = new QPushButton(centralwidget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(170, 150, 50, 50));
        pushButton_open->setFont(font);
        pushButton_open->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(120, 200, 50, 50));
        pushButton_cos->setFont(font);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(120, 250, 50, 50));
        pushButton_sin->setFont(font);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(120, 300, 50, 50));
        pushButton_tan->setFont(font);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(120, 350, 50, 50));
        pushButton_sqrt->setFont(font);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(70, 200, 50, 50));
        pushButton_acos->setFont(font);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(70, 250, 50, 50));
        pushButton_asin->setFont(font);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(70, 300, 50, 50));
        pushButton_atan->setFont(font);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(70, 350, 50, 50));
        pushButton_ln->setFont(font);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(120, 150, 50, 50));
        pushButton_log->setFont(font);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(70, 150, 50, 50));
        pushButton_mod->setFont(font);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(57, 58, 60);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(122, 122, 122), stop: 1 rgb(122, 122, 122));\n"
"}"));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(320, 100, 50, 50));
        pushButton_x->setFont(font);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(241, 164, 61);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(192, 129, 45), stop: 1 rgb(192, 129, 45));\n"
"}"));
        pushButton_ravno = new QPushButton(centralwidget);
        pushButton_ravno->setObjectName(QString::fromUtf8("pushButton_ravno"));
        pushButton_ravno->setGeometry(QRect(270, 350, 50, 50));
        pushButton_ravno->setFont(font);
        pushButton_ravno->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(90, 91, 92);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(156, 157, 157), stop: 1 rgb(156, 157, 157));\n"
"}"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(370, 100, 299, 299));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 70, 100, 32));
        Box_max = new QDoubleSpinBox(centralwidget);
        Box_max->setObjectName(QString::fromUtf8("Box_max"));
        Box_max->setGeometry(QRect(110, 70, 51, 22));
        Box_min = new QDoubleSpinBox(centralwidget);
        Box_min->setObjectName(QString::fromUtf8("Box_min"));
        Box_min->setGeometry(QRect(210, 70, 71, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 58, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 70, 58, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 70, 58, 16));
        step = new QDoubleSpinBox(centralwidget);
        step->setObjectName(QString::fromUtf8("step"));
        step->setGeometry(QRect(330, 70, 51, 22));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_stepen->setText(QCoreApplication::translate("MainWindow", "^(", nullptr));
        pushButton_delen->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_umno->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_tochka->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos(", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin(", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan(", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt(", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos(", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin(", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan(", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln(", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log(", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_ravno->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Xmax", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Xmin", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
