//Accept string from user as well as one character and count no of the ocuurance of that user character
//Solution of 143.c
#include<stdio.h>

int CountFrequency(char *str, char ch)
{
   int iCnt = 0;

   while(*str != '\0')
   {
     if(*str == ch)
     {
        iCnt++;
     }
      str++;
   }
    return iCnt;
}

int main()
{ 
     char Arr[20] ;
     int iRet = 0;
     char cValue = '\0';

     printf("Please enter string\n");
     scanf("%[^'\n]s",Arr);

    printf("Please enter the letter which you want to count the occurance\n");
     scanf(" %c",&cValue);    //by giving space infront of %c will get the output

     iRet = CountFrequency(Arr,cValue);

     printf("Frequency of Capital letters is : %d\n",iRet);

    return 0;
}