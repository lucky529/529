#include<stdio.h>
#include<windows.h>
//#include"test.h"

//int main()//ע�͵�Ƕ�׶���ᷢ�����벻���Ľ��
//{
//	/*int i = 0;
//	/*
//	int sum = 0;
//	*/
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", "hehe");//Ƕ�׶��壬ʹ��iδ����
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
//	int x/*blah blah*/y;//ע�ͽ���һ���ո��滻������y��ʾ��δ����ı�ʶ��
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int Case, If, While, Stop, stop;//�����������c�����������Сд
//	system("pause");
//	return 0;
//}

//int main()//��ȷ��ѭ��
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
//	int const b = 20;//const���εĳ���
//
//	const int* p = NULL;
//	int const* q = NULL;
//	int* const r = NULL;//�ж�ָ����*��ǰ���Ǻ���ȷ��const�����εĶ���
//
//	int arr[a] = { 0 };//const���εĳ�������������������
//	system("pause");
//	return 0;
//}

//int main()
//{
////#ifdef _C
////#if _C
//	extern int b;	
//	extern char a[];//������ʹ��extern char* a
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

//�����ʾ���ܽ�
//1.Ϊ�˱������õĿ���ֲ�ԣ��ַ���ֵ�������з��ź��޷���֮��
//2.������Ȼ����ʽ��ʾ����ֵ
//�������͵�������ʱ��ʹ��typedef������#define
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
//	switch (f)//���ʽ�б���Ϊ����
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
//	3 * x*x - 4 * x + 6;//Ӧ������������õ������
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
//			i--;//������һ��forѭ����i++��������Ҫ�Լ�--
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