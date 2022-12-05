////4 
//4
//3
//2
//1
//Time Complexity = N
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = iNo ;iCnt > 0; iCnt--)
    {
        printf("%d\n",iCnt);
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