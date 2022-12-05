//write a  program which accept one number from user and print that nunmber of even numbers on screen
#include<stdio.h>

void PrintEven(int iNo)
{   
    int i = 0;
    int j = 0;

    if(iNo <= 0)
    {
        return;
    }
    for(j = 1 ; j <= iNo ; j++)
    {
        if(i % 2 == 0)
        {
            j = j +1;
            printf("%d\n",i);
        }
    }    
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}