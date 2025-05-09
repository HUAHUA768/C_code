#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //库函数的头文件
int main05()
{
	char arr1[] = "welcome to Newyork!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1; //strlen不包括结尾的'\0'
	//若用sizeof来求元素个数？
	//int right=sizeof(arr1)/sizeof(arr1[0])-2,为什么-2?
	//因为sizeof相除算到的是字符的个数而非下标，有‘\0’和下标从0开始的原因，故-2
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000); //停顿1000毫秒制造动态效果
		system("cls"); //清空屏幕
		//system是一个库函数，可以执行系统命令
	}
	printf("%s\n", arr2);
	system("pause");
	return 0;
}