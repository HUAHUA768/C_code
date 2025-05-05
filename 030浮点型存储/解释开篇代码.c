#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int n = 9;
	//0000000000000000000000000001001
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);

	printf("*pFloat的值为：%f\n", *pFloat);
	//把n中存的二进制序列当作float类型取出
	//0 00000000 0000000000000000001001
	// 根据E全0的规则
	//E=1-127=-126
	//0.0000000000000000001001*2^(-126)
	//无限趋近0
	*pFloat = 9.0;
	//9.0→1001.0→1.001*2^3  E=130
	//0 10000010 00100000000000000000000
	//0100 0001 0001 0000 0000 0000 0000 0000
	//当成整数，转化为：1,091,567,616
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	system("pause");
	return 0;
}