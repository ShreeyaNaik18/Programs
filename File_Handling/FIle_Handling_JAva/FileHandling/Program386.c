#include<stdio.h>
#include<stdlib.h>//FileHandling libraries
#include<fcntl.h>    //for platform dependent //fileControl.h
//#include<unistd.h>   //For mac and linux
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0, Length = 0;   //fd = file Descriptor
    char Data[100];

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
       return -1;
    }

    printf("Enter the data that you want to write : \n");
    scanf(" %[^'\n']s",Data);
    
    Length = strlen(Data);
    //write(kashyat,kay,kiti);
    write(fd,Data,Length);
    
    return 0;
}