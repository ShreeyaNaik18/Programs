//Accept file from user also create a new file and copy the data of first file to created file.
#include<stdio.h>
#include<stdlib.h> 
#include<fcntl.h>       
#include<unistd.h>   
#include<string.h>

int main()
{ 
    char Fname1[20];
    char Fname2[20];
    int fdSource = 0 , fdDestination = 0, Length = 0;  
    char Data[100];

    printf("Enter the file name which contains the data : \n");
    scanf("%s",Fname1);
    
    fdSource = open(Fname1, O_RDONLY);

    if(fdSource == -1)
    {
    printf("Unable to Open\n");
    return -1;
    }

    if(fdDestination == -1)
    {
    printf("Unable to create new file \n");
    return -1;
    }
  
    printf("Enter the file name which you want to create : \n");
    scanf("%s",Fname2);

    fdDestination = creat(Fname2,0777);
    
    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
    {
       write(fdDestination,Data,Length);
    }
    
    close(fdSource);
    close(fdDestination);
    
    return 0;
}