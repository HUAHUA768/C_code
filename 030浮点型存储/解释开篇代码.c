#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int n = 9;
	//0000000000000000000000000001001
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);

	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	//��n�д�Ķ��������е���float����ȡ��
	//0 00000000 0000000000000000001001
	// ����Eȫ0�Ĺ���
	//E=1-127=-126
	//0.0000000000000000001001*2^(-126)
	//��������0
	*pFloat = 9.0;
	//9.0��1001.0��1.001*2^3  E=130
	//0 10000010 00100000000000000000000
	//0100 0001 0001 0000 0000 0000 0000 0000
	//����������ת��Ϊ��1,091,567,616
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	system("pause");
	return 0;
}