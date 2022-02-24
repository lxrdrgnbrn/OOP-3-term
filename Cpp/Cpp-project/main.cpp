#include <iostream>
#include "ArraysAndVectors.h"
#include <vector>
#include "time.h"
using namespace Array;
using namespace Vectors;

int main()
{
   srand(time(NULL));
   int n = 10;
   int* mass;
   try
   {
   mass=fillArray(n);
   printArray(mass, n);
   cout<<"Sum of array: "<<sumArray(mass, n)<<endl;
   }
   catch (Exception error)
   {
       cout<<"the array is empty"<<endl;
   }
   try
   {
   string FName="test.txt";
   saveArrayToFile(fillArray(n),FName, n);
   loadArrayFromFile(mass, FName);
   cout<<"Array from file"<<endl;
   printArray(mass, n);
   }
   catch (Exception error)
   {
       cout<<"the array is empty"<<endl;
   }
   try
   {
   vector <float> vec;
   vec=fillVector(n);
   printVector(vec);
   cout<<"Sum of vector: "<<sumVectorElement(vec)<<endl;
   }
   catch (Exception error)
   {
       cout<<"The vector is empty"<<endl;
   }
   delete(mass);
}
