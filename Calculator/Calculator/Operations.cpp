#include "Operations.h"
#include "math.h"
// класс функций калькулятора
Operations::Operations()
{
    x=0;
    y=0;
}

void Operations::setX(double _x)
{
    x=_x;
}
void Operations::setY(double _y)
{
    y=_y;
}


double Operations::getX()const
{
    return x;
}
double Operations::getY()const
{
    return y;
}

double Operations::Summ() const // сумма
{
    double r;
    r=x+y;
    return r;
}

double Operations::Subtract() const // вычитание
{
    double r;
    r=x-y;
    return r;
}

double Operations::Multiplication() const // Умножение
{
    double r;
    r=x*y;
    return r;
}
double Operations::Division() const // Деление
{
    double r;
    r=x/y;
    if (y==0) throw Error;
    return r;
}

double Operations::Power() const // степень
{
    double r;
    r=pow(x,y);
    return r;
}

double Operations::Sin() const // синус
{
    double r;
    r=sin(x);
    return r;
}

double Operations::Cos() const // косинус
{
    double r;
    r=cos(x);
    return r;
}
double Operations::Tan() const  // тангенс
{
    double r;
    r=tan(x);
    return r;
}

double Operations::Ln() const   // логарифм
{
    if (x<0) throw Error;
    double r;
    r=log(x);
    return r;
}

double Operations::Exp() const // экспонента
{
    double r;
    r=exp(x);
    return r;
}

double Operations::Negative() const // смена знака
{
    double r;
    r=x*-1;
    return r;
}

double Operations::Precent() const // проценты
{
    double r;
    r=x*0.01;
    return r;
}
