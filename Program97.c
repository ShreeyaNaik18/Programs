//4
//A   B   C   D
//Time Complexity = N
//ASCII is ANERICAN STANDARD CODE FOR INFORMATION INTERCHANGE
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = 1 ;iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);   //Variable Data
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}