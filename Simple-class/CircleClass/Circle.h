/*Иванов Илья ИВТ19-1*/

#ifndef CIRCLE_H
#define CIRCLE_H


enum Except{CircleNotExist};

class Circle // класс окружности созданной по двум точкам
{
private:
    double x,y,x2,y2; // точки окружности, где x,y - центр окружности, а x2,y2 - точка лежащая на этой окружности

public:
    //Конструктор без параметра
    Circle();

    //Конструктор с параметром
    Circle(double x,double y, double x2,double y2);

    //Сеттеры и геттеры
    //Сеттеры заполняют сразу одну точку на координатной плоскости

    //Сеттер центра окружности (координата x, координата y) 
    void setO(double x, double y);

    // Сеттер точки лежащей на окружности (координата x, координата y)
    void setA(double x2, double y2);

    //Геттер X центра окружности
    double getX()const;

    //Геттер Y центра окружности
    double getY()const;

    //Геттер X2 точки лежащей на окружности
    double getX2()const;

    //Геттер Y2 точки лежащей на окружности
    double getY2()const;

    //Методы

    // Вычисляет радиус окружности
    double Radius()const;

    //Вычисляет диаметр окружности
    double Diameter()const;

    //Вычисляет длину окружности
    double Length()const;

    //Вычисляет площадь окружности
    double Square()const;
    


};

#endif // CIRCLE_H
