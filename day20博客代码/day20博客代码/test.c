#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct Stu//�ṹ�崴��
//{
// char name[20];//����
// int age;//����
// char sex[5];//�Ա�
// char id[20];//ѧ��
//};//�ֺŲ��ܶ�
//
//struct Node//�ṹ���������
//{
// int data;
// struct Node* next;
//};////struct Stu//{//	int x;//	int y//}p1;//�������͵�ͬʱ�������//struct Stu p2;//����ṹ�����p2//
//struct Node
//{
// int data;
// struct Stu p;
// struct Node* next; 
//}n1 = {10, {4,5}, NULL};
//struct Node n2 = {20, {5, 6}, NULL};//�ṹ��Ƕ�׳�ʼ��
//
//struct Stu//�ṹ���СΪ16
//{
//	char i;
//	int a;
//	double d;
//};


//struct S1//�ṹ���СΪ12
//{
// char c1;
// int i;
// char c2;
//};

//#define offsetof(s,m)  (size_t)&(((s*)0)->m)//����ṹ��ƫ������һ����
//#include<stdio.h>
//union Un1
//{
// char c[5];
// int i;
//};
//union Un2
//{
// short c[7];
// int i;
//};//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//    printf("%d\n", sizeof(union Un2));
//	return 0;
//}