#include<stdio.h>
#include<windows.h>

//#define CASE break;case
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("file:%s line:%d date:%s i=%d\n", __FILE__,__LINE__,__DATE__,i);
//	}
//	//printf("%d", __STDC__);//VS未支持stdc
//	system("pause");
//	return 0;
//}

//#define QUER(X) X*X//不带括号则会出现意想不到的结果
//#define MAX 10
//int main()
//{
//	printf("%d", QUER(MAX + 4));
//	system("pause");
//	return 0;
//}

//#define Printf(x, format) printf("the value of " #x " is "format"\n",x)//把参数插入到字符串中
//
//int main()
//{
//	int a = 10;
//	float f = 3.14;
//	Printf(a, "%d");
//	Printf(f, "%f");
//
//	system("pause");
//	return 0;
//}

//#define CAT(X,Y) X##Y//可以链接成一个完整的标识符
//int main()
//{
//	int lucky96 = 100;
//	printf("%d", CAT(lucky, 96));
//
//	system("pause");
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))//c++中使用内联函数替换宏
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}

//#define MALLOC(num, type) \
//	(type*)malloc(sizeof(type), num);//用宏实现简化malloc
//int main()
//{
//	int* p = MALLOC(10, int);
//	p[0] = 10;
//	printf("%d\n", p[0]);
//	system("pause");
//	return 0;
//}