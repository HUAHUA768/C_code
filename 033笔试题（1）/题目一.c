#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x %x\n", ptr1[-1], *ptr2);
	//ptr1[-1]�൱��*(ptr1-1),���Ϊ4
	//(int)a=a[0]������ָ��תΪ���ͣ�+1�͵�����ֵ��1��������һ���ֽ�
	//a�ĵ�һ��Ԫ����1�����ڴ�����ô�棺01 00 00 00
	// �ڶ�Ԫ�� 02 00 00 00��С�˴洢��
	//��ptr2ָ���һ��Ԫ�صĵڶ����ֽڣ���int*���Է���4���ֽ�
	//��ptr2���ʵ���00 00 00 02��ʮ�����ƣ�
	//����������02 00 00 00,��ʮ�����Ƶ���ʽ��ӡ������2 00 00 00

	system("pause");
	return 0;
}