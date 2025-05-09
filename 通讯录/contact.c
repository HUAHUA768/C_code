#include "contact.h"

// ��ʼ��ͨѶ¼�������ڴ沢���ó�ʼ�����ʹ�С
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;

	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	// �����ڴ��Դ洢��ϵ����Ϣ
	if (pc->data == NULL)
	{
		// ����ڴ����ʧ�ܣ���ӡ������Ϣ
		perror("InitContact");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	// ���ó�ʼ����
}

// ���ͨѶ¼���������ݣ������Ҫ����������
int CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("CheckCapacity");
			return 0;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
			return 1;
		}
	}
	return 1;
}

// �����ϵ�˵�ͨѶ¼
void AddContact(Contact* pc)
{
	assert(pc);
	if (0 == CheckCapacity(pc))
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("���������֣�>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("�ɹ������ϵ��\n");
}

// ��ʾ������ϵ����Ϣ
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

// �������ֲ�����ϵ��
static int FindByName(const Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;//�ҵ���
		}
	}
	return -1;//�Ҳ���
}

// ɾ��ָ����ϵ��
void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("��������Ҫɾ���������֣�>");
	scanf("%s", name);
	//�ҵ�Ҫɾ������
	int del = FindByName(pc, name);
	if (del == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	int i = 0;
	for (i = del; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("�ɹ�ɾ����ϵ��\n");
}

// ����ָ����ϵ��
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//��ӡ����
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

// �޸�ָ����ϵ����Ϣ
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("Ҫ�޸ĵ��˲�����\n");
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}

// ����ͨѶ¼���ͷ��ڴ�
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}


//������������
void SortContact(Contact* pc)
{
	if (pc->sz <= 0)
	{
		printf("ͨѶ¼û����ϵ�ˣ������\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < pc->sz - 1; i++)
		{
			int j = 0;
			for (j = 0; j < pc->sz - 1 - i; j++)
			{
				if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
				{
					PeoInfo tmp = pc->data[j];
					pc->data[j] = pc->data[j + 1];
					pc->data[j + 1] = tmp;
				}
			}
		}
		printf("����ɹ���");
	}
}


