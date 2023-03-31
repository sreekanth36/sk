#include"/home/sreekanth/pratice/sk.h"

void *sending(void *arg);
void *receiving(void *arg);
char buffer[1024];int len,clientsocket;
struct sockaddr_in serverAddr;
int main()
{

	int res1,res2,result;
	pthread_t a_thread,b_thread;
	void *thread_result;
	int  portNum;

	clientsocket = socket(AF_INET, SOCK_STREAM, 0);
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(7891);
	serverAddr.sin_addr.s_addr = inet_addr("10.0.2.15");
	len = sizeof(serverAddr);

	result = connect(clientsocket, (struct sockaddr *)&serverAddr, len);

	if(result == -1) {

		perror("oops: clientchat");
		exit(1);
	}

	res1 = pthread_create(&a_thread, NULL, sending, NULL);
	if (res1 != 0) {

		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	res1 = pthread_create(&b_thread, NULL, receiving, NULL);
	if (res2 != 0) {

		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	res2 = pthread_join(a_thread, &thread_result);
	if (res1 != 0) {

		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}

	res2 = pthread_join(b_thread, &thread_result);
	if (res2 != 0) {

		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}

}
void *sending(void *arg) 
{

	char buff[1024];
	while(1)
	{

		fgets(buff,1024,stdin);
		write(clientsocket,buff,sizeof(buff));
	}

	pthread_exit("exit");	
}
void *receiving(void *arg)
{

	char buff[1024];
	while(1)
	{

		read(clientsocket,buff,1024);
		printf("received from server:%s",buff);
	}
	pthread_exit("exit");	
}
