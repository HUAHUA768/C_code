#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int DigitSum(unsigned int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
		return n;
	
}
int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);
	system("pause");
	return 0;
}