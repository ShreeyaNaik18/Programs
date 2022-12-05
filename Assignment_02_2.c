//Accept one number from user and print that number of * on screen
#include<stdio.h>

void Accept(int iNo)
{
   while( iNo > 0)
    {
        printf("*\n");
        iNo--;
    }    
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}