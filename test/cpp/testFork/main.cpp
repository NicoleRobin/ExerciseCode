/*******************************************************************************
* File Name		: ./main.cpp
* Author		: zjw
* Email			: emp3XzA3MjJAMTYzLmNvbQo= (base64 encode)
* Create Time	: 2015年04月23日 星期四 14时24分09秒
*******************************************************************************/
#include <unistd.h>
#include <sys/wait.h>
#include <iostream>
#include <cstdio>
#include <cerrno>

using namespace std;

int main(int argc, char **argv)
{
	pid_t pidChild = fork();

	if (pidChild == 0)
	{ // child process
		cout << "child process, pid: " << getpid() << endl;	
		sleep(10);
		cout << "child wake" << endl;
	}
	else if (pidChild > 0)
	{ // parent process
		cout << "parent process, pid: " << getpid() << endl;
		sleep(300);
		wait(NULL);
		cout << "parent wake" << endl;
	}
	else
	{ // error
		perror("create child process failed!");
	}

	return 0;
}
