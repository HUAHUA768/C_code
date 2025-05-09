#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//模拟实现strtok
int main()
{
	const char* sep = "@.";
	char email[] = "zhangweipeng@bitejiuyeke.com";
	char cp[30] = { 0 };
	strcpy(cp, email);
	/*char* ret = strtok(cp,sep);
	printf("%s\n", ret);
	ret = strtok(NULL, sep);
	printf("%s\n", ret);
	ret = strtok(NULL, sep);
	printf("%s\n", ret);*/

	//更简便的写法？？？
	char* ret = NULL;
	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}
	system("pause");
	return 0;
}