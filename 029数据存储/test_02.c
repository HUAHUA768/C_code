#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//单纯思考：-1 -2 ...-1000
	//char范围-128~127
	//-1 -2...-128
	//-128减一得127
	//10000000→01111111
	//127 123 125...0
	//∴128+127=255个字符
	
	printf("%d\n", strlen(a));
	system("pause");
	return 0;
}