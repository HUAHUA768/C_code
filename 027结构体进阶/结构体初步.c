#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};//��һ������

//�ṹ���׽ṹ��
struct st
{
	struct Peo p;
	int num;
	float f;
};
int main()
{
	struct Peo p1;//�ṹ������Ĵ���
	//��һ�������Ľṹ�����

	//�ṹ���׽ṹ����γ�ʼ��
	struct st s={{"����","15998935391","��",179 },25,3.14f };
	//�������״����ż���
	printf("%s %s %s %d %d %f", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.f
	);
	system("pause");
	return 0;
}