//Write a program which accept number from user and return the count of even digits.
#include<stdio.h>

int CheckEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;
    int iCount = 0;
     if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        iCnt++;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CheckEven(iValue);

    printf("%d",iRet);

    return 0;
}