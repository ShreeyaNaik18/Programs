#include<iostream>
using namespace std;

class Demo
{
    public :
        int i ;
        int j ;

    Demo()
    {
        i = 21;
        j = 21;
    }     
    Demo(int x, int y)
    {
        i = x;
        j = j;
    } 
};

int main()
{
    Demo obj1;
    Demo obj2(10,20);

    const Demo obj3;
    const Demo obj4(10,20);

    obj1.i++;     //A
    obj2.j++;     //A
   // obj3.i++;     //NA
  //obj4.j++;     //NA

    return 0;
}