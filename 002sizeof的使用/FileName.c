#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char a;
	int b;
	short c;
	long d;
	long long e;
	int len = sizeof(a);
	printf("%d\n", len);
	printf("%d\n", sizeof(int)); //sizeof本质是一个数值
	printf("%d\n", sizeof(c));
	//与c++比较：cout<<sizeof(d)<<endl;

	system("pause");
	return 0;
}