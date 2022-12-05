//Accept number from user and check wheather number is even or odd
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
   if(iNo % 2 == 0)
   {
    return 1;
   }
   else
   {
    return 0;
   }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter the number :\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    
    if(bRet == 1)
    {
    printf("%d is Even\n",iValue);
    }
    else
    {
      printf("%d is Odd\n",iValue);  
    }

    return 0;
}