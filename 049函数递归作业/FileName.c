#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(int arr[], int left, int right)
{
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	
	if (left < right)
	{
		reverse(arr, left + 1, right - 1);
	}
	
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	reverse(arr, left, right);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}