#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//��ȡ������32λ�����������е�����λ��ż��λ�����ֱ��ӡ
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	//��ȡ����λ
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	//��ȡż��λ
	for (i = 31; i >= 1; i = i - 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}