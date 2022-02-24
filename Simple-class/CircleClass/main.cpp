#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include "Circle.h"
#include "CircleTest.h"
#include <math.h>

using namespace std;

int main()
{
    TestRadius();
    TestDiameter();
    TestLength();
    TestSquare();
    cout<<endl;

    Circle C;

    C.setO(1,1);
    C.setA(10,10);

    cout<<"O: ("<<C.getX()<<","<<C.getY()<<")"<<endl;
    cout<<"A: ("<<C.getX2()<<","<<C.getY2()<<")"<<endl;

    try
    {
        cout<<"Radius: "<<C.getRadius()<<endl;
        cout<<"Diameter: "<<C.getDiameter()<<endl;
        cout<<"Length: "<<C.getLength()<<endl;
        cout<<"Square: "<<C.getSquare()<<endl;
        cout<<endl;
    }
    catch (Except e)
    {
        cout<<"This circle doesn't exist"<<endl;
    }

    //Теперь создадим массив из объектов этого класса
    Circle C_mass[2];//Создали массив из двух объектов
    C_mass[0]=C;

    //Возьмём площадь ещё раз, чтобы проверить работают ли методы класса в массиве
    try
    {
        cout<<"Massive_1 square: "<<C_mass[0].getSquare()<<endl;
        cout<<endl;
    }
    catch (Except e)
    {
        cout<<"error"<<endl;
    }

    //Теперь выделим память под объект динамически и ещё раз создадим массив
    Circle* C_DMass=new Circle[2];
    C_DMass[0].setA(1,1);
    C_DMass[0].setO(-5,1);

    //Методы работают с динамически созданным объектом
    try
    {
        cout<<"Massive_2 square: "<<C_DMass[0].getSquare()<<endl;
        cout<<endl;
    }
    catch (Except e)
    {
        cout<<"error"<<endl;
    }

    //Теперь создадим массив из указателей на объект
    Circle** C_Pmass=new Circle*[2];

    for(unsigned i=0;i<2;i++)
    {
        C_Pmass[i]=new Circle;
        C_Pmass[i]->setA(rand()%100,rand()%100);
        C_Pmass[i]->setO(rand()%100,rand()%100);
        cout<<"Massive_3["<<i<<"]: "<<endl;
        cout<<"("<<C_Pmass[i]->getX()<<","<<C_Pmass[i]->getY()<<")"<<endl;
        cout<<"("<<C_Pmass[i]->getX2()<<","<<C_Pmass[i]->getY2()<<")"<<endl;
        try
        {
            cout<<"Massive_3 square: "<<C_Pmass[i]->getSquare()<<endl;
            cout<<endl;
        }
        catch (Except e)
        {
            cout<<"error"<<endl;
        }
        cout<<endl;
    }
    for (unsigned i=0;i<2;i++)
    {
        delete C_Pmass[i];
    }
    delete[] C_Pmass;

    //Теперь запишем в файл наш объект одну из координат C_DMass для примера
    ofstream fout;
    fout.open("test.txt");
    if(!fout.is_open())
        cout<<"File not open"<<endl;
    fout<<C_DMass[0].getX()<<endl;
    fout<<C_DMass[0].getY()<<endl;
    fout.close();

    //Теперь для объекта C_DMass[1] возьмём данные C_DMass[0] из файла
    ifstream fin;
    float k;
    fin.open("test.txt");
    fin>>k;
    C_DMass[1].setO(k,0);
    fin>>k;
    C_DMass[1].setO(C_DMass[1].getX(),k);
    fin.close();

    //Для проверки выведем данный объект
    cout<<"Coordinates from file: "<<endl;
    cout<<"("<<C_DMass[1].getX()<<","<<C_DMass[1].getY()<<")"<<endl;
    delete[] C_DMass;

    return 0;


}
