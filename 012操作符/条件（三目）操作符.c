#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	/*int c = a > b ? a : b;
		printf("%d\n", c);*/
		//���ű��ʽ
	int c = 15;
	int d = (a = c + 3, b = a + 8,  a + b);
	printf("%d\n", d); //�������ʽ�Ľ�������һ�����ʽ�Ľ��
	system("pause");
	return 0;
}