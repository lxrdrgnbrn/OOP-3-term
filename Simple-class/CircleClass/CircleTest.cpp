#include "CircleTest.h"
#include <cassert>
#include <iostream>
#include <math.h>

void TestRadius()
{
    Circle c;
    c.setO(0,0);
    c.setA(1,1);
    assert(c.Radius()==sqrt(2));
    std::cout<<"Test radius - ok"<<std::endl;
}

void TestDiameter()
{
    Circle c;
    c.setO(0,0);
    c.setA(1,1);
    assert(c.Diameter()==sqrt(2)*2);
    std::cout<<"Test diameter - ok"<<std::endl;
}

void TestLength()
{
    Circle c;
    c.setO(0,0);
    c.setA(1,1);
    assert(c.Length()==sqrt(2)*2*3.14);
    std::cout<<"Test length - ok"<<std::endl;
}

void TestSquare()
{
    Circle c;
    c.setO(0,0);
    c.setA(1,1);
    assert(c.Square()==pow(sqrt(2),2)*3.14);
    std::cout<<"Test square - ok"<<std::endl;
}
