//#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<windows.h>

//#define Offsetof(s,m) (size_t)&(((s *)0)->m)
using namespace std;

//int main()
//{
//	//auto��������Ϊ�����Ĳ�����Ҳ�������Ƶ����������
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	for (auto& e : arr)
//	{
//		cout << (e*=2) << endl;//ֻ����ʹ���������޸����������
//	}
//
//	for (auto e : arr)//��Χfor���ں����������޷���ɵ��ã���Ϊ��֪������Ĵ�С
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
//		cout << "����ִ��" << endl;
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
//	//a.display();//thisָ����ʵ��������ĵ�ַ����ͬ��
//    //a->show();//��thisָ����п�ָ��Ľ�����
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
//class Date//�����޲κ��в�ȫȱʡ�Ĺ��캯��ֻ�ܳ���һ��
//{
//public:
//	//Date()
//	//{
//	//	this->_year = 2018;//�������ǳ�ʼֵ
//	//}
//
//	//Date()//�������أ������޲������������캯������������
//	//{
//	//	this->_year = 2018;
//	//	this->_month = 1;
//	//	this->_day = 1;
//	//}
//	Date(int year = 2018, int month = 1, int day = 1)//���ұ�����ȱʡ�����û�г�ʼֵ�ı������������
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
//	//Date a();//����ĵ���
//	//a.Display();	
//
//	Date a;
//	//a.t._printf();//˵�����캯���Լ�����
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
//	cout << (a == b) << endl;//��ֵ�����������
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
//};////int main()//{//	String s;	//	String c(s);//��������ͬһ��ռ��ͷ�������//	system("pause");//	return 0;//}//class Array
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
	Date a2 = a1;//��������
	Date a3 = {2019,3,2};//��ʽ����ת��1.������һ���������� 2.���������a3
	system("pause");
	return 0;
}