#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main ()
{
    pid_t pid;

    pid = fork ();

    if (pid) {
        printf ("\nI am the parent of pid = %d \n", pid);
    } else if (!pid) {
        printf ("\nI am baby\n");
     } else if (pid == -1) {
         printf ("\nERROR\n");

     }
}
