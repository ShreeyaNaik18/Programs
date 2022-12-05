//Accept string from user and convert the lower case string to upper case string
#include<stdio.h>

void struprX(char *str)
{
    while(*str != 0)
    {
       if((*str >= 'a')&& (*str <= 'z'))
       {
           *str = *str - 32;
       }
        str++;
    }
  
}
int main()
{
    char Arr[20];

    printf("please enter the string \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);       //strlwr(100);//call by address

    printf("String after conversion is : %s\n",Arr);

    return 0;
}