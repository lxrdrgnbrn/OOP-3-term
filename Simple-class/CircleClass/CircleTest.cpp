#include "CircleTest.h"
#include <cassert>
#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES

void TestRadius()
{
    Circle c;
    c.setO(0,0);
    c.setA(1,1);
    assert(c.getRadius()==sqrt(2));
    std::cout<<"Test radius - ok"<<std::endl;
}

void TestDiameter()
{
    Circle c;
    c.setO(0,0);
    c.setA(1,1);
    assert(c.getDiameter()==sqrt(2)*2);
    std::cout<<"Test diameter - ok"<<std::endl;
}

void TestLength()
{
    Circle c;
    c.setO(0,0);
    c.setA(1,1);
    assert(c.getLength()==sqrt(2)*2*M_PI);
    std::cout<<"Test length - ok"<<std::endl;
}

void TestSquare()
{
    Circle c;
    c.setO(0,0);
    c.setA(1,1);
    assert(c.getSquare()==pow(sqrt(2),2)*M_PI);
    std::cout<<"Test square - ok"<<std::endl;
}
