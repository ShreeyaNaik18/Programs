#include<iostream>
using namespace std;

class Base
{
 public : 
   int A; 
   int B;

    Base()
   {
      cout<<"Inside Base Constructor\n";
   }
   ~Base()
   {
      cout<<"Inside Base Desstructor\n";
   }
    void Fun()
   {
      cout<<"Inside the Base Fun\n";
   }

};

class Derived : public Base
{
    public : 
       int X;
       int Y;

       Derived()
       {
         cout<<"Inside Derived Constructor\n";
       }
       ~Derived()
       {
         cout<<"Inside Derived Destructor\n";
       }
       void Gun()
       {
         cout<<"Inside the Derived Gun \n";
       }

};

int main()
{  
   Derived * ptr = NULL;

   ptr = new Derived;

   ptr->Fun();
   ptr->Gun();

   delete ptr;

    return 0;
}