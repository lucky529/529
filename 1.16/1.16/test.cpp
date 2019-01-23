//#include<iostream>
//#include<windows.h>
//using namespace std;
//
//class  B
//{
//public:
//	B(int b)//没有默认的构造函数(无参的构造函数)
//		:_b(b)
//	{
//	}
//private:
//	int _b;
//};
//class A
//{
//public:
//	A(int a,int b)
//		:d(10),
//		dday(a),
//		n(b)
//	{
//
//	}
//private:
//	const int n;
//	int& dday;
//	B d;
//};
//int main()
//{
//	system("pause");
//	return 0;
//}
//
//class Time
//{
//public:
//	Time(int hour = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//class Date
//{
//public:
//	Date(int day)
//	{}
//private:
//	int _day;
//	Time _t;
//};
//int main()
//{
//	Date d(1);
//}
//
//class Array
//{
//public:
//	Array(int size = 10)
//		:_array((int*)malloc(sizeof(int)*_size))
//		,_size(size)		
//	{}
//private:
//	int _size;
//	int* _array;	
//};
//int main()
//{
//	Array a[10];
//	system("pause");
//	return 0;
//}
//
//class Date
//{
//public:
//	Date(int year)
//		:_year(year)
//	{}	
//		/*explicit Date(int year)
//		:_year(year)
//	{}*/
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1 = 2019;
//	//构造一个匿名对象 拷贝构造 优化 （是一种隐式转换）
//	system("pause");
//	return 0;
//}
//
//class A
//{
//public:
//	A()
//	{
//		++rcount;
//	}
//	A(const A& d)
//	{
//		++rcount;
//	}
//	int static Get()
//	{
//		return rcount;
//	}
//private:
//	static int rcount;
//};
//int A::rcount = 0;
//int main()
//{
//	A a, b;
//	A c(a);
//
//	cout << A::Get() << endl;
//	system("pause");
//	return 0;
//}
//
//class B
//{
//public:
//	B(int b)
//		:_b(b)
//	{}
//	int _b;
//};
//class A
//{
//public:
//	void Print()
//	{
//		cout << a << endl;
//		cout << b._b << endl;
//		cout << p << endl;
//	}
//private:
//	// 非静态成员变量，可以在成员声明时，直接初始化。
//	int a = 10;
//	B b = 20;
//	int* p = (int*)malloc(4);
//	static int n;
//};
//int A::n = 10;
//int main()
//{
//	A a;
//	a.Print();
//
//	system("pause");
//	return 0;
//}
//class Date
//{
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	ostream& operator<<(ostream& _cout)
//	{
//		_cout << _year << "-" << _month << "-" << _day;
//		return _cout;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date a(2018, 3, 2);
//	a << cout;
//	return 0;
//}
//
//
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend istream& operator>>(istream& _in, Date& d);
//public:
//	Date(int year, int month, int day)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//
//	}
//	void Display()
//	{
//		cout << this->_month << this->_year << this->_day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//
//	return _cout;
//}
//istream& operator>>(istream& _in, Date& d)
//{
//	_in >> d._year;
//	_in >> d._month;
//	_in >> d._day;
//
//	return _in;
//}
//
//int main()
//{
//	Date d(2018, 3, 2);
//	cin >> d;
//	cout << d;
//	system("pause");
//	return 0;
//}

void InsertSort(int*a, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
			a[end + 1] = tmp;
		}
	}
}