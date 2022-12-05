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
};

class Derived : public Base
{
   public :
       int X;
       int Y;

       void gun()             //Function Redefinition  //4000
    {
        cout<<"Derived gun\n";
    }
    void run()                //function definition   //5000
    { 
        cout<<"Derived run\n";
    }
    virtual void mun()                //function Definition //6000
    {
        cout<<"Derived mun\n";
    }
};

int main()
{
    cout<<"Size of the Base class :"<<sizeof(Base)<<"\n";
    cout<<"Size of the Derived class :"<<sizeof(Derived)<<"\n";
    
    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;            //upcasting
    
    bp->fun();
    bp->gun();
    bp->sun();
     
    return 0;
}

//by adding virtual the size of the datatype or obj gets increased by 8...as a pointer size