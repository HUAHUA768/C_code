#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main02()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//�����������в�������7
	int a = 17;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i <sz)
	{
		if (arr[i] == a)
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
		}
		i++;
	}
	if (i == sz)
		printf("û�ҵ�\n");

	system("pause");
	return 0;
}