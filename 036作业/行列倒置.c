#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//eg: 1 2 3
	//    4 5 6
	//���  1 4
	//      2 5
	//      3 6
	int m = 0;//��
	int n = 0;//��
	int arr[10][10] = { 0 };
	char ch = 0;
	scanf("%d %d", &m, &n);
	scanf("%c", &ch);
	int i = 0;
	int j = 0;
	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		/*scanf("%c", &ch);*/
		
	}
	//���
	for (i = 0; i < n; i++)//��
	{
		for (j = 0; j < m; j++)//��
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}