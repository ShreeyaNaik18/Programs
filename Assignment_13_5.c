//Write a program which returns Difference Between Even Factorial And Odd factorial
#include<stdio.h>
int CountDiff(int iNo)
{   
    int iDigit = 0;
    int iCnt = 1;
    int iEven = 1;
    int iOdd = 1;
     if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
       {
         iEven = iEven + iDigit;
       }
       else
       {
         iOdd = iOdd + iDigit;
       }
        iNo = iNo/10;
        iCnt++;
    }
    return iEven - iOdd;
}

int main()
{  
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf(" %d",iRet);

    return 0;
}