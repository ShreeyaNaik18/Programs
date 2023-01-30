//Accept file from user also create a new file and copy the data of first file to created file.
#include<stdio.h>
#include<stdlib.h> 
#include<fcntl.h>       
#include<unistd.h>   
#include<string.h>

int main(char argc, char *argv[])
{ 
    int fdSource = 0 , fdDestination = 0, Length = 0;  
    char Data[100];
    
    fdSource = open(argv[1], O_RDONLY);

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

    fdDestination = creat(argv[2],0777);
    
    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
    {
       write(fdDestination,Data,Length);
    }
    
    close(fdSource);
    close(fdDestination);
    printf("Data successfully copied.....\n");
    
    return 0;
}
//  Myexe     Marvellous.txt     Infosystyems.txt
// by using argv and argc we can remove printf and scanf for accessinbg the data 