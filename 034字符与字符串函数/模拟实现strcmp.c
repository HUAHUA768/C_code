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
		//���
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
	//���Ը�����
	return *str1 - *str2;
}
int main()
{
	char arr1[] = "zhangsaa";
	char arr2[] = "zhangsam";//����Ƚ���ĸ�Ⱥ�˳�򣬶����ַ�������
	/*int ret = strcmp(arr1, arr2);*/
	/*int ret = my_strcmp(arr1, arr2);*/

	int ret = strncmp(arr1, arr2, 4);
	printf("%d\n", ret);//С�ڷ���-1
	//vs�ı��������ص���0��1��-1���������������������ص�������
	//c���Ա�׼ֻ�ǹ涨����>0,<0,=0������
	system("pause");
	return 0;
}