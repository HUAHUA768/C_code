#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print1(int (*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			//*p�൱����Ԫ�صĵ�ַ
			printf("%d ", *(*(p + i) + j));
			//Ҳ��д��
			/*printf("%d ", p[i][j]);*/
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr, 3, 5);
	//arr�ǵ�һ�еĵ�ַ���൱��һά���������ָ�룩
	system("pause");
	return 0;
}