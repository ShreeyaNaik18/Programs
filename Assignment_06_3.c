//write a program which accept two number from user and check wheather numbers are equal or not
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter First number\n");
    scanf("%d",&iValue1);

     printf("Enter Second number\n");
    scanf("%d",&iValue2);

    bRet = ChkGreater(iValue1,iValue2);
    
    if(bRet == 1)
    {
        printf("Equal");
    }
    else
    {
       printf("Not Equal");
    }

    return 0;
}