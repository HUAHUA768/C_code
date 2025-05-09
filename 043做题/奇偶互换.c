#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define EXCHANGE_BIT(n) (((n&(0x55555555))<<1)+((n&(0xAAAAAAAA))>>1))
//异或和加法都可以
int main()
{
	int n = -2;
	//00000000000000000000000000100000
	//
	//00000000000000000000000000010000
	//16
	printf("%d\n", EXCHANGE_BIT(n));
	system("pause");
	return 0;
}