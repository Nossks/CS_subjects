#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For fork() and execlp()
#include <sys/wait.h>
int main() {    
        execlp("ls", "ls", NULL);         
        printf("non executeble");
    	return 0;  
}

