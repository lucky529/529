//#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<windows.h>

//#define Offsetof(s,m) (size_t)&(((s *)0)->m)
using namespace std;

//int main()
//{
//	//auto不可以作为函数的参数，也不可以推导数组的类型
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	for (auto& e : arr)
//	{
//		cout << (e*=2) << endl;//只可以使用引用来修改数组的数据
//	}
//
//	for (auto e : arr)//范围for放在函数调用中无法完成调用，因为不知道数组的大小
//	{
//		cout << e << endl;
//	}
//	system("pause");
//	return 0;
//}

//class People
//{
//public:
//	People(char* name = "zhangsan", char* sex = "nan", int card = 123456)
//	{
//		_name = name;
//		_sex = sex;
//		_StCard = card;
//	}
//	void show()
//	{
//		cout << this->_name << endl;
//		cout << _sex << endl;
//		cout << _StCard << endl;
//	}
//	void printfstr()
//	{
//		cout << "可以执行" << endl;
//	}
//	void display()
//	{
//		cout << this << endl;
//	}
//private:
//	char* _name;
//	char* _sex;
//	int _StCard;
//};

//struct A
//{
//	int a;
//	short b;
//}v;
//cout << Offsetof(struct A, b) << endl;

//int main()
//{
//	People* a = NULL;
//	//cout << &a << endl;
//	//a.display();//this指针与实例化对象的地址是相同的
//    //a->show();//对this指针进行空指针的解引用
//	a->printfstr();
//	
//
//	system("pause");
//	return 0;
//}

//class time
//{
//public:
//	void _printf()
//	{
//		cout << "tmie" << endl;
// 	}
//};
//class Date//报错，无参和有参全缺省的构造函数只能出现一个
//{
//public:
//	//Date()
//	//{
//	//	this->_year = 2018;//后两个是初始值
//	//}
//
//	//Date()//可以重载，但是无参数的俩个构造函数不可以重载
//	//{
//	//	this->_year = 2018;
//	//	this->_month = 1;
//	//	this->_day = 1;
//	//}
//	Date(int year = 2018, int month = 1, int day = 1)//从右边向左缺省，左边没有初始值的变量必须给参数
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//	void Display()
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	time t;
//};
//int main()
//{
//	//Date a();//错误的调用
//	//a.Display();	
//
//	Date a;
//	//a.t._printf();//说明构造函数自己调用
//
//	system("pause");
//	return 0;
//}

//class Date
//{
//public:	
//	Date(int year = 2018, int month = 1, int day = 1)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//	
//	bool operator==(Date d2)
//	{
//		return this->_day == d2._day &&
//			this->_month == d2._month &&
//			this->_year == d2._year;
//	}
//	Date(const Date& x)
//	{
//		_year = x._year;
//		_month = x._month;
//		_day = x._day;
//	}
//
//	Date& operator=(const Date& x)
//	{
//		if (!(*this == x))
//		{
//			this->_day = x._day;
//			this->_month = x._month;
//			this->_year = x._year;
//		}
//
//		return *this;
//	}
//	void Display()
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;	
//};
//
//int main()
//{
//	Date a(2013,2,1);
//	a.Display();
//	Date b(2122,2,3);
//	b.Display();
//
//	b = a;
//	cout << (a == b) << endl;//赋值运算符的重载
//	system("pause");
//	return 0;
//}

//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	
//	
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};////int main()//{//	String s;	//	String c(s);//程序奔溃对同一块空间释放了俩次//	system("pause");//	return 0;//}//class Array
//{
//public:
//	Array(int size)
//		:_size(size)
//		, _array((int*)malloc(sizeof(int)*_size))
//	{}
//private:
//	int* _array;
//	int _size;
//};
//
//int main()
//{
//	Array s(10);
//	system("pause");
//	return 0;
//}

class Date
{
public:	
	explicit Date(int year = 2018, int month = 1, int day = 1)
		:N(10)
	{
		this->_year = year;
		this->_month = month;
		this->_day = day;
		
	}
	
	bool operator==(Date d2)
	{
		return this->_day == d2._day &&
			this->_month == d2._month &&
			this->_year == d2._year;
	}	
	void Display()
	{
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	const int N;	
};

int main()
{	
	Date a1(10);
	Date a2 = a1;//拷贝构造
	Date a3 = {2019,3,2};//隐式类型转换1.构造了一个匿名对象 2.拷贝构造给a3
	system("pause");
	return 0;
}