//Write a program which accept number from user ans display its Digits in reverse
#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = iDigit;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
         iCnt--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}