#include "Circle.h"

#include <math.h>

#define _USE_MATH_DEFINES

Circle::Circle()
{

    x=0;
    y=0;
    x2=1;
    y2=1;

}

Circle::Circle(double x,double y,double x2, double y2)
{
    if(x==x2 && y==y2) throw CircleNotExist;
    this->x=x;
    this->y=y;
    this->x2=x2;
    this->y2=y2;

}

void Circle::setO(double x,double y)
{
    if(x==x2 && y==y2) throw CircleNotExist;
    this->x=x;
    this->y=y;
}

void Circle::setA(double x2,double y2)
{
    if(x==x2 && y==y2) throw CircleNotExist;
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

double Circle::getRadius() const
{
    double r;
    r=sqrt(pow((x2-x),2)+pow((y2-y),2));
    return r;
}

double Circle::getDiameter() const
{
    double d;
    d=getRadius()*2;
    return d;
}

double Circle::getLength() const
{
    double l;
    l=getDiameter()*M_PI;
    return l;
}

double Circle::getSquare() const
{
    double s;
    s=M_PI*pow(getRadius(), 2);
    return s;
}


