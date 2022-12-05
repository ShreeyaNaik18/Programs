//Check wheather the charcter is Digit or not
#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >='0') && (ch <='9'))
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
   char cValue = '\0';
   bool bRet = false;

   printf("Please Enter One Character\n");
   scanf("%c",&cValue);

   bRet = CheckSmall(cValue);
   if(bRet == true)
   {
     printf("%c is a Digit\n",cValue);
   }
    else
   {
     printf("%c is a not Digit\n",cValue);
   }

    return 0;
}