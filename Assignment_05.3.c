//wrte a program whichbaccepts number from user and displau all its non factor

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;
   
    for(iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
           printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}