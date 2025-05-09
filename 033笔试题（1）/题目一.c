#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x %x\n", ptr1[-1], *ptr2);
	//ptr1[-1]相当于*(ptr1-1),结果为4
	//(int)a=a[0]，整型指针转为整型，+1就单纯数值加1，即跳过一个字节
	//a的第一个元素是1，在内存中这么存：01 00 00 00
	// 第二元素 02 00 00 00（小端存储）
	//故ptr2指向第一个元素的第二个字节，而int*可以访问4个字节
	//故ptr2访问的是00 00 00 02（十六进制）
	//倒过来就是02 00 00 00,以十六进制的形式打印出来就2 00 00 00

	system("pause");
	return 0;
}