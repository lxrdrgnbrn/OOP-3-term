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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *Info;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *Result_Edit;
    QWidget *layoutWidget;
    QVBoxLayout *LblLayout;
    QHBoxLayout *LblLayoutM1;
    QSpacerItem *horizontalSpacer_2;
    QLabel *Label_N;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *LblLayoutM2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Label_R;
    QHBoxLayout *LblLayoutR;
    QSpacerItem *verticalSpacer_3;
    QWidget *layoutWidget1;
    QVBoxLayout *EditLayout;
    QLineEdit *Edit_N;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *Edit_R;
    QSpacerItem *verticalSpacer_4;
    QWidget *layoutWidget2;
    QHBoxLayout *ButtonLayout;
    QLabel *Name_label;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Result_Button;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(550, 293);
        MainWindow->setMinimumSize(QSize(550, 293));
        MainWindow->setMaximumSize(QSize(550, 293));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        Info = new QAction(MainWindow);
        Info->setObjectName(QString::fromUtf8("Info"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 6, 281, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Result_Edit = new QTextEdit(verticalLayoutWidget);
        Result_Edit->setObjectName(QString::fromUtf8("Result_Edit"));

        verticalLayout->addWidget(Result_Edit);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 6, 151, 201));
        LblLayout = new QVBoxLayout(layoutWidget);
        LblLayout->setObjectName(QString::fromUtf8("LblLayout"));
        LblLayout->setContentsMargins(0, 0, 0, 0);
        LblLayoutM1 = new QHBoxLayout();
        LblLayoutM1->setObjectName(QString::fromUtf8("LblLayoutM1"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LblLayoutM1->addItem(horizontalSpacer_2);

        Label_N = new QLabel(layoutWidget);
        Label_N->setObjectName(QString::fromUtf8("Label_N"));

        LblLayoutM1->addWidget(Label_N);


        LblLayout->addLayout(LblLayoutM1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LblLayout->addItem(verticalSpacer);

        LblLayoutM2 = new QHBoxLayout();
        LblLayoutM2->setObjectName(QString::fromUtf8("LblLayoutM2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LblLayoutM2->addItem(horizontalSpacer_5);

        Label_R = new QLabel(layoutWidget);
        Label_R->setObjectName(QString::fromUtf8("Label_R"));

        LblLayoutM2->addWidget(Label_R);


        LblLayout->addLayout(LblLayoutM2);

        LblLayoutR = new QHBoxLayout();
        LblLayoutR->setObjectName(QString::fromUtf8("LblLayoutR"));

        LblLayout->addLayout(LblLayoutR);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LblLayout->addItem(verticalSpacer_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(160, 6, 91, 201));
        EditLayout = new QVBoxLayout(layoutWidget1);
        EditLayout->setObjectName(QString::fromUtf8("EditLayout"));
        EditLayout->setContentsMargins(0, 0, 0, 0);
        Edit_N = new QLineEdit(layoutWidget1);
        Edit_N->setObjectName(QString::fromUtf8("Edit_N"));

        EditLayout->addWidget(Edit_N);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        EditLayout->addItem(verticalSpacer_2);

        Edit_R = new QLineEdit(layoutWidget1);
        Edit_R->setObjectName(QString::fromUtf8("Edit_R"));

        EditLayout->addWidget(Edit_R);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        EditLayout->addItem(verticalSpacer_4);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 210, 541, 31));
        ButtonLayout = new QHBoxLayout(layoutWidget2);
        ButtonLayout->setObjectName(QString::fromUtf8("ButtonLayout"));
        ButtonLayout->setContentsMargins(0, 0, 0, 0);
        Name_label = new QLabel(layoutWidget2);
        Name_label->setObjectName(QString::fromUtf8("Name_label"));
        QFont font;
        font.setPointSize(12);
        Name_label->setFont(font);

        ButtonLayout->addWidget(Name_label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ButtonLayout->addItem(horizontalSpacer_4);

        Result_Button = new QPushButton(layoutWidget2);
        Result_Button->setObjectName(QString::fromUtf8("Result_Button"));
        Result_Button->setStyleSheet(QString::fromUtf8(""));
        Result_Button->setAutoDefault(false);

        ButtonLayout->addWidget(Result_Button);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 550, 20));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(Info);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Perimeter", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        Info->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        Result_Edit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Label_N->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\320\263\320\273\320\276\320\262:", nullptr));
        Label_R->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\321\203\321\201:", nullptr));
        Edit_N->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Edit_R->setText(QCoreApplication::translate("MainWindow", "60", nullptr));
        Name_label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\262\320\260\320\275\320\276\320\262 \320\230.\320\220.", nullptr));
        Result_Button->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
