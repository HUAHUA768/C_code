#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i)) //-1>4?  4���޷������ͣ�-1�ᱻת�����޷������ͣ�32��1
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	system("pause");
	return 0;
}