#include<iostream>
using namespace std;

class Base1        //4byte
{ 
    public:
      int A;
    
       Base1()
        {
         cout<<"Inside Base1 Constructor\n";
        }
       ~Base1()
        {
         cout<<"Inside Base1 Desstructor\n";
        }
        void Fun()
        {
         cout<<"Inside the Base1 Fun\n";
        }

};

class Base2       //12 byte
{
  public:
      int I;
      int J;
      int K;
        Base2()
        {
         cout<<"Inside Base2 Constructor\n";
        }
       ~Base2()
        {
         cout<<"Inside Base2 Destructor\n";
        }
        void Gun()
        {
         cout<<"Inside the Base2 Gun\n";
        }


};
//Not allowed in Java
class Derived : public Base1, public Base2    //24byte
{ 
   public:
      int X;
      int Y;
        Derived()
        {
         cout<<"Inside Derived Constructor\n";
        }
       ~Derived()
        {
         cout<<"Inside Derived Desstructor\n";
        }
        void Sun()
        {
         cout<<"Inside the Derived Sun\n";
        }

};

int main()
{
     Derived dobj;

     dobj.Fun();
     dobj.Gun();
     dobj.Sun();

    return 0;
}