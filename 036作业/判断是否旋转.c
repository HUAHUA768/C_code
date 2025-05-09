#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int is_left_rotate(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	//把k从0到len来一次，依次比较
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)//旋转len次等于旋转0次
//	{
//		//旋转！
//		char tmp = arr1[0];
//		for (j = 0; j <= len - 2; j++)//9 8 7
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1,arr2)==0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//
//}


int is_left_rotate(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(arr1, arr1, len1);
	//为什么用strncat而不是用strcat
	//因为strcat把\0覆盖成a，就会一直复制，不会停止
	int ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		return 0;
	}
	else
		return 1;
}
int main()
{
	//char arr1[] = "abcdef";
	//char arr2[] = "cdefab";
	////判断arr2是否由arr1旋转得来
	//int ret = is_left_rotate(arr1,arr2);
	//printf("%d\n", ret);

	//另一种思路
	//abcdef
	//bcdefa
	//cdefab
	//defabc
	//efabcd
	//fabcde
	//abcdefabcdef
	//复制一份，这段字符串包含所有旋转的可能性

	char arr1[20] = "abcdef";
	char arr2[] = "cdef";
	int ret = is_left_rotate(arr1,arr2);
	if (ret == 1)
	{
		printf("嘻嘻哈哈okk\n");
	}
	else
	{
		printf("不OK\n");
	}
	
	//有漏洞！如果arr2是cdef呢？
	//加一个长度判断就能解决问题
	system("pause");
	return 0;
}