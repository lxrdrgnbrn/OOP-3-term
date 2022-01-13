#include "Circle.h"

#include <math.h>

Circle::Circle()
{

    x=0;
    y=0;
    x2=0;
    y2=0;

}

Circle::Circle(double x,double y,double x2, double y2)
{
    this->x=x;
    this->y=y;
    this->x2=x2;
    this->y2=y2;

}

void Circle::setO(double x,double y)
{
    this->x=x;
    this->y=y;
}

void Circle::setA(double x2,double y2)
{
    this->x2=x2;
    this->y2=y2;
}


double Circle::getX()const
{
    return x;
}
double Circle::getY()const
{
    return y;
}
double Circle::getX2()const
{
    return x2;
}
double Circle::getY2()const
{
    return y2;
}

double Circle::Radius() const
{
    double r;
    r=sqrt(pow((x2-x),2)+pow((y2-y),2));
    if (r==0) throw CircleNotExist;
    return r;
}

double Circle::Diameter() const
{
    double d;
    d=Radius()*2;
    if (d==0) throw CircleNotExist;
    return d;
}

double Circle::Length() const
{
    double l,pi=3.14;
    l=Diameter()*pi;
    if (l==0) throw CircleNotExist;
    return l;
}

double Circle::Square() const
{
    double s;
    s=3.14*pow(Radius(),2);
    if (s==0) throw CircleNotExist;
    return s;
}


