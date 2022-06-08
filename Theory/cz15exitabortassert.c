#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
// exit terminates the process noramlly
// 0 tell that exit success and other values tell that exit failure

// abort() this funiton acoutally terminates the process by raising a sigabrt
// signal and your program can include a handler to intercept this signal

// assert() void assert( int expression ); if the expersison evaulate to 0
// filename line number is sent to the standard error and then about () iscalled ;

void open_record(char *record_name)
{
    assert(record_name != NULL);
}
int main()
{
    FILE *pfile;
    pfile = fopen("cz15exitabortassert.txt", "w");
    if (pfile == NULL)
    {
        printf("error opeing the file\n");
        exit(1);
    }
    else
    {
        fprintf(pfile, "the file is updated to be written entirely new\n");
        open_record(NULL);
        abort(); // function is aborted here
        fprintf(pfile, "the file is updated to be written entirely new\n");
    }

    return 0;
}