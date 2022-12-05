//Accept full name and display on the screen
//its a problem this string will display only your first name...
#include<stdio.h>

int main()
{ 
    char Arr[30];

    printf("Enter your Full Name :\n");
    scanf("%s",Arr);  

    printf("Your Full Name is : %s\n",Arr);

    return 0;
}