#include<stdio.h>
#include<string.h>

int main()
{ 
   char Arr[6] = "Hello";
   char *ptr = Arr;
   int iCnt = 0;
   
   while(*ptr != '\0')
   {
      iCnt++;
      ptr++;
   }

   printf("Length of the string :%d\n",iCnt); 

   return 0;
}