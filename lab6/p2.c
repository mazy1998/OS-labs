#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int
main(int argc, char *argv[])
{
    printf("hello world (pid:%d)\n", (int) getpid());
    int rc = fork();
    int rc1 = fork();
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        //int rc1 = fork();
        // int rc2 = fork();
        printf("hello, I am child (pid:%d)\n", (int) getpid());
	sleep(1);
    } else {
        // parent goes down this path (original process)
        int status;
        //int wc  = wait(NULL);
        int wc = waitpid(rc1 , &status, 0) ;
        printf("hello, I am parent of %d (wc:%d) (pid:%d) (status:%d)\n",rc, wc, (int) getpid(),status);
    }
    return 0;
}
