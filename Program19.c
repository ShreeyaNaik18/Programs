#include<stdio.h>

void Display(int iValue)
{
    int iCount = 0;
    iCount = 1;
    
    while(iCount <= iValue)
    {
         printf("JAI GANESH....\n");
         iCount++;
    }
}
int main()
{
    int iNo = 0;

    printf("Enter the number of Iteration : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}

