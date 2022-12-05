//Write a program which accept number from user and display the table in reverse
#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    for(iCnt = 10; iCnt >= 1 ;iCnt --)
    {
       printf("%d\n",iNo * iCnt);
    } 
}
int main()
{  
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    printf("___________________________________________\n");
    Table(iValue);

    return 0;
}