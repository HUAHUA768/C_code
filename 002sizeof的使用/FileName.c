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
	printf("%d\n", sizeof(int)); //sizeof������һ����ֵ
	printf("%d\n", sizeof(c));
	//��c++�Ƚϣ�cout<<sizeof(d)<<endl;

	system("pause");
	return 0;
}