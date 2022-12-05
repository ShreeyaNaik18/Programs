//Accept number from user and And Display the even Factor of that number
#include<stdio.h>

void DisplayOddFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt = iCnt+2)
    {
        if((iNo % iCnt == 0))
        {
            printf("%d\n",iCnt);
        }
    }
   
}
int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayOddFactor(iValue);

    return 0;
}