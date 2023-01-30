#include<stdio.h>
#include<stdlib.h>//FileHandling libraries
#include<fcntl.h>    //for platform dependent //fileControl.h

//O_RDWR      OPEN FOR READING AND WRITING 
//O_WRONLY     OPEN FOR WRITING
//O_RDONLY     OPEN FOR READING
int main()
{
    char Fname[20];
    int fd = 0;   //fd = file Descriptor

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
    }

    return 0;
}