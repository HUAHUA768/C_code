#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
	//���ļ�
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}