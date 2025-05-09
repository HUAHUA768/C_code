#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		//相等
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	/*if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}*/
	//可以更简练
	return *str1 - *str2;
}
int main()
{
	char arr1[] = "zhangsaa";
	char arr2[] = "zhangsam";//逐个比较字母先后顺序，而非字符串长度
	/*int ret = strcmp(arr1, arr2);*/
	/*int ret = my_strcmp(arr1, arr2);*/

	int ret = strncmp(arr1, arr2, 4);
	printf("%d\n", ret);//小于返回-1
	//vs的编译器返回的是0，1，-1，不代表其他编译器返回的是这仨
	//c语言标准只是规定返回>0,<0,=0的数字
	system("pause");
	return 0;
}