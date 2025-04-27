#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char ch = 0;
	char num = 0;
	scanf("%c", &ch);
	printf("ch=%c\n",ch);
	scanf("%c", &ch);
	scanf("%c", &num);
	printf("num=%c\n", num);
	//连续读取两个字符时，只输入一个然后按回车键，
	// 会发现第二个字符输出为“num= ”空格，
	// 这是因为系统把回车键读取然后赋到第二个字符型
	//解决方法：加一行scanf("%c", &ch);即可
	system("pause");
	return 0;
}