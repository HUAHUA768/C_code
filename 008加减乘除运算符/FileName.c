#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	double f = a*1.0 / b;
	printf("%lf\n", f); //���ֵ�����,a*1.0���ɽ������

	//�Լ��Լ�
	int k = 1, j = 0;
	j = k++;
	printf("j=%d,k=%d\n", j, k);
	//���++�ں���ʹ�ã����Լӣ���j=k��ԭʼ����k=2��
	int m = 1, n = 0;
	n = ++m;
	printf("m=%d,n=%d\n", m, n);
	//++��ǰ�����Լӣ��� ʹ��
	system("pause");
	return 0;
}