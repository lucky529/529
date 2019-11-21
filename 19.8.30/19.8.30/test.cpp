#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

//class s
//{
//public:
//	class c
//	{
//	public:
//		void funcc()
//		{
//			s::a;
//		}
//	private:
//		int q;
//	};
//	void func()
//	{
//		c::q = 10;
//		cout << "sb hello world" << endl;
//	}
//private:
//	int a;
//};


//int main()
//{
//	string s;
//	cout << s.capacity() << endl;
//	int cap = s.capacity();
//	for (int i = 0;; i++)
//	{
//		if (cap != s.capacity())
//		{
//			cout << s.capacity() << endl;
//			cap = s.capacity();
//		}
//		s.push_back('c');
//		if (s.size() == 200)
//			break;
//	}
//	//~s();
//	//cout << a.print() << endl;
//	system("pause");
//	return 0;
//}

//class String
//{
//public:
//	String(const char* str = "")
//	{
//		_size = strlen(str);
//		_capacity = _size;
//		_str = new char[_size + 1];
//		strcpy(_str, str);
//	}
//	String(const String& s)
//		:_str(nullptr)
//		, _size(0)
//		, _capacity(0)
//	{
//		/*_str = new char[strlen(s._str) + 1];
//		strcpy(_str, s._str);*/
//		String tmp(s._str);
//		Swap(tmp);
//	}
//	String& operator=(const String& s)
//	{
//		if (this != &s)
//		{
//			/*char* _tmp = new char[strlen(s._str) + 1];
//			strcpy(_tmp, s._str);
//			delete[] _str;
//			_str = _tmp;*/
//			String tmp(s._str);
//			Swap(tmp);
//		}
//		return *this;
//	}
//	void Swap(String& s)
//	{
//		swap(_str, s._str);
//		swap(_size, s._size);
//		swap(_capacity, s._capacity);
//	}
//	/*String& operator=(String s)
//	{
//		Swap(s);
//		return *this;
//	}*/
//	void Reserve(int n)
//	{
//		if (n > _capacity)
//		{
//			char* _tmp = new char[n + 1];
//			strcpy(_tmp, _str);
//			delete[] _str;
//			_str = _tmp;
//			_capacity = n;
//		}
//	}
//private:
//	char* _str;
//	size_t _size;
//	size_t _capacity;
//};


//int main()
//{
//	vector<int> v = { 1, 3, 2, 3, 3, 5, 6, 7 };
//	for (auto it = v.begin(); it != v.end();)
//	{
//		if (*it == 3)
//		{
//			it = v.erase(it);
//		}
//		else
//		{
//			it++;
//		}
//	}
//	for (auto e : v)
//	{
//		cout << e << endl;
//	}
//	system("pause");
//	return 0;
//}

//template<size_t N>
//class Sum
//{
//public:
//	enum {Ret = N + Sum<N-1>::Ret};
//};
//template<>
//class Sum<1>
//{
//public:
//	enum { Ret = 1};
//};
//
//int main()
//{
//	cout << Sum<10>::Ret << endl;
//	system("pause");
//	return 0;
//}

//

