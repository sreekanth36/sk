#include"/home/sreekanth/pratice/sk.h"

int main()
{
	int cltid,cltlen,s=0;
//	struct sockaddr_un client;
	struct sockaddr client;
	char c[50]={0};
	cltid=socket(AF_UNIX,SOCK_STREAM,0);
	client.sa_family=AF_UNIX;
//	client.sun_family=AF_UNIX;
//	strcpy(client.sun_path,"skntwk");
	strcpy(client.sa_data,"skntwk");
	cltlen=sizeof(client);
	do
	{
		c[s]=s+'A';
		s++;
	}
	while(s<26);
//	connect(cltid,(struct sockaddr *)&client,cltlen);
	connect(cltid,&client,cltlen);
	write(cltid,c,26);
	printf("==> sending to server <==\n%s\n",c);
	read(cltid,c,26);
	printf("==> receiving from server <==\n%s\n",c);
	close(cltid);
}
