#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<windows.h>
#include<assert.h>
using namespace std;

namespace lcx
{
	//class String//传统写法
	//{
	//public:
	//	String()
	//		:_str(new char[1])
	//	{
	//		_str[0] = '\0';
	//	}
	//	String(char* str)
	//		:_str(new char[strlen(str)+1])
	//	{
	//		strcpy(_str, str);
	//	}
	//	char* c_str()
	//	{
	//		return _str;
	//	}
	//	char& operator[](size_t pos)
	//	{
	//		return this->_str[pos];
	//	}
	//	~String()
	//	{
	//		if (_str)
	//		{
	//			delete[] _str;
	//		}
	//	}
	//private:
	//	char* _str;
	//	int _size;
	//	int _capicaty;
	//};

	class String
	{
	public:		
		String(char* str = "")		
		{
			_size = strlen(str);
			_capicaty = _size;
			_str = new char[(_capicaty + 1)];

			strcpy(_str, str);
		}

		String(const String& s)
			:_str(nullptr)
			, _size(0)
			, _capicaty(0)
		{
			String tmp(s._str);
			Swap(tmp);
		}

		String& operator=(String s)
		{
			Swap(s);
			return *this;
		}

		void Swap(String& tmp)
		{
			swap(_str, tmp._str);
			swap(_size, tmp._size);
			swap(_capicaty, tmp._capicaty);
		}
		
		char* c_str()
		{
			return _str;
		}

		char& operator[](size_t pos)
		{
			return this->_str[pos];
		}

		const char* Strstr(const char* dest, const char* src)
		{
			const char* s1 = dest;
			const char* s2 = src;
			const char* ptr = s1;
			while (*ptr)
			{
				s1 = ptr;
				s2 = src;
				while (*s1 && *s2 && *s1 == *s2)
				{
					s1++;
					s2++;
				}
				if (*s2 == '\0')
				{
					return ptr;
				}
				ptr++;
			}
			return nullptr;
		}

		size_t Find(const char* str, size_t pos = 0)
		{
			const char* start = Strstr(_str + pos, str);
			if (start)
			{
				return start - _str;
			}
			else
			{
				return npos;
			}
		}

		size_t Find(char ch, size_t pos = 0)
		{
			assert(pos < _size);
			for (size_t i = pos; i < _size; i++)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return npos;
		}

		size_t RFind(char ch, size_t pos = npos)
		{
			size_t i = (pos == npos ? _size : pos + 1);
			for (size_t i = _size - pos; i > 0; i--)
			{
				if (_str[i - 1] == ch)
				{
					return i-1;
				}
			}
			return npos;
		}

		void Reserve(size_t n)
		{
			if (n > _capicaty)
			{
				char* tmp = new char[n + 1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capicaty = n;
			}
		}

		void Append(const char* str)
		{
			size_t len = strlen(str);
			if (len + _size > _capicaty)
			{
				Reserve(len + _size);
			}
			strcpy(_str + _size, str);
			_size += len;
		}

		void PushBack(char ch)
		{
			if (_size == _capicaty)
			{
				size_t newcap = _capicaty == 0 ? 15 : _capicaty *= 2;
				Reserve(newcap);
			}
			_str[_size] = ch;
			++_size;
			_str[_size] = '\0';
		}

		String& operator+=(const char* str)
		{
			Append(str);
			return *this;
		}

		String& operator+=(char ch)
		{
			PushBack(ch);
			return *this;
		}

		String Substr(size_t pos, size_t len)
		{
			String s;
			while (pos < _size && len--)
			{
				s += _str[pos++];
			}
			return s;
		}

		//错误示例
		//void Insert(size_t pos, char ch)
		//{
		//	assert(pos <= _size);
		//	int end = _size - 1;
		//	while (end >= pos)//隐式类型转换，会导致死循环（小的向大的范围转换）
		//	{
		//		_str[end + 1] = _str[end];
		//		--end;
		//	}
		//	//。。。。
		//}

		void Insert(size_t pos, char ch)
		{
			assert(pos <= _size);
			if (_size == _capicaty)
			{
				size_t newcap = _capicaty == 0 ? 15 : _capicaty *= 2;
				Reserve(newcap);
			}
			int end = _size;
			while (end > pos)//隐式类型转换，会导致死循环（小的向大的范围转换）
			{
				_str[end] = _str[end-1];
				--end;
			}
			//。。。。
			_str[pos] = ch;
			_size++;
			_str[_size] = '\0';
		}

		void Insert(size_t pos, const char* str)
		{
			size_t len = strlen(str);
			if (len + _size > _capicaty)
			{
				Reserve(len + _size);
			}
			size_t end = _size;
			while (end > pos)
			{
				_str[end - 1 + len] = _str[end - 1];
				--end;
			}
			while (*str)
			{
				_str[pos++] = *str;
				str++;
			}
			_size += len;
			_str[_size] = '\0';
		}

		~String()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
				_size = _capicaty = 0;
			}
		}
	private:
		char* _str;
		size_t _size;
		size_t _capicaty;

	public:
		static const size_t npos;
	};
	const size_t String::npos = -1;	

	void test1()
	{
		String s1;
		String s2("hello");

		cout << s2.Find("ll", 1) << endl;
		/*String s3(s2);

		cout << s2.RFind('h',5) << endl;*/
		//cout << s2.Substr(1,10).c_str() << endl;
		/*cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		cout << s3.c_str() << endl;*/
	}
}