#include<stdio.h>

int strlenX(char str[]) //removed the pointer 
{
   int iCnt = 0 , i = 0 ;

   for(i = 0; str[i] != '\0'; i++)   //by using for loop
   {
     iCnt++;
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