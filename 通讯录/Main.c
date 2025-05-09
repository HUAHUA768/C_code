#include "contact.h"

// ��ʾ���˵�����
void menu() {
    printf("********************************\n");
    printf("***** 1. �����ϵ��*************\n");
    printf("***** 2. ɾ��ָ����ϵ��*********\n");
    printf("***** 3. ����ָ����ϵ��*********\n");
    printf("***** 4. �޸�ָ����ϵ��*********\n");
    printf("***** 5. ��ʾ������ϵ��*********\n");
    printf("***** 6. һ������***************\n");
    printf("***** 0. �˳�ͨѶ¼*************\n");
    printf("********************************\n");
}

// ���Ժ�����������Ҫ����Ϸѭ���߼�
void test() {
    int input; // �û��������
    Contact con; // ��ϵ�˽ṹ��ʵ��
    InitContact(&con); // ��ʼ��ͨѶ¼

    do {
        printf("��ѡ��>\n");
        scanf("%d", &input); // ��ȡ�û���ѡ��
        switch (input) {
        case ADD: // �����ϵ��
            AddContact(&con);
            break;
        case DEL: // ɾ����ϵ��
            DelContact(&con);
            break;
        case SEARCH: // ������ϵ��
            SearchContact(&con);
            break;
        case MODIFY: // �޸���ϵ����Ϣ
            ModifyContact(&con);
            break;
        case SHOW: // ��ʾ������ϵ��
            ShowContact(&con);
            break;
        case SORT: // ������ϵ��
            SortContact(&con);
            break;
        case EXIT: // �˳�ͨѶ¼
            DestroyContact(&con); // ����ͨѶ¼
            printf("�˳�ͨѶ¼\n");
            break;
        default: // Ĭ��������������
            printf("ѡ�����, ����ѡ��\n");
            break;
        }
    } while (input != EXIT); // ������ΪEXITʱ�˳�ѭ��
}

// ��������������ڵ�
int main() {
    menu(); // ��ʾ�˵�
    test(); // ���в��Ժ�������ʼ��Ϸ
    return 0; // ����������������
}