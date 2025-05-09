#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//int year = 0;
	//int month = 0;
	//int day = 0;
	//scanf("%4d", &year);
	//scanf("%2d", &month);
	//scanf("%2d", &day);
	////也可以写成scanf("%4d%2d%2d",&year,&month,&day)
	//printf("year=%d\n", year);
	//printf("month=%02d\n", month);
	//printf("day=%02d\n", day);

	//printf的返回值
	int n = printf("Hello world!");
	printf("\n%d\n", n);  


	system("pause");
	return 0;
}