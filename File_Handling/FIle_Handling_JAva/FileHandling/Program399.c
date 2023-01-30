//command line arguments 
//displaying the name of .exe file
#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of argumnets are : %d\n",argc);//argc = argument count
   
    printf("Name of executable is : %s\n",argv[0]);//argv = argumentvector (Array)

    return 0;
}