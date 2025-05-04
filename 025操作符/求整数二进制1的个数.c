#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main04()
{
	//3 00000000000000000000000000000011
	//1 00000000000000000000000000000001
	//a&1 判断二进制最低位是否为1
	//再移位，可以判断第二位
	int a = 5;
	int n = 0;
	int i = 0;
	while (i < 32)
	{
		n = n + (a & 1);
		a = a >> 1;
		i++;
		//5 00000000000000000000000000000101
	}
	printf("%d\n", n);
	
	system("pause");
	return 0;
}