#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>//to be incluced to call fork()
#include <unistd.h>//this is where the fork lives
// fork system call is used to create new child process, which concurently runs with the parent process (which makes the fork call)

// A child process uses the same pc(program counter), same CPU registers, same open files which use in the parent process.

// It takes no parameters and returns an integer value. Below are different values returned by fork().

// Negative Value: creation of a child process was unsuccessful.
// Zero: Returned to the newly created child process.
// Positive value: Returned to parent or caller. The value contains process ID of newly created child process.
void forkexample()
{
    // child process because return value zero
    if (fork() == 0)
        printf("Hello from Child!\n");
  
    // parent process because return value non-zero.
    else
        printf("Hello from Parent!\n");
}
int main()
{
    forkexample();
    // fork();
    printf("This is hello to the world \n");
    return 0;
}