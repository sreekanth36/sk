#include"/home/sreekanth/pratice/sk.h"

int main()
{
	int svrid,svrlen,cltid,cltlen;
	struct sockaddr_in server,client;

	svrid=socket(AF_INET,SOCK_STREAM,0);
	server.sin_family=AF_INET;	
	server.sin_addr.s_addr=inet_addr("192.168.1.37");
//	server.sin_addr.s_addr=inet_addr("127.0.0.1");
	server.sin_port=htons(9734);
	svrlen=sizeof(server);
	bind(svrid,(struct sockaddr *)&server,svrlen);
	listen(svrid,5);
	while(1)
	{
		char sk[50];
		printf("waiting for client to connect\n");

		cltlen=sizeof(client);
		cltid=accept(svrid,(struct sockaddr *)&client,&cltlen);
		if(cltid<0)
		{
			perror("accept failed");
			printf("he %d\n",cltid);
			break;
		}
		while(1)
		{
		read(cltid,sk,10);
//		sk[0]=sk[0]+1;
	printf("%s\n",sk);
	read(0,sk,10);
		write(cltid,sk,10);
		}
		close(cltid);
	}
}
