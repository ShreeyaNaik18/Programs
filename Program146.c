//Accept string from user as well as one character and Check wheather it is character or not
#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
   while(*str != '\0')
   {
     if(*str == ch)
     { 
        break;
     }
      str++;
   }
   if(*str == '\0')
   {
    return false;
   }
   else
   {
    return true;
   }

}

int main()
{ 
     char Arr[20] ;
     bool bRet = 0;
     char cValue = '\0';

     printf("Please enter string\n");
     scanf("%[^'\n]s",Arr);

    printf("Please enter the letter\n");
     scanf(" %c",&cValue); 

     bRet = Check(Arr,cValue);
     
     if(bRet == true)
     {
        printf("Character is present in the string\n");
     }
     else
     {
        printf("Character is not present in the string\n");
     }
     

    return 0;
}