#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//�����������洴��
struct stu
{
	char name[10];
	int age;
	char sex[10];
	char tele[20];
};
void print(struct stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//������д������ͷ
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
	// ->Ҳ��һ�����������ṹ��ָ�����->�ṹ���Ա��
}
int main()
{
	//�ṹ��ĳ�ʼ��
	struct stu  s = { "zhangsan",20,"nan","15396288067" };
	//ע���©��s

	//��ε��ü���ӡ
	/*printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);*/
	//�ṹ�����.��Ա��������һ��������

	//����ȡ��ַ
	print(&s);
	system("pause");
	return 0;
}