#include<stdio.h>
#include<stdlib.h>//FileHandling libraries
#include<fcntl.h>    //for platform dependent //fileControl.h

int CreateFile(char Name[])
{
   int fd = 0;
   fd = creat(Name,0777);
   return fd;

}

int main()
{
    char Fname[20];
    int fd = 0;   //fd = file Descriptor

    printf("Enter the file name that you want to create : \n");
    scanf("%s",Fname);

    fd = CreateFile(Fname);

    if(fd == -1)
    {
        printf("Unalbe to create file\n");
    }
    else
    {
        printf("File is Successfully created with FD %d\n",fd);
    }

    return 0;
}