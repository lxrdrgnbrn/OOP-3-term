#include "ArraysAndVectors.h"
#include "iostream"
#include "fstream"
using namespace std;

namespace Array
{
int* fillArray(int m)//Заполнение массива длиной m рандомными числами
    {
        if (m>0)
        {
            int* ar=new int[m];
            for (int i=0;i<m;i++)
            {
                ar[i]=rand()%100;
            }
        return ar;
        }
        else throw Empty;
}
void printArray(int* arr, int m)//Вывод массива
    {
      cout<<"Array: "<<endl;
        if ((m>0)&&(arr!=nullptr))
        {
            for(int i=0;i<m;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else throw Empty;
}

int sumArray(int* arr, int m)//Сумма всех элементов массива
{
    if ((m>0)&&(arr!=nullptr))
    {
        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=arr[i];
        }
    return sum;
    }
    else throw Empty;
}
void saveArrayToFile(int* arr, string &s, int m)//Запись массива в файл
{
    if ((m>0)&&(arr!=nullptr))
    {
        ofstream f(s);
        for (int i=0;i<m;i++)
        {
            f<<arr[i]<<endl;
        }
    }
    else throw Empty;
}
void loadArrayFromFile(int* arr, string &s)//Загрузка массива из файла
{
    delete(arr);
    ifstream f;
    f.open(s);
    int k=0,b=0;
    while (!f.eof())
    {
        f>>b;
        k++;
    }
    arr=new int[k-1];
    f.close();
    f.open(s);
    for(int i=0;i<k-1;i++)
    {
        f>>arr[i];
    }
}
}
namespace Vectors
{
vector <float> fillVector(int m)//Заполнение вектора длиной m
{
    if (m>0)
    {
        vector <float> vc(m);
        for (int i=0;i<m;i++)
        {
            vc[i]=rand()%100;
        }
        return vc;
    }
    else throw Empty;
}
void printVector(vector<float> vc)//Вывод вектора
{
    int m = size(vc);
    cout<<"Vector: "<<endl;
    if ((m>0)&&(vc.empty()==false))
    {
        for(int i=0;i<m;i++)
        {
            cout<<vc[i]<<" ";
        }
        cout<<endl;
    }
    else throw Empty;
}
float sumVectorElement(vector <float> vc)//Сумма всех элементов вектора
{
    int m = size(vc);
    if ((m>0)&&(vc.empty()==false))
    {
        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=vc[i];
        }
        return sum;
    }
    else throw Empty;
}
}
