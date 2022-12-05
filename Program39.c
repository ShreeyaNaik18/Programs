//Accept the number form user and Display that number Reversely
#include<stdio.h>

void DisplayReverse(int iNo)
{ 
    int iCnt = 0;
    
    printf("__________________________________________________________________________________________\n");

    for(iCnt = iNo ; iCnt >= 1 ; iCnt --)
    {
        printf("%d\t",iCnt);
    }
    printf("\n_________________________________________________________________________________________\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}