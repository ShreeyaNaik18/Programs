//Accept two numbers from user and display first number in second number of times
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;
    for(i = 1; i <= iFrequency ; i++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    
    printf("Enter the frequency:");
    scanf("%d",&iCount);

    Display(iValue , iCount);
    return 0;
}