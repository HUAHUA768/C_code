#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char ch = 0;
	ch = getchar();
	printf("%c\n", ch);
	ch = getchar();
	printf("ch=%c\n", ch);
	//���ԣ���scanfһ�������������ַ�ʱ���ڶ��������ḳ�ϻس���
	system("pause");
	return 0;
}