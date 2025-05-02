#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;  //思考：会输出什么？
		printf("%d ", i);
	}
	//for循环的判断部分省略意味着判断会恒成立

	////可以使用多个变量控制循环
	//int x, y;
	//for(x=0,y=0;x<2&&y<5;++x,y++);
	//注意：for(int i=0; ; )的写法只有C99语法的编译器才支持（C++也是这么写的）
	system("pause");
	return 0;
}