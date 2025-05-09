#include <stdio.h>
int main()
{
	/*char num1 = 0x82;
	printf("num=%d", num1);*/
	//赋值给的是十六进制或八进制，则转为二进制后，这个二进制数值系统视为补码
	int num2 = 0xffffffff;
	printf("num2=%d", num2);
	system("pause");
	return 0;
}