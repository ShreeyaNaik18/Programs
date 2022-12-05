#include<iostream>
using namespace std;

class Base
{
   public:               //Access Specifier     
      int A;
      int B;
    
    void Fun()          //Function Definition      //1000
    {
        cout<<"Base Fun\n";
    }
    void Gun(int i)         //Function Definition       //2000
    {
        cout<<"Base Gun with one integer\n";
    }
     void Gun(int i, int j)  //Overloaded Function Definition     //3000
    {
        cout<<"Base Gun with two integer\n";
    }
};

class Derived : public Base
{
   public:
       int X;
       int Y;
       void Sun()                 //Function Definition       //4000
       {
        cout<<"Derived Sun\n";  
       }
       void Fun()                 //Function Redefinition    //5000
       {
        cout<<"Derived Fun\n";  
       }
};
int main()
{   
    Base bobj;
    bobj.Fun();                //CALL 1000
    bobj.Gun(11);              //CALL 2000
    bobj.Gun(11,21);           //CALL 3000
                 

    Derived dobj;
    dobj.Fun();                //CALL 5000
    dobj.Gun(11);              //CALL 2000
    dobj.Gun(11,21);           //CALL 3000
    dobj.Sun();                //CALL 4000

    return 0;
}