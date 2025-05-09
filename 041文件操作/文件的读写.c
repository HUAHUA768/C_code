#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//写一个字符
//int main()
//{
//	//打开
//	FILE* pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//读文件
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);*/
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//写一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputs("hello jingpeng\n", pf);
//	fputs("hello jingpeng\n", pf);
//	fputs("垃圾海湾学校\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//读一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	char arr[20] = { 0 };
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//格式化写入
struct S
{
	char name[10];
	int age;
	float score;
};
//int main()
//{
//	struct S s = { "ydx",20,60.5f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf, "%s %d %f\n", s.name , s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//格式化读入
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fscanf(pf,"%s %d %f", s.name, &(s.age), &(s.score));
//	/*printf("%s %d %f\n", s.name, s.age, s.score);*/
//	fprintf(stdout,"%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

////二进制读写
//int main()
//{
//	struct S s = { "fyd",25,50.5f };
//	FILE* pf = fopen("test.txt", "wb");//二进制写入
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//二进制的读入
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");//二进制读入
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//sscanf和sprintf
//二进制读写
int main()
{
	struct S s = { "fyd",25,50.5f };
	char buf[100] = { 0 };
	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
	printf("字符串：%s\n", buf);
	//字符串"fyd 25 50.500000"
	struct S tmp = { 0 };
	//从字符串buf中获取格式化数据
	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("格式化：%s %d %f", tmp.name, tmp.age, tmp.score);
	return 0;
}
