#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "Logic.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Info_triggered()//Справка
{
    QMessageBox::about(this, "Справка", "Иванов Илья вариант 8 \nОпределить периметр правильного n-угольника, описанного около окружности радиуса r.");
}

void MainWindow::on_Result_Button_clicked()
{
    float rad;
    int n;
    rad=ui->Edit_R->text().toFloat();
    n=ui->Edit_N->text().toInt();
    ui->Result_Edit->insertPlainText("Кол-во углов: "+QString::number(n)+"\nРадиус описанной окружности: "+QString::number(rad)+
                                     "\nПериметр: "+QString::number(Perimeter(n,rad))+"\n"+"\n");
}
