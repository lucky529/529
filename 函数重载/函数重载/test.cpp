#include<iostream>
#include<windows.h>
using namespace std;

//class test{
//public:
//	void print(int i)
//	{
//		cout << "int" << endl;
//	}
//	void print(char c)
//	{
//		cout << "char" << endl;
//	}
//};
//int main()
//{
//	test t;
//	t.print(1);
//	t.print('a');
//	return 0;
//}

//void print(int i)                    -->            _ZN4test5printEi

//void print(char c)-->            _ZN4test5printEc  修饰规则：域名+返回类型+函数名+参数列表

//int& Add(int a, int b)
//{
//	static int c = a + b;
//	return c;
//}

int main()
{
	/*int& ret = Add(1, 2);
	Add(10, 30);
	cout << ret << endl;*/
	int a = 10;
	int* p = &a;
	p++;
	cout << *p << endl;//随机值
	system("pause");
	return 0;
}