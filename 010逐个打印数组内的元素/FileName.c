#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
	printf("%d\n", arr[8]);//��ӡ����ĵھŸ�Ԫ��
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);//�����ӡԪ��
	}
	system("pause");
	return 0;
}