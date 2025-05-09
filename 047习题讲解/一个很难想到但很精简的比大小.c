#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//int arr[4] = { 0 };
	//int i = 0;  //0,1,2,3
	//while (i < 4)
	//{
	//	scanf("%d", &arr[i]);
	//	i++;
	//}
	//int max = arr[0];
	//i = 1;
	//while (i < 4)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//	i++;
	//}
	//printf("%d\n", max);

	//另一种更简单的方法
	int i = 1;
	int max = scanf("%d", &max);
	while (i < 4)
	{
		int n = scanf("%d", &n);
		if (n > max)
		{
			max = n;
		}
	}
	printf("%d\n", max);

	system("pause");
	return 0;
}