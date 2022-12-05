//Addition of two number
#include<iostream>
using namespace std;

class Arithematic
{
    public :              //Access Specifier
          int iValue1;  //Charactersitics
          int iValue2;  //Characteristics

          Arithematic()           //Default Constructor       
          {
            iValue1 = 0;
            iValue2 = 0;
          }
          Arithematic(int A, int B)      //Parameterized Constructor
          {
            iValue1 = A;
            iValue2 = B;
          }
          int Addition()
          {
            int iAdd;
            iAdd = iValue1 + iValue2;
            return iAdd;
          }
};

int main()
{
    int iRet = 0;

    Arithematic obj1;
    Arithematic obj2(10,11);
    Arithematic obj3(20,21);
 
   iRet = obj1.Addition();                    //0
   cout<<"Additin is :"<<iRet<<"\n";

   iRet = obj2.Addition();                   //21
   cout<<"Additin is :"<<iRet<<"\n";

   iRet = obj3.Addition();                    //41
   cout<<"Additin is :"<<iRet<<"\n";
    
     
    
    return 0;
}