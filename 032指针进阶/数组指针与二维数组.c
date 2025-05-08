#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print1(int (*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			//*p相当于首元素的地址
			printf("%d ", *(*(p + i) + j));
			//也可写成
			/*printf("%d ", p[i][j]);*/
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr, 3, 5);
	//arr是第一行的地址（相当于一维数组的数组指针）
	system("pause");
	return 0;
}