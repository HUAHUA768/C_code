#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main01()
{
	//sizeof��һ��������
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//��������Ĵ�С����λ�ֽ�
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//����������Ԫ�صĸ���

	int a = (int)3.14;
	printf("%d\n", a); //ǿ������ת�������С������

	system("pause");
	return 0;
}