//template<class T>
//struct TypeTraits
//{
//	typedef FalseType IsPodType;
//};
//template<>
//struct TypeTraits<int>
//{
//	typedef TrueType IsPodType;
//};
//template<class T>
//class Vector
//{
//	typedef T* iterator;
//public:
//	Vector()
//		:_start(nullptr)
//		, _finish(nullptr)
//		, _endofstorage(nullptr)
//	{}
//	Vector(const Vector<T>& v)
//	{
//		T* tmp = new T[v.Capacity()];
//		for (int i = 0; i < v.Size(); i++)
//		{
//			_start[i] = v[i];
//		}
//		_finish = _start + v.Size();
//		_endofstorage = _start + v.Capacity();
//	}
//	Vector<T>& operator=(Vector<T> v)
//	{
//		Swap(v);
//		return *this;
//	}
//	void Swap(Vector<T>& v)
//	{
//		swap(_start, v._start);
//		swap(_finish, v._finish);
//		swap(_endofstorage, v._endofstorage);
//	}
//	iterator begin()
//	{
//		return _start;
//	}
//	iterator end()
//	{
//		return _finish;
//	}
//	size_t Size()
//	{
//		return _finish - _start;
//	}
//	size_t Capacity()
//	{
//		return _endofstorage - _start;
//	}
//	T& operator[](size_t pos)
//	{
//		if (pos < Size())
//			return _start[pos];
//	}
//	const T& operator[](size_t pos) const
//	{
//		if (pos < Size())
//			return _start[pos];
//	}
//	void PushBack(const T& x)
//	{
//		Insert(_finish, x);
//	}
//	void PopBack()
//	{
//		Erase(_finish - 1);
//	}
//	void Reserve(size_t n)
//	{
//		if (n > Capacity())
//		{
//			size_t size = Size();
//			T* tmp = new T[n];
//			if (size > 0)
//			{
//				if (TypeTraits<T>::IsPodType().Get())
//				{
//					memcpy(this->_start, tmp, sizeof(T)*size);
//				}
//				else
//				{
//					for (int i = 0; i < size; i++)
//					{
//						tmp[i] = _start[i];
//					}
//				}				
//				delete[] _start;
//			}
//			_start = tmp;
//			_finish = _start + size;
//			_endofstorage = _start + n;
//		}
//	}
//	void Resize(size_t n, const T& x = T())
//	{
//		if (n > Capacity())
//		{
//			Reserve(n);
//		}
//		if (n < Size())
//		{
//			_finish = _start + n;
//		}
//		else
//		{
//			while (_finish < _start + n)//指针的比较
//			{
//				*_finish = x;
//				++_finish;
//			}
//		}
//	}
//	void Insert(iterator pos, const T& x)
//	{
//		size_t n = pos - _start;
//		if (_finish == _endofstorage)
//		{
//			size_t newcap = Capacity() == 0 ? 1 : Capacity() * 2;
//			Reserve(newcap);
//		}
//		pos = _start + n;
//
//		iterator end = _finish - 1;
//		while (end >= pos)
//		{
//			*(end + 1) = *end;
//			--end;
//		}
//		*pos = x;
//		++_finish;
//	}
//	void Earse(iterator pos)
//	{
//		iterator cur = pos + 1;
//		while (cur != _finish)
//		{
//			*(cur - 1) = *cur;
//			++cur;
//		}
//		--_finish;
//	}
//private:
//	iterator _start;
//	iterator _finish;
//	iterator _endofstorage;
//};
//
//int main()
//{
//	Vector<string> s;
//	s.PushBack("hahaha");
//	s.PushBack("hahaha");
//	s.PushBack("hahaha");
//	s.PushBack("hahaha");
//
//	for (auto e : s)
//	{
//		cout << e << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include<memory>
//#include<thread>
//template<class T>
//class Shared_ptr
//{
//public:
//	Shared_ptr(T* ptr = nullptr)
//		: _ptr(ptr)
//		, _pcount(new int(1))
//		, _pmutx(mew mutex)
//	{}
//	Shared_ptr(Shared_ptr<T>& p)
//		: _ptr(p._ptr)
//		, _pcount(p._count)
//		, _pmutx(p._pmutx)
//	{
//		Add();
//	}
//	Shared_ptr<T>& operator=(const Shared_ptr<T>& p)
//	{
//		if (_ptr != p._ptr)
//		{
//			Realse();
//			_ptr = p._ptr;
//			_pcount = p._pcount;
//			Add();
//		}
//		return *this;
//	}
//	void Add()
//	{
//		_pmutx->lock();
//		++(*_pcount);
//		_pmutx->unlock();
//	}
//	void Realse()
//	{
//		bool flag = false;
//
//		_pmutx->lock();
//		if (--(*pcount) == 0)
//		{
//			delete _ptr;
//			delete _pcount;
//			flag = true;
//		}
//		_pmutx->unlock();
//		if (flag)
//			delete _pmutx;
//	}
//private:
//	T* _ptr;
//	int* _pcount;
//	mutex* _pmutx;
//};


