#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct Stu//结构体创建
//{
// char name[20];//名字
// int age;//年龄
// char sex[5];//性别
// char id[20];//学号
//};//分号不能丢
//
//struct Node//结构体的自引用
//{
// int data;
// struct Node* next;
//};////struct Stu//{//	int x;//	int y//}p1;//声明类型的同时定义变量//struct Stu p2;//定义结构体变量p2//
//struct Node
//{
// int data;
// struct Stu p;
// struct Node* next; 
//}n1 = {10, {4,5}, NULL};
//struct Node n2 = {20, {5, 6}, NULL};//结构体嵌套初始化
//
//struct Stu//结构体大小为16
//{
//	char i;
//	int a;
//	double d;
//};


//struct S1//结构体大小为12
//{
// char c1;
// int i;
// char c2;
//};

//#define offsetof(s,m)  (size_t)&(((s*)0)->m)//计算结构体偏移量的一个宏
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