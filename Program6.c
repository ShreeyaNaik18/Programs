//get two numbers from user and do multiplication of tht numbers
#include<stdio.h>

int main()
{   
    int iValue1 = 0;
    int iValue2 = 0;
    int iMult = 0;

    printf("Please Enter Your First Number : \n");
    scanf("%d",&iValue1);

    printf("Please Enter Your Second Number : \n"); 
    scanf("%d",&iValue2);

    iMult = iValue1 * iValue2;

    printf("Multiplication of the Two Numbers : \n%d\n",iMult);

    return 0;
}