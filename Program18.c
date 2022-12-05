#include<stdio.h>

void Display()
{
    int iCount = 0;
    iCount = 1;        //1
    
    while(iCount <= 5)   //2
    {
         printf("JAI GANESH....\n");   //4
         iCount++;                     //3
    }
}
int main()
{

    Display();

    return 0;
}

