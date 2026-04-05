#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2;

    // Fork the first child process
    pid1 = fork();

    if (pid1 < 0) {
        fprintf(stderr, "Fork Failed\n");
        return 1;
    }
    else if (pid1 == 0) {
        // First child process: list files using 'ls' command
        printf("Child 1: Listing files in the current directory:\n");
        execlp("/bin/ls", "ls", NULL);  // Replace child process with 'ls' command
        exit(0);  // Child exits
    }
    else {
        // Parent process
        wait(NULL);  // Parent waits for the first child to finish
        printf("Parent: Child 1 has completed.\n");

        // Fork the second child process
        pid2 = fork();

        if (pid2 < 0) {
            fprintf(stderr, "Fork Failed\n");
            return 1;
        }
        else if (pid2 == 0) {
            // Second child process
            printf("Child 2: Simulating long running task\n");
            sleep(5);  // Simulate a long-running task (5 seconds)
            printf("Child 2: Completed long-running task.\n");
            exit(0);  // Child exits
        }
        else {
            // Parent process will die before second child completes
            printf("Parent: I am about to terminate, leaving child 2 orphaned.\n");
            exit(0);  // Parent exits, leaving child 2 to be orphaned
        }
    }

    return 0;
}

