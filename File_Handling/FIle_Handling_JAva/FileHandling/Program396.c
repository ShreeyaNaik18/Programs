//Accept file name from user and Display the Digits from that file. 
#include<stdio.h>
#include<stdlib.h>    
#include<fcntl.h>      
#include<unistd.h> 
#include<string.h>

int main()
{ 
    char Fname[20];
    int fd = 0, Length = 0, Count = 0, i = 0;  
    char Data[100];

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",Fname);
    
    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
    printf("Unable to Open\n");
    return -1;
    }
    
    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
       for(i = 0; i < Length; i++)
       {
         if((Data [i] >= '0') && (Data [i] <= '9'))
         {
            Count++;
         }
       }
    }

    printf("Number of  Digits are : %d\n",Count);
    
    close(fd);
    
    return 0;
}