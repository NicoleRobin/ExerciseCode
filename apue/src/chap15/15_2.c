/*******************************************************************************
* File Name		: 15_2.c
* Author		: zjw
* Email			: emp3XzA3MjJAMTYzLmNvbQo= (base64 encode)
* Create Time	: 2015年04月27日 星期一 14时07分09秒
*******************************************************************************/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define DEF_PAGER "/usr/bin/less"

int main(int argc, char **argv)
{
	int n;
	int fd[2];
	pid_t pid;
	char *pager, *argv0;
	char line[MAXLINE];
	FILE *fp;

	if (argc != 2)
	{
		printf("usage: %s pathname\n", argv[0]);
		exit(0);
	}

	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open file: %s\n", argv[1]);
		exit(1);
	}
	if (pipe(fd) < 0)
	{
		perror("Pipe error");
		exit(0);
	}
	if ((pid = fork()) < 0)
	{ // fork error
		perror("Fork error");
	}
	else if (pid > 0)
	{ // parent process
		// close read
		close(fd[0]);
		
		// parent copies argv[1] to pipe
		while (fgets(line, MAXLINE, fp) != NULL)
		{
			n = strlen(line);
			if (write(fd[1], line, n) != n)
			{
				perror("Write to pipe error");
			}
		}
		if (ferror(fp))
		{
			perror("Fgets error");
		}
		// close write end of pipe for reader
		close(fd[1]);

		if (waitpid(pid, NULL, 0) < 0)
		{
			perror("Waitpid error");
		}
		exit(0);
	}
	else
	{ // child process
		// close write
		close(fd[1]);
		if (fd[0] != STDIN_FILENO)
		{
			if (dup2(fd[0], STDIN_FILENO) != STDIN_FILENO)
			{
				perror("Dup2 error to stdin");
			}
			// don't need this after dup2
			close(fd[0]); 
		}

		// get parameters for execl()
		if ((pager = getenv("PAGER")) == NULL)
		{
			pager = DEF_PAGER;
		}
		if ((argv0 = strrchr(pager, '/')) != NULL)
		{
			argv0++;
		}
		else
		{
			argv0 = pager;
		}
		if (execl(pager, argv0, (char *)0) < 0)
		{
			printf("%s %s\n", pager, argv0);
			perror("Execl error");
		}
	}
	exit(0);
}
