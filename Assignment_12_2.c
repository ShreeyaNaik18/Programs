//Write a program which accept number from user and Check Wheather it contains 0 in it or not.
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return FALSE;
        }
        else 
        {
            return TRUE;
        }
        iNo = iNo/10;
         iCnt++;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is NO Zero");
    }

    return 0;
}