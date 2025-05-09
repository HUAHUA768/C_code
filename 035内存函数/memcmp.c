#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	/*int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,3,2};
	int ret = memcmp(arr1, arr2, 12);*/
	/*printf("%d\n", ret);*/

	//memset
	char arr[] = "hello world";
	memset(arr, 'X', 5);
	printf("%s\n", arr);
	system("pause");
	return 0;
}