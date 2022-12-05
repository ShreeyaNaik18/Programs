//Write a program which accept number from user and return the multiplication of all digits.
#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;
    int iMult = 1;
     if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iMult = iMult * iDigit;

        iNo = iNo/10;
        
        iCnt++;
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}