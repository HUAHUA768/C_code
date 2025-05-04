#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main02()
{
	int a, b;
	scanf("%d %d", &a, &b);
	while (a % b)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	printf("%d", b);
	//算最小公倍数：a*b/最大公约数
	system("pause");
	return 0;
}