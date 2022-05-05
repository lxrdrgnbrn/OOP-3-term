#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Слоты и сигналы чтобы не прописывать к каждой кнопке обработчик событий
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(Digit()));
    connect(ui->pushButton_Plus,SIGNAL(clicked()),this,SLOT(Handler()));
    connect(ui->pushButton_Minus,SIGNAL(clicked()),this,SLOT(Handler()));
    connect(ui->pushButton_Multiply,SIGNAL(clicked()),this,SLOT(Handler()));
    connect(ui->pushButton_Div,SIGNAL(clicked()),this,SLOT(Handler()));
    connect(ui->pushButton_Pow,SIGNAL(clicked()),this,SLOT(Handler()));

    // делаем кнопку триггерной чтобы устанавливать флаг при нажатии
    ui->pushButton_Plus->setCheckable(true);
    ui->pushButton_Minus->setCheckable(true);
    ui->pushButton_Multiply->setCheckable(true);
    ui->pushButton_Div->setCheckable(true);
    ui->pushButton_Pow->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Digit()//процедура считывания цифры с кнопки
{
    QPushButton *button=(QPushButton *)sender();
    QString new_label;
    if (ui->label->text().contains('.')&& button->text()=="0")
        new_label=ui->label->text()+button->text();
    else
    new_label=QString::number(((ui->label->text()+button->text()).toDouble()),'g',15);
    ui->label->setText(new_label);
}

void MainWindow::CheckFlag() // Смена флага всех операций
{
    ui->pushButton_Plus->setChecked(false);
    ui->pushButton_Minus->setChecked(false);
    ui->pushButton_Multiply->setChecked(false);
    ui->pushButton_Div->setChecked(false);
    ui->pushButton_Pow->setChecked(false);
}

void MainWindow::Handler()// обработчик нажатия на кнопку операций
{
    CheckFlag();// отчищаем флаги всех кнопок
    QPushButton *button=(QPushButton *)sender();
    button->setChecked(true); // устанавливаем флаг true на нажатой кнопке
    //проверка флага и вызов функции этой кнопки происходит при нажатии "="
    op.setX((ui->label->text()).toDouble());// передаем число в поле x
    ui->label->clear();// отчищаем экран
}

void MainWindow::on_pushButton_Dot_clicked()// кнопка точки
{
    if(!(ui->label->text().contains(".")))
      ui->label->setText(ui->label->text()+".");
}

void MainWindow::on_pushButton_Negative_clicked() // кнопка смены знака
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Negative(),'g',15);
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_Percent_clicked() // процент
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Precent());
    ui->label->setText(new_label);
}



void MainWindow::on_pushButton_Equal_clicked() // кнопка равно
{
    QString new_label;
    // проверяем было ли введено второе число
    if(ui->label->text()=="")
       op.setY(op.getX());
    else
        op.setY((ui->label->text()).toDouble());
    // проверяем какая кнопка была нажата и вызываем функцию этой кнопки
    if(ui->pushButton_Plus->isChecked())
    {
        new_label=QString::number(op.Summ());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
    }
    if(ui->pushButton_Minus->isChecked())
    {
        new_label=QString::number(op.Subtract());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
    }
    if (ui->pushButton_Multiply->isChecked())
    {
        new_label=QString::number(op.Multiplication());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
    }
    if (ui->pushButton_Div->isChecked())
    {
        try {
        new_label=QString::number(op.Division());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
        }
        catch (Except e)
        {
            ui->label->setText("На 0 делить нельзя");
        }
    }
    if (ui->pushButton_Pow->isChecked())
    {
        new_label=QString::number(op.Power());
        ui->label->setText(new_label);
        op.setX((ui->label->text()).toDouble());
    }

}

void MainWindow::on_pushButton_Sin_clicked() // синус
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Sin());
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_Ln_clicked() // логарифм
{

    QString new_label;
    op.setX((ui->label->text()).toDouble());
    try
    {
    new_label=QString::number(op.Ln());
    ui->label->setText(new_label);
    }
    catch (Except e)
    {
        ui->label->setText("Не существует");
    }
}

void MainWindow::on_pushButton_Cos_clicked() // косинус
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Cos());
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_Exp_clicked() // экспонента
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Exp());
    ui->label->setText(new_label);
}

void MainWindow::on_pushButton_AC_clicked() // очистка
{
    ui->label->clear();
    CheckFlag();
}

void MainWindow::on_pushButton_Tan_clicked() // тангенс
{
    QString new_label;
    op.setX((ui->label->text()).toDouble());
    new_label=QString::number(op.Tan());
    ui->label->setText(new_label);
}

