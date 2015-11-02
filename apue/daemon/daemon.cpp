/*******************************************************************************
* File Name		: daemon.cpp
* Author		: zjw
* Email			: zjw_0722@163.com
* Create Time	: 2015年01月05日 星期一 16时00分15秒
*******************************************************************************/

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv)
{
	pid_t pid, sid;
	
	// Fork off the parent process
	pid = fork();
	if (pid < 0)
	{
		exit(-1);
	}

	// If we got a good PID, then we can exit the parent process.
	if (pid > 0)
	{
		exit(-1);
	}

	// Change the file mode mask
	umask(0);

	// Open any logs here
	ofstream fout("/var/log/daemon.log");
	if (!fout)
	{
		exit(-1);
	}

	// Create a new SID(Session ID) for the child process
	sid = setsid();
	if (sid < 0)
	{
		// Log any failure
		exit(-1);
	}

	// Change the current working directory
	if ((chdir("/")) < 0)
	{
		// Log any failure
		exit(-1);
	}

	// Close out the standard file descriptors
	close(STDIN_FILENO);
	close(STDOUT_FILENO);
	close(STDERR_FILENO);

	// Daemon-specific initialization goes here
	
	// The big loop
	while (true)
	{
		time_t timeNow;
		time(&timeNow);
		fout << asctime(localtime(&timeNow)) << endl;

		sleep(30);
	}
	cout << "over" << endl;    	
	return 0;
}
