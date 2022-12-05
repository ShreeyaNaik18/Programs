//Check wheather the charcter is Small or not
#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >='65') && (ch <='90'))
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
     printf("%c is a Capital case letter\n",cValue);
   }
    else
   {
     printf("%c is a not Capital case letter\n",cValue);
   }

    return 0;
}