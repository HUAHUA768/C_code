#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen:");
		return 1;
	}
	char ch = 0;
	//读文件
	//定位文件指针
	//fseek只有定位功能，没有读取功能，读取功能还是需要fgetc
	fseek(pf, 2, SEEK_SET);
	ch = fgetc(pf);
	printf("%c\n", ch);//c
	printf("%d\n", ftell(pf));//指向d，偏移量3

	//读取f
	/*fseek(pf, 2, SEEK_CUR);*/
	fseek(pf, -1, SEEK_END);
	ch = fgetc(pf);//读完f，跳到f的下一位
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));//6
	//abcedf
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	
	system("pause");
	return 0;
}