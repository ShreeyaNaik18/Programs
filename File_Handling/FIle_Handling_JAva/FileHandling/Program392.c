//Accept file name from user and Display the size of the file. 
#include<stdio.h>
#include<stdlib.h>    
#include<fcntl.h>      
#include<unistd.h> 
#include<string.h>

int main()
{ 
    char Fname[20];
    int fd = 0, Length = 0, iSize = 0;  
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
       iSize = iSize + Length;
    }

    printf("Size of the file is %d bytes. \n", iSize);
    
    close(fd);
    
    return 0;
}