#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char ch = 0;
	char num = 0;
	scanf("%c", &ch);
	printf("ch=%c\n",ch);
	scanf("%c", &ch);
	scanf("%c", &num);
	printf("num=%c\n", num);
	//������ȡ�����ַ�ʱ��ֻ����һ��Ȼ�󰴻س�����
	// �ᷢ�ֵڶ����ַ����Ϊ��num= ���ո�
	// ������Ϊϵͳ�ѻس�����ȡȻ�󸳵��ڶ����ַ���
	//�����������һ��scanf("%c", &ch);����
	system("pause");
	return 0;
}