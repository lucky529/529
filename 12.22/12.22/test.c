//void ( *signal(int , void(*)(int)) )(int);
//
////typedef unsigned int uint;
//
////�򻯵İ汾
//
//typedef void(*pf_t)(int);
//
//pf_t signal(int a, pf_t p);
//
//void(*pf)(int);
//
//ע��:
//
//signal ��һ����������
//
//signal�����ĵ�һ��������int���ڶ��������Ǻ���ָ��
//
//signal�����ķ�������Ϊ����ָ��
//
//signal�����ĵڶ��������Ǻ���ָ�룬��ָ��ָ��ĺ���
//
//������int���Ż�����Ϊvoid
//
//signal�����ķ�������Ҳ��һ������ָ�룬�ú�ָ��ָ��ĺ���
//
//������int���Ż�����Ϊvoid
//#include<stdio.h>
//
//#include<stdlib.h>
//
//int check_sys()
//
//{
//
//	int a = 1;
//
//	//����1��ʾС��
//
//	//����0��ʾ���
//
//	return (*(char*)&a);
//
//}
//
//
//
//int main()
//
//{
//
//	if(1 == check_sys())
//
//	{
//
//		printf("С��\n");
//
//	}
//
//	else
//
//	{
//
//		printf("���\n");
//
//	}
//
//
//
//	system("pause");
//
//	return 0;
//
//}
//
//
//int check_sys()
//
//{
//
//	union Un
//
//	{
//
//		char c;
//
//		int i;
//
//	}u;
//
//	u.i = 1;
//
//	return u.c;
//
//}
//
//
//
//int main()
//
//{
//
//	if(1 == check_sys())
//
//	{
//
//		printf("С��\n");
//
//	}
//
//	else
//
//	{
//
//		printf("���\n");
//
//	}
//
//	system("pause");
//
//	return 0;
//
//}

//union Un//�ж�������Ĵ�С
//
//{
//
//	char c[5];//1
//
//	int i;//4
//
//};
//union Un2
//{
//    short c[7];
//
//    int i;
//};
//
//int main()
//{
//	printf("%d",sizeof(union Un));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%d",4%0);//���ܶ�0ȡģ
//	return 0;
//}