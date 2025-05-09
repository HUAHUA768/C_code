#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//����Ҫ����ڴ����������ʧ������:ʹ���ļ��Ķ�д����
//�������˳�ͨѶ¼ǰ����һ��

//����
void CheckCapacity(Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) *
			sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
	}
}

//��̬�汾
//��ʼ��ͨѶ¼
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//�����ļ�����Ϣ��ͨѶ¼��
void LoadContact(Contact* pc)
{
	FILE* pfRead = fopen("Contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact:");
		return;
	}
	
	
	//����һ����ʱ����tmp���մ��ļ���ȡ����Ϣ
	PeoInfo tmp = { 0 };
	//ʲôʱ��ͣ��
	//fread���ص��Ƕ�ȡ����Ԫ�صĸ����������ص���0ʱ��˵�����ݶ�����
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
	{
		//ͨѶ¼��ʼ��Сֻ��3���ܷ�ŵ��£���Ҫ����
		CheckCapacity(pc);
		pc->data[pc->count] = tmp;
		//��count���ɣ�����������������i
		pc->count++;
	}
	fclose(pfRead);
	pfRead = NULL;
}


//��̬�汾
int InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	//dataΪָ�룬��ʱ��δ���ٿռ�
	pc->data = (PeoInfo*)calloc(Default_SZ, sizeof(PeoInfo));
	//Ĭ�ϴ�СΪ3������д�ɺ궨��
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = Default_SZ;//Ĭ�ϴ�С
	//�����ļ�����Ϣ��ͨѶ¼��
	LoadContact(pc);
	return 0;
}


//������ϵ��
int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//��̬�汾
//�����ϵ�˵�ͨѶ¼
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	//ͨѶ¼������������
//	if (pc->count == MAX)//������100�����ǰ�100Ū�ɺ궨��
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	printf("����������:>\n");
//	scanf("%s", pc->data[pc->count].name);//name�Ǹ�������������ȡ��ַ
//	printf("����������:>\n");
//	scanf("%d", &(pc->data[pc->count].age));//age�����ͣ�Ҫȡ��ַ
//	printf("�������Ա�:>\n");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("������绰:>\n");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("�������ַ:>\n");
//	scanf("%s", pc->data[pc->count].addr);
//	pc->count++;
//	printf("���ӳɹ�\n");
//}



//��̬����
void AddContact(Contact* pc)
{
	assert(pc);
	//����
	CheckCapacity(pc);
	printf("����������:>\n");
	scanf("%s", pc->data[pc->count].name);//name�Ǹ�������������ȡ��ַ
	printf("����������:>\n");
	scanf("%d", &(pc->data[pc->count].age));//age�����ͣ�Ҫȡ��ַ
	printf("�������Ա�:>\n");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:>\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>\n");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("���ӳɹ�\n");
}


//��ʾͨѶ¼��Ϣ
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//����ռ�������ַ�������\0,�ø�5s
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-10s\t%-12s\t%-30s\n",pc->data[i].name,
			pc->data[i].age ,pc->data[i].sex,pc->data[i].tele ,
			pc->data[i].addr);
		//�Ӹ���ʵ�������
	}
}

//ɾ����ϵ��
void DelContact(Contact* pc) 
{
	assert(pc);
	//ͨѶ¼��û����ϵ������Ҫɾ
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����Ϣ����ɾ��\n");
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ������ϵ�˵�����\n");
	scanf("%s", name);
	//1.����
	//ɾ�����������޸ģ�����Ҫ���ң��ʰѲ��ҷ�װ��һ������
	int pos = FindByName(pc, name);//�ҵ������±꣬�Ҳ�������-1

	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2.ɾ��:��ǰ����
	int i = 0;
	for (i = pos; i < pc->count-1; i++)//countΪʲô-1��
		//��Ϊ��count=100ʱ��data[i+1]=data[100],Խ����
	{
		pc->data[i] = pc->data[i + 1];
	}
	//�������һ��Ԫ�ػ����ţ���Ҫ����ɾ����
	//����Ҫ
	pc->count--;//count--,������������������ʲ������һ��Ԫ��
	printf("ɾ���ɹ�\n");

}

//������ϵ��
void SearchContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����ϵ�˿��Բ���\n");
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ���ϵ�˵�����\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);//�ҵ������±꣬�Ҳ�������-1

	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	int i = pos;
	printf("%-20s\t%-5s\t%-10s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-10s\t%-12s\t%-30s\n", pc->data[i].name,
		pc->data[i].age, pc->data[i].sex, pc->data[i].tele,
		pc->data[i].addr);
}

//�޸���ϵ��
void ModifyContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����ϵ�˿����޸�\n");
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸ĵ���ϵ�˵�����\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);//�ҵ������±꣬�Ҳ�������-1

	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	printf("Ҫ�޸ĵ�����Ϣ�ɹ��ҵ������濪ʼ�޸�\n");
	printf("�������µ�����:>\n");
	scanf("%s", pc->data[pos].name);//name�Ǹ�������������ȡ��ַ
	printf("�������µ�����:>\n");
	scanf("%d", &(pc->data[pos].age));//age�����ͣ�Ҫȡ��ַ
	printf("�������µ��Ա�:>\n");
	scanf("%s", pc->data[pos].sex);
	printf("�������µĵ绰:>\n");
	scanf("%s", pc->data[pos].tele);
	printf("�������µĵ�ַ:>\n");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�\n");
}

int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
	//e1��e2��ָ�룬Ӧ��ʹ�ü�ͷ���ǵ�

}
//����
//��������������
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("����ɹ�\n");
}

//����
void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	//�ռ����
}

//����ͨѶ¼
void SaveContact(const Contact* pc)
{
	FILE* pfWrite = fopen("Contact.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("SaveContact:");
		return;
	}
	//count:һ��дһ��
	//�ö�����������
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(PeoInfo), 1, pfWrite);
		//���������i������ÿ�ζ�д����Ԫ�ص�ַȥ��
		//data[i]����һ����ַ
	}
	fclose(pfWrite);
	pfWrite = NULL;

}