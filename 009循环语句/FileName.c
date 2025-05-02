#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//EOF:无效字符，实际值为-1
	//	putchar(ch); //为什么会自动换行：
	////键盘与内存之间有个输入缓冲区，键盘输入字符+回车，缓冲区是字符和\n
	////字符被getchar取走，剩下一个\n换行指令
	////此代码的作用：用来清空缓冲区，和连续读入两个字符的原理一样
	////也就是把回车键生成的\n拿走
	//char password[20] = { 0 };
	//printf("请输入您的密码>");
	//scanf("%s", password); //无需取地址，具体原因见数组
	////scanf的特性：遇到空格会停止读取

	int ch = 0;
	while ((ch = getchar()) != '\n')//'\n'别忘了单引号
	{
		;    //空语句的作用：不让while牵连到下面的printf
	}//用来吞掉空格和\n
		printf("请确认您的密码>('Y'or'N')");
		int ter = getchar();
		if (ter == 'Y')
			printf("确认\n");
		else
			printf("取消\n");
		char ah = '\0';
		while((ah = getchar()) != EOF)
		{
			if (ah < '0' || ah>'9')
				continue;
			putchar(ah);
		}//只打印数字字符
	system("pause");
	return 0;
}