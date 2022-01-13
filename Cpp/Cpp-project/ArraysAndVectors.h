#ifndef ARRAYSANDVECTORS_H
#define ARRAYSANDVECTORS_H

#include<vector>
#include <string>

using namespace std;

enum Exception{Empty};//Структура ошибок


namespace  Array
{
    int* Write_Array(int m);//Заполнение массива длиной m
    void Print_Array(int* ar,int m);//Вывод массива
    int Sum_Array(int* ar,int m);//Сумма элементов массива
    void ArrayToFile(int* ar,int m, string &s);//Запись массива в файл
    void ArrayFromFile(int* &ar, int &m,string &s);//Взять массив из файла
}

namespace Vectors
{
    vector<float> Enter_Vector(int m);//Заполнение вектора длиной m
    void Print_Vector(vector <float> &vc,int m);//Вывод вектора
    float Sum_VectorEl(vector <float> &vc,int m);//Сумма элементов вектора
}

#endif // ARRAYSANDVECTORS_H
