#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
int main()
{
	//int a = 5;
	//int b = 4;
	//int m = MAX(a++,b++);
	////(a++)>(b++)?(a++):(b++)
	////5>4 a=6 b=5
	////���Ϊa++���ȸ�ֵ��++����m=6��a=7
	////�����m=6,a=7,b=5
	//printf("m=%d\n", m);
	//printf("a=%d b=%d\n", a,b);

	//malloc������Ҫ�˹��������ֽ�����̫�鷳�ˣ���ô�죿
	int* p = MALLOC(10, int);
	//������ʱ��
	system("pause");
	return 0;
}