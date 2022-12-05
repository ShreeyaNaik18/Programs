//accept 2 string from user in which 1 is filled and another is unfilled and we have to copy the data of filled string to unfilled string 
#include<stdio.h>

void strcpyX(char *src, char *dest)
{
   while(*src != '\0')
   {
      *dest = *src;

      src++;
      dest++;
   }
   *dest = '\0';    //most imp statement  //1st way
}
int main()
{
    char Arr[20];
    char Brr[20];

    printf("please enter string\n");
    scanf("%[^\n]s",Arr);

    strcpyX(Arr,Brr);    //strcpy(100,200); //call by address

    printf("Copied string is : %s\n",Brr);

    return 0;
}
