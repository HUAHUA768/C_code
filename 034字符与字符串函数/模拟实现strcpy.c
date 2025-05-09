#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
char* my_strcpy(char* a, const char* b)
{
	assert(a);
	assert(b);
	char* ret = a;
	/*while (1)
	{
		*a = *b;
		if (*b == '\0')
		{
			break;
		}
		a++;
		b++;
	}*/
	//Ð´µÃ¸ü¼òÁ·
	while (*a++ = *b++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = {0};
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);

	system("pause");
	return 0;
}