#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
	pid_t pid;

	pid=fork();
	pid=fork();
	if(pid==0){
		printf("Hello from the Child\n");
	}else{
		printf("Hello from the Parent\n");
	}

	return 0;
}
