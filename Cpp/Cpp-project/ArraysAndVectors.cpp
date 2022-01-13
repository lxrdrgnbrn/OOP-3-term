#include "ArraysAndVectors.h"
#include "iostream"
#include "fstream"
using namespace std;

namespace Array
{
int* Write_Array(int m)//Заполнение массива длиной m рандомными числами
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
void Print_Array(int* ar,int m)//Вывод массива
    {
      cout<<"Array: "<<endl;
        if ((m>0)&&(ar!=nullptr))
        {
            for(int i=0;i<m;i++)
            {
                cout<<ar[i]<<" ";
            }
            cout<<endl;
        }
        else throw Empty;
}

int Sum_Array(int* ar,int m)//Сумма всех элементов массива
{
    if ((m>0)&&(ar!=nullptr))
    {
        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=ar[i];
        }
    return sum;
    }
    else throw Empty;
}
void ArrayToFile(int* ar,int m,string &s)//Запись массива в файл
{
    if ((m>0)&&(ar!=nullptr))
    {
        ofstream f(s);
        for (int i=0;i<m;i++)
        {
            f<<ar[i]<<endl;
        }
    }
    else throw Empty;
}
void ArrayFromFile(int* &ar, int &m,string &s)//Взять массив из файла
{
    ifstream f;
    f.open(s);
    int k=0,b=0;
    while (!f.eof())
    {
        f>>b;
        k++;
    }
    m=k-1;
    ar=new int[k-1];
    f.close();
    f.open(s);
    for(int i=0;i<k-1;i++)
    {
        f>>ar[i];
    }
}
}
namespace Vectors
{
vector <float> Enter_Vector(int m)//Заполнение вектора длиной m
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
void Print_Vector(vector <float> &vc,int m)//Вывод вектора
{
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
float Sum_VectorEl(vector <float> &vc,int m)//Сумма всех элементов вектора
{
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
