//get two numbers from user and do multiplication of tht numbers by using function
#include<stdio.h>

int MultiplicationofNumbers(int iNo1, int iNo2)
{
    int iAns = 0;

   iAns = iNo1 * iNo2;

   return iAns;
}

int main()
{   
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Please Enter Your First Number : \n");
    scanf("%d",&iValue1);

    printf("Please Enter Your Second Number : \n"); 
    scanf("%d",&iValue2);

    iRet = MultiplicationofNumbers(iValue1,iValue2);

    printf("Multiplication of the Two Numbers : \n",iRet);

    return 0;
}