//Write a program which accepts N from user and print all odd numbers up to N
#include<stdio.h>

void OddDisplay(int iNo)
{
  
    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      if(iCnt % 2 != 0)
      {
        printf("%d\t",iCnt);
      }
    }
}
int main()
{  
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}