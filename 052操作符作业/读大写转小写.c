#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char ch = 0;
	//读大写转小写，读小写转大写
	while (scanf("%c", &ch) == 1)
	//scanf若读取成功，返回值为读取的数据的个数；若读取失败，返回值为EOF（！ = 1）
	{
		if (islower(ch))
			//库函数中也有判断大小写字母的函数
		{
			printf("%c\n", toupper(ch));
			//库函数中也有转换大小写的函数
		}
		if (isupper(ch))
		{
			printf("%c\n", tolower(ch));
		}
		//getchar();//处理\n
		//第15行明确了条件，无需getchar吞掉回车键
	}
	system("pause");
	return 0;
}