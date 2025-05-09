#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main02()
{
	printf("printf(\"Hello World\\n\");\n");
	printf("cout<<\"Hello World\"<<endl;\n");
	//在双引号内要输出双引号需要转义字符\"
	//要输出\n但不换行需要用\\输出\
	system("pause");
	return 0;
}