#include<iostream>
#include<windows.h>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& out, const Date& a);
public:
	Date(int year = 2019, int month = 3, int day = 2)
	{
		cout << "haha" << endl;
		this->_year = year;
		this->_month = _month;
		this->_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& out, const Date& a)
{
	out << a._year << a._month << a._day << endl;

	return out;
}
//int main()
//{
//	Date a(2019, 3, 2);
//	cout << a;
//	system("pause");
//	return 0;
//}

int main()
{
	Date* ptr = new Date[10];
	system("pause");
	return 0;
}

template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

int main()
{
	int a = 10;
	double b = 20.0;
	cout << Add<double>(a, b) << endl;
	system("pause");
	return 0;
}

//ÀàÄ£°å
template<class T>
class Vector
{
public:
	Vector(int num = 10)
		:_data(new T[num])
	    , _size(0)
		, _capicaty(num)
	{}

	~Vector();

	void PushBack(const T& data)
	{
		this->_data[_size++] = data;
	}

	void PopBack()
	{
		--_size;
	}

	size_t size()
	{
		return _size;
	}

	T& operator[](size_t pos)
	{
		return _data[pos];
	}
private:
	T* _data;
	int _size;
	int _capicaty;
};

template<class T>
Vector<T>::~Vector()
{
	if (this->_data)
	{
		delete[] _data;
	}
}

int main()
{
	Vector<int> v;
	v.PushBack(10);
	v.PushBack(9);

	cout << v[1] << endl;
	system("pause");
	return 0;
}