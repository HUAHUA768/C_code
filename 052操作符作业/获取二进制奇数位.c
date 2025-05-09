#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//获取整数的32位二进制序列中的奇数位和偶数位，并分别打印
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	//获取奇数位
	for (i = 30; i >= 0; i = i - 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	//获取偶数位
	for (i = 31; i >= 1; i = i - 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}