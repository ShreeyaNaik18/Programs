//Write a program which accepts number from user and print that number of $ ans * on Screen
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
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