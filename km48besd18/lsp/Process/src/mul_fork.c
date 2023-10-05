#include <unistd.h>


main()
{
	fork();
	fork();
	fork();
	printf("hello world\n");

}
