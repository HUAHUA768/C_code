#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//ģ��ʵ��
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s2!='\0'&& * s1 == *s2)
		{
			//����Ҫ��*s1!='\0'��
			//����   fghsjjab
			//             abc   
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)p;
		}
		p++;
	}
	return NULL;
}//Ҳ�����ø���Ч���㷨��kmp�㷨
int main()
{
	/*char email[] = "zpw@bitejiuyeke.com";
	char substr[] = "bitejiuyeke";*/
	char arr1[] = "abbbcdef";
	char arr2[] = "bcd";
	/*char* ret = my_strstr(email, substr);*/
	char* ret = my_strstr(arr1,arr2);
	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	system("pause");
	return 0;
}