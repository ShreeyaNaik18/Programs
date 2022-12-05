#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
   if((iNo % 3 == 0) && (iNo % 5 == 0))
   {
       return true;
   }
   else
   {
       return false;
   }
}
int main()
{   
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = DivisibleByThreeAndFive(iValue);
   
    if(bRet == true)
    {
       printf("Number is divisble by 3 and 5\n"); 
    }
    else
    {
       printf("Number is not divisble by 3 or 5\n"); 
    }
    return 0;
}
