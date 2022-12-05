//Addition of two number
#include<iostream>
using namespace std;

class Arithmetic
{
    public :
        int Addition(int iValue1 ,int iValue2)
        {
            int iAdd = 0;

            iAdd = iValue1 + iValue2;

            return iAdd;
        }
};

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iAns = 0;
     cout<<"Enter the First number you want"<<"\n";  //printf("Enter first number you want :\n");
     cin>>iNo1;     //scanf("%d",&iNo1);

     cout<<"Enter the Second number you want"<<"\n";  //printf("Enter second number you want :\n");
     cin>>iNo2;     //scanf("%d",&iNo2);
     
     Arithmetic obj;     //object creation

     iAns = obj.Addition(iNo1,iNo2);

     cout<<"Addition is :"<<iAns<<"\n";    //printf("Addition is : %d\n",iAns);
     
    
    return 0;
}