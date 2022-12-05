//accept 2 string from user in which 1 is filled and another is unfilled and we have to copy the data of filled string to unfilled string and by converting lower to upper
#include<stdio.h>

void strcpyCapX(char *src, char *dest)
{
   while(*src != '\0')
   {
      if((*src >= 'a')&& (*src <= 'z'))
      {
        *dest = *src - 32;
      }
      else
      {
        *dest = *src;
      }
      src++;
      dest++;
   }
   *dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20];

    printf("please enter string\n");
    scanf("%[^\n]s",Arr);

    strcpyCapX(Arr,Brr);    //strcpy(100,200); //call by address

    printf("Copied string is : %s\n",Brr);

    return 0;
}
