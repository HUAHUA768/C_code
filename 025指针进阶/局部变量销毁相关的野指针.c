#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* pc = test();//Ұָ��
	printf("%d\n", *pc);
	//Ϊʲô�ռ��Ѿ�������ȴ���ܴ�ӡ��10�أ�
	system("pause");
	return 0;
}