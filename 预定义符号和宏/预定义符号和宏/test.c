#include<stdio.h>
#include<windows.h>

//#define CASE break;case
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("file:%s line:%d date:%s i=%d\n", __FILE__,__LINE__,__DATE__,i);
//	}
//	//printf("%d", __STDC__);//VSδ֧��stdc
//	system("pause");
//	return 0;
//}

//#define QUER(X) X*X//�����������������벻���Ľ��
//#define MAX 10
//int main()
//{
//	printf("%d", QUER(MAX + 4));
//	system("pause");
//	return 0;
//}

//#define Printf(x, format) printf("the value of " #x " is "format"\n",x)//�Ѳ������뵽�ַ�����
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

//#define CAT(X,Y) X##Y//�������ӳ�һ�������ı�ʶ��
//int main()
//{
//	int lucky96 = 100;
//	printf("%d", CAT(lucky, 96));
//
//	system("pause");
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))//c++��ʹ�����������滻��
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
//	(type*)malloc(sizeof(type), num);//�ú�ʵ�ּ�malloc
//int main()
//{
//	int* p = MALLOC(10, int);
//	p[0] = 10;
//	printf("%d\n", p[0]);
//	system("pause");
//	return 0;
//}