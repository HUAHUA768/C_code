#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void* my_memcpy(void* dest, const void* src,size_t num)
{
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	//模拟实现memcpy
	/*int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 28);*/

	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//             1,2,3,4,5,6,7,8,9,10
	//变成         1,2,1,2,3,4,5,8,9,10
	/*int arr2[10] = { 0 };*/
	/*my_memcpy(arr1+2, arr1, 20);*/
	memmove(arr1 + 2, arr1, 20);

	system("pause");
	return 0;
}