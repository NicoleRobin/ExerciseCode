#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

#define MAXLINE 256
#define PAGER "${PAGER:-more}" /* environment variable, or default */

int main(int argc, char **argv)
{
    char line[MAXLINE];
    memset(line, 0, MAXLINE + 1);
    FILE *fpin, *fpout;

    if (argc != 2)
    {
        printf("Usage: a.out <pathname>\n");
        return 0;
    }

    if ((fpin = fopen(argv[1], "r")) == NULL)
    {
        perror("fopen error");
        return -1;
    }

    if ((fpout = popen(PAGER, "w")) == NULL)
    {
        perror("popen error");
        return -1;
    }

    // copy argv[1] to pager
    while (fgets(line, MAXLINE, fpin) != NULL)
    {
        if (fputs(line, fpout) == EOF)
        {
            perror("fputs error");
            return -1;
        }
    }

    if (ferror(fpin))
    {
        perror("fgets error");
        return -1;
    }

    fclose(fpin);

    if (pclose(fpout) == -1)
    {
        perror("pclose error");
        return -1;
    }

    return 0;
}
