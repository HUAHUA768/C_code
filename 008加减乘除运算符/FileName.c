#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	double f = a*1.0 / b;
	printf("%lf\n", f); //发现等于零,a*1.0即可解决问题

	//自加自减
	int k = 1, j = 0;
	j = k++;
	printf("j=%d,k=%d\n", j, k);
	//如果++在后，先使用，再自加，即j=k（原始），k=2；
	int m = 1, n = 0;
	n = ++m;
	printf("m=%d,n=%d\n", m, n);
	//++在前，先自加，再 使用
	system("pause");
	return 0;
}