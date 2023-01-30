#include<stdio.h>
#include<stdlib.h>      //FileHandling libraries
#include<fcntl.h>       //for platform dependent //fileControl.h
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
    
    //read(kuthun,kashyat,kiti);
    Length = read(fd,Data,13);

    printf("Data from the file is :\n");

    write(1,Data,Length);
    //to avoid the garbage value we write this statement.
    
    close(fd);

    return 0;
}