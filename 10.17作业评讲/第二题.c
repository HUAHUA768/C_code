#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	/*int n = 10;
	int arr[n] = { 0 };
	��������Ϊ����*/
	//C99��׼֮ǰ������Ĵ�С�����ó������߳������ʽ��ָ��
	//C99��׼֮��֧���˱䳤���飬���ʱ����������Ĵ�С�Ǳ�����
	// ��������ָ����ʽ�ǲ��ܳ�ʼ����
	//��ʼ�����Ǹ�{}����ԭʼ���飬vs��֧��C99�﷨�б䳤����

	//дһ����������������Ľϴ�ֵ
	int a, b;
	scanf("%d %d", &a, &b);
	int c = compare(a, b);
	printf("%d\n", c);

	system("pause");
	return 0;
}