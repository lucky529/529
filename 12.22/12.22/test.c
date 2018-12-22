//void ( *signal(int , void(*)(int)) )(int);
//
////typedef unsigned int uint;
//
////简化的版本
//
//typedef void(*pf_t)(int);
//
//pf_t signal(int a, pf_t p);
//
//void(*pf)(int);
//
//注释:
//
//signal 是一个函数声明
//
//signal函数的第一个参数是int，第二个参数是函数指针
//
//signal函数的返回类型为函数指针
//
//signal函数的第二个参数是函数指针，该指针指向的函数
//
//参数是int，放回类型为void
//
//signal函数的返回类型也是一个函数指针，该函指针指向的函数
//
//参数是int，放回类型为void
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
//	//返回1表示小端
//
//	//返回0表示大端
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
//		printf("小端\n");
//
//	}
//
//	else
//
//	{
//
//		printf("大端\n");
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
//		printf("小端\n");
//
//	}
//
//	else
//
//	{
//
//		printf("大端\n");
//
//	}
//
//	system("pause");
//
//	return 0;
//
//}

//union Un//判断联合体的大小
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
//	printf("%d",4%0);//不能对0取模
//	return 0;
//}