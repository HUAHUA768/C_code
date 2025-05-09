#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char arr[20] = { 0 };
	//设 密码为abcdef
	
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", arr);
		if (strcmp(arr, "abcdef") == 0)//==0说明两个字符串相等
			//比较两个字符串是否相同不可以用“==”，而用strcmp（一个库函数）
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("输入次数已达3次，账号已冻结\n");
	}
	system("pause");
	return 0;
}