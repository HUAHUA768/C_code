#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	////字符型转ASCII码
	//char ch = 'a';
	//printf("%d\n", ch);
	////ASCII码如何转单字符型？
	//char jn = 65;
	//printf("%c\n", jn);

	//'8'转8
	printf("%d\n", '8');
	//'8'是56
	char ch = '8' - 48;
	printf("%d\n", ch);
	system("pause");
	return 0;
}