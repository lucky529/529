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
//1.void(*)()��һ��û�в����ͷ���ֵ�ĺ���ָ��
//2.void(*)()0,��0ǿ������ת��Ϊ����ָ������
//3.(*fp)(),��һ���������ã�����ֵ��һ������ֵΪvoid�ĺ���ָ��

//void (*signal(int , void(*)(int)))(int);
//signal ��һ����������
//signal�����ĵ�һ��������int���ڶ��������Ǻ���ָ��
//signal�����ķ�������Ϊ����ָ��
//signal�����ĵڶ��������Ǻ���ָ�룬��ָ��ָ��ĺ���
//������int���Ż�����Ϊvoid
//signal�����ķ�������Ҳ��һ������ָ�룬�ú�ָ��ָ��ĺ���
//������int���Ż�����Ϊvoid

//ת�Ʊ� �򵥵ļ��������߼�
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
//		printf("����������Ҫ�Ĺ���\n");
//		scanf_s("%d", &input);
//		printf("�����������\n");
//		scanf_s("%d %d", &x, &y);
//		ret = (*p[input])(x, y);
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//����ָ��pfun
//	void(*pfun)(const char*) = test;
//	//����ָ�������pfunArr
//	void(*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//ָ����ָ������pfunArr��ָ��ppfunArr
//	void(*(*ppfunArr)[10])(const char*) = &pfunArr;
//	return 0;
//}

//void(*p)(int x,int y);
//void(*p[5])(int x,int y);
//void(*(*p)[5])(int x,int y);