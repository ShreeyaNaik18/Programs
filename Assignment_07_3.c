//Write a program which accepts number from user and print its number line
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; -iNo <= iCnt; iCnt--)
    {
      printf("%d\t",iCnt);
    }
}
int main()
{  
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}