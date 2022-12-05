//Accept one number and check wheather it is divisible by 5 or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int iNo)
{
    if(iNo % 5 ==0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }

}
int main()
{
    int iValue = 0 ;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    
     if(bRet == TRUE)
     {
        printf("%d is Divisible by 5 \n",iValue);

     }
     else 
     {
         printf("%d is not Divisible by 5 \n",iValue);
     }

    return 0;
}