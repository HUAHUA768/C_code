#include <stdio.h>
int main()
{
	char num = 127 + 2;
	//写char默认是signed char有符号
	printf("num=%d", num);
	//发现输出的是-127，为什么呢？
	//129正数，原码=反码=补码=1000 0001
	// 输出的时候，计算机认为1000 0001是一个负数的补码
	//补码转原码，变为1111 1111，原码转为十进制，变成-127
	system("pause");
	return 0;
}