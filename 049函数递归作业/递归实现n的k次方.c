#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double Pow(int n,int k)
{
	if (k >= 1)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	double sum = Pow(n,k);
	printf("%lf\n", sum);
	system("pause");
	return 0;
}