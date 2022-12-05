//Accept string from user and count the number of whitespaces
#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;
    while(*str != 0)
    {
       if(*str == ' ')
       {
           iCnt++;
       }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("please enter the string \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);       //strlwr(100);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}