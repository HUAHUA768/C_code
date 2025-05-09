#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>//isspace
#include <limits.h>//判断是否越界
//1.空指针√
//2.空字符串（只有\0）√
//3.+-√
//4.空格√
//5.越界访问（数值太大）√
//6.非数字字符(终止转换)（非法返回）√

enum Status
{
	VALID,//0
	INVALID//1
}sta = INVALID;//默认非法
int my_atoi(const char* arr)
{
	assert(arr);//空指针
	long long ret = 0;
	int flag = 1;
	if (*arr == '\0')
	{
		return 0;//非法0
	}
	//删除空格
	while (isspace(*arr) == 1)
	{
		arr++;
	}
	if (isdigit(*arr) ==0)
	{
		//判断正负号
		if (*arr == '-')
		{
			flag = -1;
			arr++;
		}
		else
		{
			return 0;
		}//abc-1
	}
	
	
	while (*arr != '\0')
	{
		//判断是否数字
		if (isdigit(*arr) !=0)
		{
			ret = ret * 10 + (*arr - '0') * flag;
			//判断是否越界，改long long
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
			
		}
		//不是数字 123abc
		else
		{
			return (int)ret;
		}
		arr++;
	}
	sta = VALID;
	return (int)ret;
	
}
int main()
{
	char arr[20] = "123456";
	/*int a = atoi(arr);*/
	int a = my_atoi(arr);
	if (sta == INVALID)
	{
		printf("非法返回：%d\n", a);
	}
	else if (sta == VALID)
	{
		printf("合法转换：%d\n", a);
	}
	return 0;
}