#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	
	printf("%s\n", "abc"); //��ӡ�ַ�����%s���ַ�����˫����������
	double a = 1526.33;
	printf("%e\n", a); //��ѧ������
	/*char ch = 'A';
	putchar(ch);*/
	double c = 3.1415;
	printf("%10.4lf\n",c);
	int d = 12;
	printf("%d\n", d);
	printf("%4d\n", d);
	//%4dͬ��
	printf("%-4d\n", d);
	printf("%04d\n", d); //ռ4λ���յ�λ��0����
	system("pause");
	return 0;
}