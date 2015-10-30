/*******************************************************************************
* File Name		: 15_1.c
* Author		: zjw
* Email			: emp3XzA3MjJAMTYzLmNvbQo= (base64 encode)
* Create Time	: 2015年04月27日 星期一 13时42分58秒
*******************************************************************************/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1024

int main(int argc, char **argv)
{
	int n;
	int fd[2];
	pid_t pid;
	char line[MAXLINE];

	if (pipe(fd) < 0)
	{
		perror("Create pipe failed!");
	}
	if ((pid = fork()) < 0)
	{ // error
		perror("Fork error");
	}
	else if (pid > 0)
	{ // parent process
		// close read
		printf("parent process \n");
		close(fd[0]);
		write(fd[1], "hello workd\n", 12);
		wait(NULL);
		printf("child process exit \n");
	}
	else
	{ // child process
		// close write
		printf("child process \n");
		close(fd[1]);
		n = read(fd[0], line, MAXLINE);
		write(STDOUT_FILENO, line, n);
	}
	
	exit(0);
}
