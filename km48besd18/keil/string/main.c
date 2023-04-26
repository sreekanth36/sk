void skcpy(void);
void skcat(void);
void skncat(void);
void skrev(void);
void skupr(void);
void sklwr(void);
void skatoi(void);
int skcmp(void);
int skncmp(void);
int skicmp(void);
int skchr(void);
int skstr(void);
char sk[10]="sreekanth";

int main()
{
	int s;
	skcpy();
	skcat();
	skrev();
	skcpy();
	skupr();
	sklwr();
	skncat();
	skatoi();
	s=skcmp();
	s=skicmp();
	s=skncmp();
	s=skchr();
	s=skstr();
	return 0;
}
