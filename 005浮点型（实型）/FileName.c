#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	float a = 3.1415926; 
	double b = 3.1415926;
	printf("%.7f\n", a);
	printf("%.7lf\n", b);
	//%f��ӡfloat,%lf��ӡdouble��Ĭ�ϴ�ӡ6λС����
	//%.7f�����λС����
	//float���Ա�֤7λ��Ч���־�ȷ��double���Ա�֤15λ��Ч���־�ȷ
	system("pause");
	return 0;
}