#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	if (dest < src)//src��ǰ�ߵ���
	{
		while (num--)//���ж�num��٣���--
		{
			*(char*)dest = *(char*)src;
			dest=(char*)dest+1;
			src = (char*)src + 1;
		}
	}
	else  //src�Ӻ��ߵ�ǰ
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//             1,2,3,4,5,6,7,8,9,10
	//���         1,2,1,2,3,4,5,8,9,10
	/*int arr2[10] = { 0 };*/
	/*my_memcpy(arr1+2, arr1, 20);*/
	/*memmove(arr1 + 2, arr1, 20);*/
	//vs��������memcpyҲ��������ڴ��ص��Ŀ�������������������memcpy��һ������


	//�Լ�ʵ��memmove
	my_memmove(arr1 , arr1+2, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	system("pause");
	return 0;
}




