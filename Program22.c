//Display 1 to 5 numbers 
#include<stdio.h>

void Display()
{    
     int iCount = 0;
    
     for(iCount = 1 ; iCount <= 5 ; iCount ++ )
     {
        printf("Marvellous : %d\n",iCount);
     }
    
}
int main()
{
    Display();

    return 0;
}