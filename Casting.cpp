#include<iostream>
using namespace std;

class Base
{
  public :
    int A;
    int B;

};

class Derived : public Base
{
   public :
       int X;
       int Y;
};

int main()
{
    Base *bp = NULL;
    Derived *dp = NULL;
    
    Base bobj;
    Derived dobj;

    bp = &bobj;   //no Casting    //A
    dp = &dobj;   //no Casting    //A
    bp = &dobj;   //up Casting    //A
    //dp = &bobj;   //down castig   //NA



    return 0;
}