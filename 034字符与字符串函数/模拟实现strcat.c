#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//找到目标空间的结尾\0
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;

}
int main()
{
	char arr[20] = "hello ";
	my_strcat(arr, "world");
	printf("%s\n", arr);
	system("pause");
	return 0;
}