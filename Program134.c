#include<stdio.h>


int strlenX(char *str)
{
   int iCnt = 0;

   while(*str != '\0')   //by using pointer
   {
      iCnt++;
      str++;
   }
   return iCnt;
}

int main()
{ 
    char Arr[50];    //base address 100
    int iRet = 0;

    printf("Please enter String :\n"); 
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);    //strlenX(100)

    printf("Number of Characters are %d\n",iRet);

    return 0;
}