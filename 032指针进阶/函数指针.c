#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Add(int a, int b)
{
	return a + b;
}
int main()
{
	//��δ洢�����ĵ�ַ
	int (*pf)(int, int) = &Add;

	//�����ĵ�ַ��ʲô��
	/*int ret=(*pf)(2, 3);*/
	/*int ret = Add(2, 3);*/

	//��������ʾ��ַ
	//ͨ��ָ�������ú�������ʡ��*
	int ret = pf(2, 3);
	printf("%d\n", ret);
	system("pause");
	return 0;
}