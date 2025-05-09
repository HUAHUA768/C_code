#include <stdio.h>
int main()
{
	FILE* pf = fopen("log.txt", "w");
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		fprintf(pf,"file:%s,line=%d,date=%s,time=%s, i=%d\n", 
			__FILE__,__LINE__ ,__DATE__,
			__TIME__,i);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}