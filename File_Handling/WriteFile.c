//System calls
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
//#include<unistd.h> for linux or mac os for handling errors generated for write and close function 

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Please enter file name that you want to Open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);   //Open_Read ,Write //O_RDONLY or O_WRONLY or O_RDWR

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
       printf("File is successfully opened with FD %d\n",fd); 
    }

    write(fd,"Marvellous",10);

    close(fd);

    return 0;
}