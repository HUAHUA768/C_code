#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//ָ�����飺�������ָ�������
	int* parr[10] = { &a,&b,&c };
	int i = 0;
	/*for (i = 0; i < 10; i++)
	{
		printf("%p\n", parr[i]);
	}*/

	//ͨ��ָ���������Ԫ�ط���ԭ������ŵ�ֵ
	for (i = 0; i < 3; i++)
	{
		printf("%d  ", *(parr[i]));
	}
	system("pause");
	return 0;
}