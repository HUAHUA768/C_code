#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char ch = 0;
	ch = getchar();
	printf("%c\n", ch);
	ch = getchar();
	printf("ch=%c\n", ch);
	//特性：和scanf一样，连读两个字符时，第二个函数会赋上回车键
	system("pause");
	return 0;
}