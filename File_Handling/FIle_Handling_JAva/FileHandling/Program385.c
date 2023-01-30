#include<stdio.h>
#include<stdlib.h>//FileHandling libraries
#include<fcntl.h>    //for platform dependent //fileControl.h
//#include<unistd.h>   //For mac and linux

int main()
{
    char Fname[20];
    int fd = 0;   //fd = file Descriptor
    char Data[] = "Marvellous";

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unalbe to open file\n");
    }
    else
    {
        printf("File is Successfully opened with FD %d\n",fd);
        write(fd,Data,10);
    }
    

    return 0;
}