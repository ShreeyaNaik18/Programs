//Accept full name and display on the screen

#include<stdio.h>

int main()
{ 
    char Arr[30];

    printf("Enter your Full Name :\n");
    //scanf("%s",Arr);  
    scanf("%[^'\n']s",Arr);
    //ny using this we can give space n number times
    //by using this scanf ^'\n'...jo prynta \n user karat nahi to prynta string scan hot rahil
    //scanf jo prynta spcae det nahi to prynta accept karta value tya sathi ^\n use kartoy to avoid space  

    printf("Your Full Name is : %s\n",Arr);

    return 0;
}