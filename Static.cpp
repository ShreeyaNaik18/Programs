#include<iostream>
using namespace std;

class Demo
{
    public :               //access specifier
           int i;         //instance variable
           int j;         //instance variable
           static int k;     //class variable
           static int l;
           Demo()         //Default constructor
           {
              i = 0;
              j = 0;
           }
           Demo(int a, int b)         //Parameterised constructor
           {
              i = a;
              j = b;
           }
           void fun()       //instance method(function)
           {
                //static + non static
                cout<<"Inside Non Static method fun : \n";
                cout<<"Value of i : "<<this->i<<"\n";
                cout<<"Value of j : "<<this->j<<"\n";
                cout<<"Value of k : "<<k<<"\n";
                cout<<"Value of l : "<<l<<"\n";
           }
           static gun()      //class method (function)
           {
                //static
                cout<<"Inside Static method gun : \n";
                cout<<"Value of k : "<<k<<"\n";
                cout<<"Value of l : "<<l<<"\n";
           }
};
//Load Time Variables
int Demo::k = 0;
int Demo::l = 0;
int main()
{
  cout<<"Inside Main\n";
  cout<<"Value of k :"<< Demo::k<<"\n";
  cout<<"Value of l :"<< Demo::l<<"\n";
  Demo::gun();

  Demo obj1(10,11);
  Demo obj2(20,21);
  Demo obj3;

  cout<<"Values of objects are : \n";
  cout<<"Value of i in obj1 :"<<obj1.i<<"\n";
  cout<<"Value of j in obj1 :"<<obj1.j<<"\n";

  cout<<"Value of i in obj2 :"<<obj2.i<<"\n";
  cout<<"Value of j in obj2 :"<<obj2.j<<"\n";

  cout<<"Value of i in obj3 :"<<obj3.i<<"\n";
  cout<<"Value of j in obj3 :"<<obj3.j<<"\n";

  obj1.fun();   //fun(&obj1);
  obj2.fun();
  obj3.fun();

  return 0;
}

//Size of object is summation of sizes of its non static characteristics
//sizeof(obj) = sizeof(i) + sizeof(j);
//sizeof(obj) = 4 + 4;
//sizeof(obj) = 8;