#include<iostream>
using namespace std;

class Overloading
{
    public:
          //Add@2ii
          int Add(int a, int b)             //1000
          {
             cout<<"Addition of 2 Integers : \n";
          return a+b;
          }
          //Add@2ff
         float Add(float a, float b)            //2000
         {
             cout<<"Addition of Floats : \n";
             return a+b;
          }
          //Add@2dd
          double Add(double a, double b)         //3000
          {
             cout<<"Addition of Double : \n";
             return a+b;
          }
          //Add@3iii      //mangalled names
          int Add(int a, int b, int c)           //4000
          {
             cout<<"Addition of 3 Integers : \n";
             return a+b+c;
          }
          //Fun@2if
          void Fun(int a,float b)
          {}
          //Fun@2fi
          void Fun(float x, int y)
          {}
};

int main()
{
   int i;
   float f;
   double d;

   Overloading obj;

   i = obj.Add(10,11);              //Call 1000
   cout<<i<<"\n";
   i = obj.Add(11,21,51);           //Call 4000
   cout<<i<<"\n";
   f = obj.Add(10.9f,89.5f);          //Call 2000
   cout<<f<<"\n";
   d = obj.Add(10.9,89.5);          //Call 3000
   cout<<d<<"\n";

    return 0;
}




