#include<stdio.h>
#include<windows.h>

//void test(int *arr)//f
//{}
//void test(int* arr[5])//f
//{}
//void test(int(*arr)[5])//t
//{}
//void test(int **arr)//t
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//
//	system("pause");
//	return 0;
//}

//(*(void (*)())0)();
//1.void(*)()是一个没有参数和返回值的函数指针
//2.void(*)()0,将0强制类型转换为函数指针类型
//3.(*fp)(),是一个函数调用，返回值是一个返回值为void的函数指针

//void (*signal(int , void(*)(int)))(int);
//signal 是一个函数声明
//signal函数的第一个参数是int，第二个参数是函数指针
//signal函数的返回类型为函数指针
//signal函数的第二个参数是函数指针，该指针指向的函数
//参数是int，放回类型为void
//signal函数的返回类型也是一个函数指针，该函指针指向的函数
//参数是int，放回类型为void

//转移表 简单的计算器的逻辑
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[4]) (int x, int y) = { 0, add, sub, mul};
//	while (input)
//	{
//		printf("请输入你想要的功能\n");
//		scanf_s("%d", &input);
//		printf("请输入操作数\n");
//		scanf_s("%d %d", &x, &y);
//		ret = (*p[input])(x, y);
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//函数指针pfun
//	void(*pfun)(const char*) = test;
//	//函数指针的数组pfunArr
//	void(*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//指向函数指针数组pfunArr的指针ppfunArr
//	void(*(*ppfunArr)[10])(const char*) = &pfunArr;
//	return 0;
//}

//void(*p)(int x,int y);
//void(*p[5])(int x,int y);
//void(*(*p)[5])(int x,int y);