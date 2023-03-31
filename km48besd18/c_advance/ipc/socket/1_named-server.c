#include"/home/sreekanth/pratice/sk.h"

int main()
{
	int svrid,cltid,svrlen,cltlen;
	struct sockaddr_un client;
	struct sockaddr server;
	
	unlink("skntwk");
//	getchar();
	svrid=socket(AF_LOCAL,SOCK_STREAM,0);

	server.sa_family=AF_UNIX;
	strcpy(server.sa_data,"skntwk");
	svrlen=sizeof(server);

	bind(svrid,&server,svrlen);

	listen(svrid,1);
	while(1)
	{
		char sk[50];
		int s=0;
		printf("waiting for client to connect\n");

		cltlen=sizeof(client);
		cltid=accept(svrid,(struct sockaddr *)&client,&cltlen);
		read(cltid,sk,26);
		for(s=0;sk[s];s++)
		{
			sk[s]=sk[s]+32;
		}
		s=write(cltid,sk,26);
		close(cltid);
	}
	//close(svrid);
}
