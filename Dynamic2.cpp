#include<iostream>
using namespace std;

class Demo 
{
    public :
    int x;
    int y;

    Demo()
    {
      cout<<"Inside Constructor","\n";
    }
    ~Demo()
    {
      cout<<"Inside Destructor","\n";
    }
    void Fun()
    {
        cout<<"Inside fun"<<"\n";
    }
};

int main()
{
   Demo obj1;

   Demo *ptr = NULL;
   ptr = new Demo;

   ptr->Fun();
   cout<<"Value of X "<<ptr->x<<"\n";

   delete ptr;

    return 0;
}


