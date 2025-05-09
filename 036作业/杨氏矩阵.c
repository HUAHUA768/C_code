#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//struct Point find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c-1;
//	struct Point p = { -1,-1 };//(-1,-1)
//	// 1 2 3
//	// 4 5 6
//	// 7 8 9
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//
//}

int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;
	while (x < *px && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	//杨氏矩阵：行列全都递增的矩阵
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	/*struct Point p = find_num(arr, 3, 3, k);
	printf("(%d,%d)", p.x, p.y);*/

	//另一种写法
	int a = 3;
	int b = 3;
	int ret = find_num(arr, &a, &b, k);
	if (ret == 1)
	{
		printf("%d %d\n", a, b);
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}