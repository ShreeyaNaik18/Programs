#include<stdio.h>
#include<stdlib.h>//FileHandling libraries
#include<fcntl.h>    //for platform dependent //fileControl.h

int OpenFile(char Name[])
{
    int fd = 0;
    fd = open(Name,O_RDWR);
    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;   //fd = file Descriptor

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",Fname);

    fd = OpenFile(Fname);

    if(fd == -1)
    {
        printf("Unalbe to open file\n");
    }
    else
    {
        printf("File is Successfully opened with FD %d\n",fd);
    }

    return 0;
}