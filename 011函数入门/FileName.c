#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//���Զ��庯��add�����
//Add�Ǻ�������x��y�Ǻ������������������Ǻ����壬�������int�Ƿ�������
Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}  //���Լ�Ϊ��return (x+y);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	system("pause");
	return 0;
}