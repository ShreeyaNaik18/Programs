#include<iostream>
using namespace std;

class Base
{
  public :
    int A;
    int B;
    
    void fun()              //Function Defintion //1000
    {
        cout<<"Base fun\n";
    }
    virtual void gun()              //Function definition  //2000
    {
        cout<<"Base gun\n";
    }
    virtual void sun()             //Function definiton   //3000
    {
        cout<<"Base sun\n";
    }
    virtual void run()             //Function definiton   //4000
    {
        cout<<"Base run\n";
    }
};

class Derived : public Base
{
   public :
       int X;
       int Y;

       void gun()             //Function Redefinition  //5000
    {
        cout<<"Derived gun\n";
    }
    virtual void run()                //function definition   //6000
    { 
        cout<<"Derived run\n";
    }
    virtual void mun()                //function Definition //7000
    {
        cout<<"Derived mun\n";
    }
};

int main()
{
    cout<<"Size of the Base class :"<<sizeof(Base)<<"\n";
    cout<<"Size of the Derived class :"<<sizeof(Derived)<<"\n";
   
   Base *bp = NULL;
   bp = new Derived;             //upcasting
   
   //bp = (Derived *)malloc(sizeof(Derived));

    bp->fun();    //Base Fun
    bp->gun();    //Derived gun
    bp->sun();    //Base Sun
    bp->run();    //Derived run
    //bp->mun();    //Error

    delete bp;

    return 0;
}