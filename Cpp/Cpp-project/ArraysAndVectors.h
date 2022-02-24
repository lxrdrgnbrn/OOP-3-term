#ifndef ARRAYSANDVECTORS_H
#define ARRAYSANDVECTORS_H

#include<vector>
#include <string>

using namespace std;

enum Exception{Empty};//Структура ошибок


namespace  Array
{
    int* fillArray(int m);//Заполнение массива длиной m
    void printArray(int* arr, int m);//Вывод массива
    int sumArray(int* arr, int m);//Сумма элементов массива
    void saveArrayToFile(int* arr, string &s, int m);//Запись массива в файл
    void loadArrayFromFile(int* arr, string &s);//Взять массив из файла
}

namespace Vectors
{
    vector<float> fillVector(int m);//Заполнение вектора длиной m
    void printVector(const vector <float> &vc);//Вывод вектора
    float sumVectorElement(const vector <float> &vc);//Сумма элементов вектора
}

#endif // ARRAYSANDVECTORS_H
