//Write a program which accept number from user and count frequency of 2 in it.
#include<stdio.h>

int CheckZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;
    int iFrequency = 0;
     if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit == 2)
        {
            iFrequency++;
        }
        iCnt++;
    }
    return iFrequency;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CheckZero(iValue);

    printf("%d",iRet);

    return 0;
}