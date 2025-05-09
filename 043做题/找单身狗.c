#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Find_single(int arr[], int sz, int* num1, int* num2)
{
	//异或在一块
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
		//一个数异或0等于它本身
	}
	//找最右边的1出现在第几位
	int yd = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			break;
		}
		//如何确认最低位是否为1？按位与1即可
		yd++;
		//yd=0表示最低位就是1
	}
	//分组
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> yd)&1) == 1)
		{
			(*num1) ^= arr[i];
		}
		else
		{
			(*num2) ^= arr[i];
		}
	}
}
int main()
{
	//1，2，3，4，5，1，2，3，4，6
	//找出不是一对的两个数字
	//若单身只有一个，全部按位异或在一起就能得出结果
	//两个：分组
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	Find_single(arr, sz, &num1, &num2);
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}