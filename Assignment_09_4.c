//Write a program which accepts number from user and to find the factorial of odd number
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
       if(iCnt % 2 != 0)
       {
       iFact = iFact * iCnt;
       }
    } 
    return iFact;
}
int main()
{  
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}