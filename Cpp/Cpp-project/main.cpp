#include <iostream>
#include "ArraysAndVectors.h"
#include <vector>
#include "time.h"
using namespace Array;
using namespace Vectors;

int main()
{
   srand(time(NULL));
   int n;
   cout<<"Enter n: ";
   cin>>n;
   int* mass;
   try
   {
   mass=Write_Array(n);
   Print_Array(mass,n);
   cout<<"Sum of array: "<<Sum_Array(mass,n)<<endl;
   }
   catch (Exception error)
   {
       cout<<"the array is empty"<<endl;
   }
   try
   {
   string FName="test.txt";
   ArrayToFile(Write_Array(n),n,FName);
   ArrayFromFile(mass,n,FName);
   cout<<"Array from file"<<endl;
   Print_Array(mass,n);
   }
   catch (Exception error)
   {
       cout<<"the array is empty"<<endl;
   }
   try
   {
   vector <float> vec;
   vec=Enter_Vector(n);
   Print_Vector(vec,n);
   cout<<"Sum of vector: "<<Sum_VectorEl(vec,n)<<endl;
   }
   catch (Exception error)
   {
       cout<<"The vector is empty"<<endl;
   }
}
