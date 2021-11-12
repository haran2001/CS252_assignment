#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/wait.h>
#define size 50

int main(int arvuments, char* arv[]) 
{
    //Declaration and initialization of variables
    int file[2];
    pid_t childid;
    char readBuff[size];
    pipe(file);
    
    //Check if both/only source and target files are there
    if( arvuments != 3 ) 
    {
        printf("ERROR: Need exactly 2 parameters.\n");
        exit(1);
    }
    
    //Initialize source and target from termial arguments
    int fileOpen = open(arv[1], 0);
    int TargetFile = open(arv[2], O_RDWR|O_CREAT|O_APPEND, 0666);
    
    //Return failure code if open() call failed.
    if (fileOpen == -1 || TargetFile == -1) 
    {
        printf("File can not be opened\n");
        exit(1);
    }
    
    //Start a parent-child relationship
    childid = fork();
    
    //Child process copies contents from buffer to target file
    if (childid == 0) 
    {
        close(file[1]);
        while (read(file[0], readBuff, sizeof(readBuff)) > 0)
	    {
		    write(TargetFile, readBuff, strlen(readBuff) - 1);
        }
        close(file[0]);
        close(TargetFile);
    }

    //Parent process reads contents into buffer from the source
    //Then it waits for child to complete
    else 
    {
        close(file[0]);
	    while (read(fileOpen, readBuff, sizeof(readBuff)) > 0) 
	    {
            write(file[1], readBuff, sizeof(readBuff));
            memset(readBuff, 0, size);
        }
        close(file[1]);
        close(fileOpen);
        wait(NULL);
    }
}