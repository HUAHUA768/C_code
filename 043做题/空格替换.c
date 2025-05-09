#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Replace(char* p, int length)
{
	int num = 0;
	char* str = p;
	//旧下标
	int end1 = length - 1;
	//统计空格
	while (*str)
	{
		if (*str == ' ')
		{
			num++;
		}
		str++;
	}
	//新下标
	int end2 = end1 + num*2;
	//开始置换
	while (end1 != end2)
	{
		if (p[end1] != ' ')
		{
			p[end2] =p[end1];
			end1--;
			end2--;
		}
		else
		{
			p[end2] = '0';
			end2--;
			p[end2] = '2';
			end2--;
			p[end2] = '%';
			end2--;
			//别忘了end2走完后，end1也要脱离空格
			end1--;
		}
	}
}
int main()
{
	//把we are happy.的空格换成%20
	char arr[100] = "we are happy.";
	int length = (int)strlen(arr);
	Replace(arr, length);
	//统计空格个数记为n，要多2*n个位置
	//把字符倒着往后挪，直到遇见空格
	//用end1记录初始末尾，end2记录改变后的末尾
	//然后end1和end2分别往前挪，完成每个字符的搬运
	//end1遇到空格时，先停下不动，end2改三次，0，2，%
	//当没有空格时，end1=end2
	printf("%s\n", arr);
	system("pause");
	return 0;
}