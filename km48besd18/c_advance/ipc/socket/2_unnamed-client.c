#include"/home/sreekanth/pratice/sk.h"

int main()
{
	int cltid,cltlen,res;
	struct sockaddr_in client;
	char ch='a';
	char sk[50];
	cltid=socket(AF_INET,SOCK_STREAM,0);
	client.sin_family=AF_INET;
//	client.sin_addr.s_addr=inet_addr("192.168.1.37");
	client.sin_addr.s_addr=inet_addr("127.0.0.1");
	client.sin_port=htons(PORT);
	cltlen=sizeof(client);
	res=connect(cltid,(struct sockaddr *)&client,cltlen);
	if(res<0)
	{
		perror("connect falied");
		printf("hello %d\n",res);
		return 0;
	}

	while(1)
	{
	read(0,sk,10);
	write(cltid,sk,10);
	read(cltid,sk,10);
	printf("%s\n",sk);
	}
	close(cltid);
}
