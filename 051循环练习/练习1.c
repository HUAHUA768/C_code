#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main01()
{
	//计算1！+2！+3！+4！+...+10!的值
	int i, j;
	long long sum = 0;
	int ret = 1;
	for (i = 1; i <= 10; i++)
	{
		ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret = ret * j;
		}
		sum = sum + ret;
	}
	printf("%d\n", sum);

	////可以优化代码
	//for (n = 1; n <= 10; n++)
	//{
	//	ret = ret * n;
	//	sum = sum + ret;
	//}

	system("pause");
	return 0;
}