#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>//����
//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		//�ɼ�Ϊ����++
//	}
//	*dest = *src;
//}

void my_strcpy(char* dest, const char* src)
{
	//����
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)//��ֵ���ʽ�����Ϊh��e...\0
	{
		;//�����
	}
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello hh";
	char* p = NULL;
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}