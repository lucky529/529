#include<stdio.h>
#include<windows.h>
//#include"test.h"

//int main()//注释的嵌套定义会发生意想不到的结果
//{
//	/*int i = 0;
//	/*
//	int sum = 0;
//	*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", "hehe");//嵌套定义，使得i未定义
//	}*/
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("%s", "\"Blunder\?\?!\?\?\"");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x/*blah blah*/y;//注释将被一个空格替换，所以y显示是未定义的标识符
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int Case, If, While, Stop, stop;//合理的命名，c语言中区别大小写
//	system("pause");
//	return 0;
//}

//int main()//正确的循环
//{
//	int x, y;
//
//	x = 0;
//	while (x < 10)
//	{
//		y = x*x;
//		printf("%d\t%d\n", x, y);
//		x += 1;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	int const b = 20;//const修饰的常量
//
//	const int* p = NULL;
//	int const* q = NULL;
//	int* const r = NULL;//判断指针在*的前还是后来确定const所修饰的对象
//
//	int arr[a] = { 0 };//const修饰的常量不可用来做数组名
//	system("pause");
//	return 0;
//}

//int main()
//{
////#ifdef _C
////#if _C
//	extern int b;	
//	extern char a[];//不可以使用extern char* a
//	printf("%d", x);
////#endif
////#endif
//	system("pause");
//	return 0;
//}

//int main()
//{
//	void fun1();
//	system("pause");
//	return 0;
//}

//void fun1()
//{
//	extern g_str[];
//	printf("%c", g_str[0]);
//}

//int fun1(int x)
//{
//	static int sum = 1;
//	sum += 1;
//	x = sum;
//
//	return x;
//}
//int main()
//{
//	int a;
//	a = fun1(1);
//	a = fun1(1);
//
//	printf("%d", a);
//	system("pause");
//	return 0;
//}

//void fun1()
//{
//	extern g_str[];
//	printf("%c", g_str[0]);
//}


//int main()
//{
//	static char a[10];
//	printf("_%s_", a);
//	system("pause");
//	return 0;
//}

//编程提示的总结
//1.为了保持良好的可移植性，字符的值限制在有符号和无符号之间
//2.用最自然的形式表示字面值
//定义类型的新名字时，使用typedef而不是#define
//enum liquid{
//	ounce = 1,
//	cup = 8,
//	pint = 16,
//	quart = 32,
//	gallon = 128
//};
//int main()
//{
//	
//	enum liquid jar;
//	jar = quart;
//	printf("%s", jar);
//	jar = jar + pint;
//	printf("%s", jar);
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	float f = 1.0;
//	switch (f)//表达式中必须为整形
//	{
//	case 1:
//		break;
//	}
//
//	system("pause");
//	return 0;
//}
//class C
//{
//public:
//	char a;
//	static char b;
//	void* p;
//	static int* c;
//	virtual void func1();
//	virtual void func2();
//};
//int main()
//{
//	printf("%d", sizeof(C));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x = 2;
//	int xum = 0;
//	3 * x*x - 4 * x + 6;//应该输入带副作用的运算符
//	system("pause");
//	return 0;
//}

//double SumSqrt(int val, double t)
//{
//	double k = val;
//	while (abs(val - k*k) > t)
//	{
//		k = (k + val / k) / 2.0;
//	}
//	return k;
//}
//int main()
//{	
//	printf("%lf", SumSqrt(16, 0.1));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int j;
//	for (int i = 3; i <= 100; i++)
//	{
//		for (j = 3; j < i; j +=2)
//		{
//			if ((i % j) == 0)
//			{
//				break;
//			}			
//		}
//		if (j >= i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//char* checkBlank(char str[])
//{
//	int index = 0;
//	int len = strlen(str);
//	char* ret = (char*)malloc(sizeof(char)*len);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] != ' ')
//		{
//			ret[index++] = str[i];
//		}
//		else
//		{
//			ret[index++] = ' ';
//			while (str[i] == ' ' && i < len)
//			{
//				i++;
//			}
//			i--;//进入下一次for循环会i++所以我们要自己--
//		}
//	}
//	ret[index] = '\0';
//	return ret;
//}
//int main()
//{
//	char srr[] = "ab  cdd    bvc";
//	printf("%s", checkBlank(srr));
//	system("pause");
//	return 0;
//}