#include<iostream>
using namespace std;

class Base
{    
   public :
     int i;
   private :
     int j ;
   protected :
     int k;
    public :
     Base()      
     {
        i = 10;
        j = 20;
        k = 30;
     }
};

class Derived : public Base
{
   public :
    Derived()
    {
       cout<<"Value of public i of Base :"<<i<<"\n";  //A
      // cout<<"Value of pivate j of Base :"<<j<<"\n";  //NA
       cout<<"Value of protected k of Base :"<<k<<"\n"; //A
    }
};

int main()
{
    Base Bobj;
        cout<<"Value of public i : "<<Bobj.i<<"\n";  //A
     //   cout<<"Value of private j : "<<Bobj.j<<"\n";  //NA
     //   cout<<"Value of protected k : "<<Bobj.k<<"\n";  //NA
     

    return 0;
}


