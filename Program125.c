#include<stdio.h>

int main()
{  
    printf("_______________________________________________________________________\n");
    printf("ASCII table\n");
    printf("_______________________________________________________________________\n");
    
    printf("Char\tDec\tHex\tOct");

    for(int i = 0; i<=127; i++)
    {
       printf("%c \t %d \t %x \t %o\n",i,i,i,i); 
    }
    printf("\n_______________________________________________________________________\n");

    return 0;
}