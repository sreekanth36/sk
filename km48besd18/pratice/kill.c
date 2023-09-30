#include"sk.h"

int main(int argc, char *argv[])
{
	argv[0]="kill";
	execve("/bin/kill",argv,NULL);
}
