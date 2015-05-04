#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

struct This {

    pid_t pid;

    This() {
        pid = fork();  // fork returns 0 in the child process
    }

    ~This() {
        if (pid) 
            waitpid(pid, NULL, 0);  // no status & no options
        else 
            exit(0);
    }
};

int main()
{
    int i;
    for (i = 0; i < 3; i++) {

        This is, forking, stupid;

        fprintf(stderr, "%d\n", i);  // print i, followed by a newline
    }
    return 0;
}

