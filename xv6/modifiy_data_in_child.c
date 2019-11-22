/* Modifying data in Parent and child */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main ()
{
	int pid,status,i=0,*p;
	pid = fork();
	p = &i;
	if(pid>0){
	 sleep(1);
	 printf("Parent: %d and its address %d\n",i,p);
	 wait(&status);
	 
	}
	else{
	i=i+1;
	printf("Child:%d and its address %d\n",i,p);
	//exit(0);
	} 
}
