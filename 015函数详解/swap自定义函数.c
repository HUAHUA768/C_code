#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//��ֵ����
//void swap1(int x,int y)  //û�з���ֵ
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//��ʵ�Σ�ʵ�ʲ����������βΣ���ʽ��������ʱ���β���ʵ�ε�һ�ݿ���
//�βε��޸Ĳ���Ӱ��ʵ��
void swap2(int* px, int* py) //��ַ����
{
	int z = 0; //ȡa��b�ĵ�ַ������ָ�����Σ�����ַ��
	z = *px;
	*px = *py;
	*py = z;
}
int main01()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("����ǰ��a=%d��b=%d\n", a, b);
	//��ֵ����
	/*swap1(a, b);*/
	//��ַ����
	swap2(&a, &b); //ȡa��b�ĵ�ַ
	printf("������a=%d��b=%d\n", a, b);
	//����ж��Ƿ�Ҫ����ַ��
	//������������ı�ʵ�ε�ֵ������ȡ��ַ

	system("pause");
	return 0;
}