//class A
//{
//public:
//	virtual int func(int a = 10)
//	{
//		int s = a;
//		return s;
//	}
//};
//
//class B:public A
//{
//public:
//	virtual int func(int b)
//	{
//		int s = b;
//		return s;
//	}
//};
//
//int main()
//{
//	B b;
//	cout << b.func() << endl;
//	system("pause");
//	return 0;
//}

//void RotateL(Node* parent)
//{
//	Node* SubR = parent->right;
//	Node* SubRL = SubR->left;
//	parent->right = SubRL;
//	if (SubRL)
//	{
//		SubRL->parent = parent;
//	}
//	SubR->left = parent;
//	Node* pNode = parent->_parent;
//	parent->_parent = SubR;
//	if (pNode == nullptr)
//	{
//		root = SubR;
//	}
//	else
//	{
//		if (parent == pNode->left)
//		{
//			SubR->_parent = pNode;
//			SubR = pNode->left;
//		}
//		else
//		{
//			SubR->_parent = pNode;
//			SubR = pNode->right;
//		}
//	}
//	parent->bf = SubR->bf = 0;
//}
//
//
//void RotatRL(Node* parent)
//{
//	Node* SubR = parent->right;
//	Node* SubRL = SubR->left;
//	int tbf = SubRL->bf;
//
//	RotatR(SubR);
//	RotatL(parent);
//	if (tbf == 1)
//	{
//		SubR->bf = 0;
//		parent->bf = -1;
//	}
//	else if (tbf == -1)
//	{
//		SubR->bf = 1;
//		parent->bf = 0;
//	}
//	else
//	{
//		SubR->bf = parent->bf = 0;
//	}
//	SubRL->bf = 0;
//}
//
//void RotatLR(Node* parent)
//{
//	Node* SubL = parent->left;
//	Node* SubLR = SubL->right;
//	int tbf = SubLR->bf;
//
//	RotatL(SubL);
//	RotatR(parent);
//	if (tbf == 1)
//	{
//		SubL->bf = -1;
//		parent->bf = 0;
//	}
//	else if (tbf == -1)
//	{
//		SubL->bf = 0;
//		parent->bf = 1;
//	}
//	else
//	{
//		SubL->bf = parent->bf = 0;
//	}
//	SubLR->bf = 0;
//}
//
//void Insert()
//{
//	... / cur;
//	while (parent)
//	{
//		if (cur == parent->right)
//		{
//			++(parent->bf);
//		}
//		else
//		{
//			--(parent->bf);
//		}
//
//		if (parent->bf == 0)
//		{
//			break;
//		}
//		else if (abs(parent->bf == 1))
//		{
//			cur = parent;
//			parent = parent->_parent;
//		}
//		else if (abs(parent->bf) == 2)
//		{
//			if (parent->bf == 2)
//			{
//				if (cur->bf == 1)
//				{
//					RotatL(parent);
//				}
//				else if (cur->bf == -1)
//				{
//					RotatRL(parent);
//				}
//			}
//			else if (parent->bf == -2)
//			{
//				if (cur->bf == -1)
//				{
//					RotatR(parent);
//				}
//				else if (cur->bf == 1)
//				{
//					RotatLR(parent);
//				}
//			}
//			break;
//		}
//		else
//		{
//			cerr << "平衡因子错误" << endl;
//			break;
//		}
//	}
//	return true;
//}

#include<thread>
#include<memory>
#include<string.h>
int main()
{
	//string s = "ss";
	//std::unique_ptr<string> i_ptr(new string(s));
	//std::unique_ptr<string> copy(std::move(i_ptr));

	//v.push_back("peter");//移动构造

	char arr[] = "abc\\nabc";
	cout << strlen(arr) << endl;
	system("pause");
	return 0;
}

//void f1(string&& s)
//{
//	string copy(s);
//}
//
//int main()
//{
//	string str("hello");
//	f1(move(str));
//}

//void func()
//{
//	int a = 1;
//	int b = 2;
//	auto swap = [a, b]()mutable
//	{
//		int c = a;
//		a = b;
//		b = c;
//	}
//}