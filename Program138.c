//Accept string from user And calculate the frequency of occuarance of a
#include<stdio.h>

int CountCh(char *str)
{
   int iCnt = 0;

   while(*str != '\0')
   {
     if(*str == 'a')
     {
        iCnt++;
     }
      str++;
   }
    return iCnt;
}

int main()
{ 
     char Arr[50] ;
     int iRet = 0;
     printf("Please enter string\n");
     scanf("%[^'\n]s",Arr);

     iRet = CountCh(Arr);

     printf("Frequency of a is : %d\n",iRet);

    return 0;
}