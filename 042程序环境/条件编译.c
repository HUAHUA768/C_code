#include <stdio.h>
#define __DEBUG__
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//#ifdef __DEBUG__
//		printf("%d ", i);
//		//���������ͱ���
//#endif //__DEBUG__ע�����ֲ�ͬ����������
//	}
//
//	return 0;
//}

#define M 3
int main()
{
#if M<5
	printf("hehe\n");
#elif M==5
	printf("haha\n");
#else
	printf("heihei\n");
#endif 
	return 0;
}