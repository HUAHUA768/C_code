#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//int arr[3][4] = { 0 };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		scanf("%d", &arr[i][j]);
	//		//����ĸ�ֵ
	//	}
	//}
	int i = 0;
	int arr[3][4] = { 2,3,4,5,3,4,5,6,4,5,6,7 };
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n",i,j ,&arr[i][j]);
		}
		/*printf("\n");*/
	}
	
	/*��ð��������㷨���������������*/
	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };*/

	system("pause");
	return 0;
}