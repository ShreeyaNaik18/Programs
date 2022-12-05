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

class DerivedX : public Derived
{
    public : 
       int I;
       int J;

       DerivedX()
       {
         cout<<"Inside DerivedX Constructor\n";
       }
       ~DerivedX()
       {
         cout<<"Inside DerivedX Destructor\n";
       }
       void Sun()
       {
         cout<<"Inside the Derived Sun \n";
       }

};

int main()
{ 

   cout<<"Size of the Base : "<<sizeof(Base)<< "\n";
   cout<<"Size of the Derived : "<<sizeof(Derived)<< "\n";
   cout<<"Size of the DerivedX : "<<sizeof(DerivedX)<< "\n";
 
    DerivedX dobj;

    dobj.Fun();
    dobj.Gun();
    dobj.Sun(); 
  /*
   DerivedX * ptr = NULL;

   ptr = new DerivedX;

   ptr->Fun();
   ptr->Gun();
   ptr->Sun();

   delete ptr;
   */
    return 0;
}