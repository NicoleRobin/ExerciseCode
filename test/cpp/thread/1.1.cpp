/*******************************************************************************
* File Name		: 1.1.cpp
* Author		: zjw
* Email			: emp3XzA3MjJAMTYzLmNvbQo= (base64 encode)
* Create Time	: 2015年06月19日 星期五 14时42分59秒
*******************************************************************************/

#include <pthread.h>

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cerrno>
using namespace std;

pthread_t ntid;
void printids(const char *s)
{
	pid_t pid;
	pthread_t tid;

	pid = getpid();
	tid = pthread_self();
	printf("%s pid %u tid %u (0x%x)\n", s, (unsigned int)pid, (unsigned int)tid, (unsigned int)tid);
}

void* thr_fn(void *arg)
{
	printids("new thread: ");
	return ((void*)0);
}

int main(int argc, char **argv)
{
	int err;
	err = pthread_create(&ntid, NULL, thr_fn, NULL);
	if (err != 0)
	{
		perror("create thread failed!");
		return 0;
	}
	printids("main thread:");
	sleep(100);
	exit(0);
}
