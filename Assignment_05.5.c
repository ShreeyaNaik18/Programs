//Write a prigram which accepts number from user and return difference of Summation of all non factor and factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iDiff = 0;
    for(iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
          iSum = iSum + iCnt;
        }   
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}