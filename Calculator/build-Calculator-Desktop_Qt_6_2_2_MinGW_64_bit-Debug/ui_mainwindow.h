/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_AC_2;
    QLabel *label;
    QPushButton *pushButton_Percent;
    QPushButton *pushButton_Negative;
    QPushButton *pushButton_Div;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Minus;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_Plus;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Equal;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Dot;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_Pow;
    QPushButton *pushButton_Ln;
    QPushButton *pushButton_Sin;
    QPushButton *pushButton_Cos;
    QPushButton *pushButton_Tan;
    QPushButton *pushButton_Exp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(249, 309);
        MainWindow->setMinimumSize(QSize(249, 309));
        MainWindow->setMaximumSize(QSize(249, 309));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        pushButton_AC_2 = new QPushButton(centralwidget);
        pushButton_AC_2->setObjectName(QString::fromUtf8("pushButton_AC_2"));
        pushButton_AC_2->setGeometry(QRect(50, 60, 50, 50));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-1, 0, 251, 60));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"color: rgb(255,255,255);\n"
"border: 1 px;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setMargin(5);
        pushButton_Percent = new QPushButton(centralwidget);
        pushButton_Percent->setObjectName(QString::fromUtf8("pushButton_Percent"));
        pushButton_Percent->setGeometry(QRect(100, 60, 50, 50));
        QFont font1;
        font1.setPointSize(12);
        pushButton_Percent->setFont(font1);
        pushButton_Percent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Negative = new QPushButton(centralwidget);
        pushButton_Negative->setObjectName(QString::fromUtf8("pushButton_Negative"));
        pushButton_Negative->setGeometry(QRect(150, 60, 50, 50));
        pushButton_Negative->setFont(font1);
        pushButton_Negative->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Div = new QPushButton(centralwidget);
        pushButton_Div->setObjectName(QString::fromUtf8("pushButton_Div"));
        pushButton_Div->setGeometry(QRect(200, 60, 50, 50));
        pushButton_Div->setFont(font1);
        pushButton_Div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 153, 0);\n"
"color: rgb(248, 248, 248);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed{\n"
"	background-color: rgb(51, 204, 204);\n"
"}"));
        pushButton_Multiply = new QPushButton(centralwidget);
        pushButton_Multiply->setObjectName(QString::fromUtf8("pushButton_Multiply"));
        pushButton_Multiply->setGeometry(QRect(200, 110, 50, 50));
        pushButton_Multiply->setFont(font1);
        pushButton_Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 153, 0);\n"
"color: rgb(248, 248, 248);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed{\n"
"	background-color: rgb(51, 204, 204);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(100, 110, 50, 50));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 110, 50, 50));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(150, 110, 50, 50));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Minus = new QPushButton(centralwidget);
        pushButton_Minus->setObjectName(QString::fromUtf8("pushButton_Minus"));
        pushButton_Minus->setGeometry(QRect(200, 160, 50, 50));
        pushButton_Minus->setFont(font1);
        pushButton_Minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 153, 0);\n"
"color: rgb(248, 248, 248);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed{\n"
"	background-color: rgb(51, 204, 204);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 160, 50, 50));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 160, 50, 50));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 160, 50, 50));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Plus = new QPushButton(centralwidget);
        pushButton_Plus->setObjectName(QString::fromUtf8("pushButton_Plus"));
        pushButton_Plus->setGeometry(QRect(200, 210, 50, 50));
        pushButton_Plus->setFont(font1);
        pushButton_Plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 153, 0);\n"
"color: rgb(248, 248, 248);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed{\n"
"	background-color: rgb(51, 204, 204);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 210, 50, 50));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(50, 210, 50, 50));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 210, 50, 50));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Equal = new QPushButton(centralwidget);
        pushButton_Equal->setObjectName(QString::fromUtf8("pushButton_Equal"));
        pushButton_Equal->setGeometry(QRect(200, 260, 50, 50));
        pushButton_Equal->setFont(font1);
        pushButton_Equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 204, 204);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed{\n"
"	background-color: rgb(255, 153, 0);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(100, 260, 50, 50));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Dot = new QPushButton(centralwidget);
        pushButton_Dot->setObjectName(QString::fromUtf8("pushButton_Dot"));
        pushButton_Dot->setGeometry(QRect(150, 260, 50, 50));
        pushButton_Dot->setFont(font1);
        pushButton_Dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(50, 60, 50, 50));
        pushButton_AC->setFont(font1);
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Pow = new QPushButton(centralwidget);
        pushButton_Pow->setObjectName(QString::fromUtf8("pushButton_Pow"));
        pushButton_Pow->setGeometry(QRect(0, 60, 50, 50));
        pushButton_Pow->setFont(font1);
        pushButton_Pow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Ln = new QPushButton(centralwidget);
        pushButton_Ln->setObjectName(QString::fromUtf8("pushButton_Ln"));
        pushButton_Ln->setGeometry(QRect(0, 110, 50, 50));
        pushButton_Ln->setFont(font1);
        pushButton_Ln->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Sin = new QPushButton(centralwidget);
        pushButton_Sin->setObjectName(QString::fromUtf8("pushButton_Sin"));
        pushButton_Sin->setGeometry(QRect(0, 160, 50, 50));
        pushButton_Sin->setFont(font1);
        pushButton_Sin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Cos = new QPushButton(centralwidget);
        pushButton_Cos->setObjectName(QString::fromUtf8("pushButton_Cos"));
        pushButton_Cos->setGeometry(QRect(0, 210, 50, 50));
        pushButton_Cos->setFont(font1);
        pushButton_Cos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Tan = new QPushButton(centralwidget);
        pushButton_Tan->setObjectName(QString::fromUtf8("pushButton_Tan"));
        pushButton_Tan->setGeometry(QRect(0, 260, 50, 50));
        pushButton_Tan->setFont(font1);
        pushButton_Tan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        pushButton_Exp = new QPushButton(centralwidget);
        pushButton_Exp->setObjectName(QString::fromUtf8("pushButton_Exp"));
        pushButton_Exp->setGeometry(QRect(50, 260, 50, 50));
        pushButton_Exp->setFont(font1);
        pushButton_Exp->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:1 px;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	background-color: rgb(55, 55, 55);\n"
"	color: rgb(255,255,255);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        pushButton_Pow->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\241alculator", nullptr));
        pushButton_AC_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_Negative->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_Div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_Multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_Equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_Pow->setText(QCoreApplication::translate("MainWindow", "x^y", nullptr));
        pushButton_Ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_Sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_Cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_Tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_Exp->setText(QCoreApplication::translate("MainWindow", "exp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
