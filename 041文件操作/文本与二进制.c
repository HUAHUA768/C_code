#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");//写成二进制格式
	if (pf == NULL)
	{
		perror("fopen:");
		return 1;
	}
	fwrite(&a, 4, 1, pf);

	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}