#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	////�ַ���תASCII��
	//char ch = 'a';
	//printf("%d\n", ch);
	////ASCII�����ת���ַ��ͣ�
	//char jn = 65;
	//printf("%c\n", jn);

	//'8'ת8
	printf("%d\n", '8');
	//'8'��56
	char ch = '8' - 48;
	printf("%d\n", ch);
	system("pause");
	return 0;
}