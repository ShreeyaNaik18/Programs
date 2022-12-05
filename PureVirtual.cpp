#include<iostream>
using namespace std;

class Circle
{
    public :                          //Access specifier 
        float PI;                    //characteristics
        float Radius ;               // characteristics
    Circle()                         //Default constructor 
    {
        PI = 3.14;
        Radius = 0.0;
    }
    Circle(float A, float B)         //parameterized Constructor
    {
        PI = A;
        Radius = B;
    } 
    void Display()                   //concrete method(function)  //1000
    {
        cout<<"Value of PI is : "<<PI<<"\n";
        cout<<"Value of Radius is : "<<Radius<<"\n";
    } 
    virtual float Area() = 0;                 // abstract method or pure virtual (without body) //__________
    virtual float Circumference() = 0;       // abstract method  or pure virtual (without body) //__________

};

class Marvellous : public Circle 
{
  public :
       Marvellous() : Circle()
       {
            
       }
       Marvellous(float X, float Y) : Circle(X,Y)
       {

       }
      float Area()                        //concrete method (with body) //2000
      {
        float Ans = PI * Radius * Radius ;
        return Ans ;
      }
      float Circumference()                //concrete method (with body) //3000
      {   
        float Ans = 0.0;
        Ans = 2 * PI * Radius;
        return Ans;
      }

};

int main()
{

   Marvellous mobj1;
   Marvellous mobj2(3.14, 10.39);

   float fret = 0.0;
   fret = mobj2.Area();
   cout<<"Area of Circle is : "<<fret<<"\n";

   fret = mobj2.Circumference();
   cout<<"Area of Circle is : "<<fret<<"\n"; 

    
    return 0;
}