#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//另一种思路
//ab cdef
//ba fedc
//cdefab 总体逆序
//调用三次逆序字符串即可
void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotate(char arr[], int k)
{
	assert(arr);
	int len = strlen(arr);
	k %= len;
	//左
	reverse(arr, arr + k - 1);
	//如果k=8呢？越界了，所以要转化
	//右
	reverse(arr + k, arr + len - 1);
	//整
	reverse(arr, arr + len - 1);
}
int main()
{
	//实现左旋k个字符
	//abcdef bcdefa
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr, k);
	printf("%s\n", arr);
	system("pause");
	return 0;
}