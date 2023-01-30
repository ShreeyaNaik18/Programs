//Accept file name from user and read whole file and display whole data on the screen 
#include<stdio.h>
#include<stdlib.h>      //FileHandling libraries
#include<fcntl.h>       //for platform dependent //fileControl.h
#include<unistd.h>   //For mac and linux
#include<string.h>

int main()
{ 
    char Fname[20];
    int fd = 0, Length = 0;  
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
       write(1,Data,Length);
       //to avoid garbage value we use write function instead of printf
    }
    
    close(fd);
    
    return 0;
}