#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int* pa = &a;
	*pa = 20;//paҲ��һ��������һ��ָ��
	printf("%d\n", a);
	int** ppa = &pa;//����ָ��
	//���ͨ��ppa�ҵ�a��
	**ppa = 30;
	printf("%d\n", a);
	system("pause");
	return 0;
}