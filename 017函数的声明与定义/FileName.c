#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "add.h"
//����ͷ�ļ��ı����ǰ�ͷ�ļ���������

//�����������붨��
//�������������������Ķ������main��������ʱ����Ҫ����

//�����������ŵ�ͷ�ļ�add.h
//�����Ķ���ŵ�add.c
//���������е���ͷ�ļ�����ʹ�ú���


int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	int z = add(x, y);
	printf("%d", z);
	system("pause");
	return 0;
}
