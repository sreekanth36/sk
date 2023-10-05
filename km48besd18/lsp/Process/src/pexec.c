#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *const ps_argv[] = {"ps", "-eaf", 0};
int main()
{
    printf("Running ps with execlp\n");
    getchar();
   // execlp("ps", "ps", "-eaf");  // Library
    execve("/bin/ps",ps_argv, NULL); // system call
    execl("/bin/ps","ps","-eaf", NULL); // system call
    printf("Done.\n");
    exit(0);
}
