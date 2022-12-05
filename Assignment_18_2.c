//Accept number from user and Displsy below pattern
#include<stdio.h>

void Pattern(int iNo)
{ 
    int iCnt = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t",iCnt); 
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}