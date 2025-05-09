#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	
	int j = 0;
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		for (j = 1; j <= 4; j++)
		{
			int k =(int) pow(10, j);//pow函数的结果类型是double，强制类型转换
			
			sum = sum + (i / k) * (i % k);

		}
		if (sum == i)
		{
			printf("%d ", i);
		}
		
	}
	system("pause");
	return 0;
}