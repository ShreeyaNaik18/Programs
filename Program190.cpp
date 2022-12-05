//Problems on numbers : Factorial
#include<iostream>
using namespace std;

class Numbers
{
    public :              //Access Specifier
      int iNo;

    Numbers(int i)
    {
      iNo = i;
    }
    //Here you want to place the function with business logic 
    void Function()
    {
       //Logic
    }
};

int main()
{
     int iValue = 0;
     cout<<"Enter number : \n";
     cin>>iValue;

     Numbers obj(iValue);

     obj.Function();
     
    
    return 0;
}