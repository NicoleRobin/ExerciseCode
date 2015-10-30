#include <unistd.h>
#include <sys/types.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <pthread.h>

using namespace std;

pthread_t ntid;

void printtids(const char *s)
{
    pid_t pid;
    pthread_t tid;

    pid = getpid();
    tid = pthread_self();
    printf("%s pid %u tid %u (0x%x)\n", s, (unsigned int)pid, 
            (unsigned int)tid, (unsigned int)tid);
}

void *thr_fn(void *arg)
{
    printtids("new thread: ");
    return ((void*)0);
}

int main(int argc, char **argv)
{
    int err;

    err = pthread_create(&ntid, NULL, thr_fn, NULL);
    if (err != 0)
    {
        perror("can't create thread"/* strerror(err) */);
        exit(err);
    }
    printtids("main thread: ");
    sleep(1);

    return 0;
}
