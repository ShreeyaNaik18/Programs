//Accept one Character from user and convert case of that character
#include<stdio.h>

void DisplayConvert(int cValue)
{
   if(cValue >= 65 && cValue<= 90)
   {
      cValue = cValue + 32;
      printf("Lower Case is %c",cValue);
   }
   else
   {
       cValue = cValue - 32;
      printf("Upper Case is %c",cValue);
   }

}
int main()
{
     char CValue ='\0';
     printf("enter Character\n");
     scanf("%c",&CValue);

     DisplayConvert(CValue);
    return 0;
}