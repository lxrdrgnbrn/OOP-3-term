#include "Logic.h"
#include "math.h"
float Perimeter(int n,float r)//Функция расчёта силы притяжения
{
    float p,pi=3.14;
    p=2*r*n*sin(pi/n)*cos(pi/n);
    return p;
}
