#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<windows.h>
#include<iostream>
#include<vector>
#include<map>
#include<memory>
#include <thread>
#include <mutex>
#include<algorithm>
#include<unordered_map>
using namespace std;
//
////int main()
////{
////	int min = INT_MAX;
////	vector<string> timePoints = {"01:01", "02:01"};
////	map<int, int> mp;
////	for (auto e : timePoints)
////	{
////		int num = 60*atoi(e.c_str());
////		int index = 0;
////		while (e[index++] != ':');
////		e = e.substr(index);
////		mp[num += atoi(e.c_str())]++;
////	}
////	int left = mp.begin()->first;
////	int right = (--mp.end())->first;	
////	if (left == right) cout << 0 << endl;
////	auto cur = ++mp.begin();
////	auto pre = mp.begin();
////	while (cur != mp.end())
////	{
////		if (cur->second > 1 || pre->second > 1)
////		{
////			cout << 0 << endl;
////			break;
////		}
////		min = cur->first - pre->first < min ? cur->first - pre->first : min;
////		pre = cur; cur++;
////	}
////	min = (left - 0) + (1440 - right) < min ? (left - 0) + (1440 - right) : min;
////
////	cout << min << endl;
////	system("pause");
////	return 0;
////}
//
////int dp[101] = { -1 };
////int solve(int n)
////{ 
////	if (n < 0)
////		return 0;
////	if (n == 0)
////		return 1;
////	if (dp[n] != -1)
////		return dp[n];
////
////	return dp[n] = solve(n - 1) + solve(n - 3) + solve(n - 5);
////}
//
//
//int fun( void )
//{
//	int dp[11];
//	dp[0] = dp[1] = 1;
//	for (int i = 2; i <= 10; i++)
//	{
//		dp[i] = 0;
//		for (int j = 0; j < i; j++)
//		{
//			dp[i] += dp[j] * dp[i - j - 1];
//		}
//	}
//	return dp[10];
//}
//int main()
//{
//	/*memset(dp, -1, 101 * 4);
//	cout << solve(40) << endl;*/
//	cout << fun() << endl;
//	system("pause");
//	return 0;
//}


//using namespace std;
//
//int count(int S[], int m, int n)
//{
//	int i, j, x, y;
//
//	// We need n+1 rows as the table  
//	// is constructed in bottom up 
//	// manner using the base case 0 
//	// value case (n = 0) 
//	int table[5][3];//n+1 m
//
//	// Fill the enteries for 0 
//	// value case (n = 0) 
//	for (i = 0; i < m; i++)
//		table[0][i] = 1;
//
//	// Fill rest of the table entries  
//	// in bottom up manner  
//	for (i = 1; i < n + 1; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			// Count of solutions including S[j] 
//			x = (i - S[j] >= 0) ? table[i - S[j]][j] : 0;
//
//			// Count of solutions excluding S[j] 
//			y = (j >= 1) ? table[i][j - 1] : 0;
//
//			// total count 
//			table[i][j] = x + y;
//		}
//	}
//	return table[n][m - 1];
//}
//
//// Driver Code 
//int main()
//{
//	int arr[] = { 1, 2, 3 };
//	int m = sizeof(arr) / sizeof(arr[0]);
//	int n = 4;
//	cout << count(arr, m, n);
//	return 0;
//}

//struct ListNode
//{
//	int _data;
//	weak_ptr<ListNode> _next;
//	weak_ptr<ListNode> _prev;
//	~ListNode()
//	{
//		cout << "~ListNode()" << endl;
//	}
//};
//int main()
//{
//	shared_ptr<ListNode> cur(new ListNode);
//	shared_ptr<ListNode> next(new ListNode);
//
//	cout << cur.use_count() << endl;
//	cout << next.use_count() << endl;
//
//	cur->_next = next;
//	next->_prev = cur;
//
//	cout << cur.use_count() << endl;
//	cout << next.use_count() << endl;
//
//	system("pause");
//	return 0;
//}


//template<class T>
//class Shared_Ptr {
//public:
//	Shared_Ptr(T* ptr = nullptr)
//		: _ptr(ptr)
//		, _count(new int(1))
//		, _pmtx(new mutex)
//	{}
//
//	Shared_Ptr(Shared_Ptr<T>& ap)
//		:_ptr(ap._ptr)
//		, _count(ap._count)
//		, _pmtx(ap._pmtx)
//	{
//		Add();
//	}
//
//	void Add()
//	{
//		_pmtx->lock();
//		++(*_count);
//		_pmtx->unlock();
//	}
//
//	void Release()
//	{
//		bool flag = false;
//		_pmtx->lock();
//		if (--(*_count) == 0)
//		{
//			delete _ptr;
//			delete _count;
//			flag = true;
//		}
//		_pmtx->unlock();
//		if (flag == true)
//			delete _pmtx;
//	}
//
//	Shared_Ptr<T>& operator=(Shared_Ptr<T>& ap)
//	{
//		if (_ptr != ap._ptr)
//		{
//			Release();
//			_ptr = ap._ptr;
//			_count = ap._count;
//			Add();
//		}
//		return *this;
//	}
//
//	T& operator*()
//	{
//		return *_ptr;
//	}
//
//	T* operator->()
//	{
//		return _ptr;
//	}
//
//	~Shared_Ptr()
//	{
//		Release();
//	}
//private:
//	T* _ptr;
//	int* _count;
//	mutex* _pmtx;
//};

//template<class T>
//struct FreeFunc {
//	void operator()(T* ptr)
//	{
//		cout << "free:" << ptr << endl;
//		free(ptr);
//	}
//};
//
//int main()
//{
//	FreeFunc<int> fundel;
//	shared_ptr<int> cur((int*)malloc(4), fundel);
//
//	system("pause");
//	return 0;
//}


//template<class T>
//struct DeleteArrayFunc {
//	void operator()(T* ptr)
//	{
//		cout << "delete[]" << ptr << endl;
//		delete[] ptr;
//	}
//};
//
//class AA
//{
//private:
//	int a;
//	int b;
//};
//
//struct Fclose
//{
//	void operator()(FILE* ptr)
//	{
//		cout << "fclose:" << ptr << endl;
//		fclose(ptr);
//		ptr = nullptr;
//	}
//};
//
//int main()
//{
//	Fclose fun;
//	std::shared_ptr<FILE> sp1(fopen("test.txt","w"),fun);
//
//	system("pause");
//	return 0;
//}

//template<class Lock>
//class UniqueLock
//{
//public:
//	UniqueLock(Lock& lock)
//		:_lock(lock)
//	{
//		_lock.lock();
//	}
//
//	~UniqueLock()
//	{
//		_lock.unlock();
//	}
//private:
//	Lock& _lock;
//};
//int main()
//{	
//	volatile const int a = 2;
//	int* p = const_cast<int*>(&a);
//	*p = 3;
//	cout << a << endl;
//
//	system("pause");
//	return 0;
//}

//class A
//{
//public:
//	virtual void f(){}
//};
//class B : public A
//{};
//void fun(A* pa)
//{
//	// dynamic_cast会先检查是否能转换成功，能成功则转换，不能则返回
//	B* pb1 = static_cast<B*>(pa);
//	B* pb2 = dynamic_cast<B*>(pa);
//
//	cout << "pb1:" << pb1 << endl;//不检查是否成功
//	cout << "pb2:" << pb2 << endl;
//}
//int main()
//{
//	A a;
//	B b;
//	fun(&a);//pa转换成B*会失败返回000000
//	fun(&b);
//
//	system("pause");
//	return 0;
//}
#include<stack>

vector<int> nextGreaterElements(vector<int>& nums) {
	stack<int> s;
	int len1 = nums.size();
	vector<int> res(len1, -1);
	for (int i = len1; i<2 * len1; i++)
	{
		nums.push_back(nums[i%len1]);
	}
	int len2 = nums.size();
	for (int i = 0; i<len2; i++)
	{
		if (s.empty() || nums[s.top()] >= nums[i])
		{
			s.push(i);
		}
		else if (nums[s.top()]<nums[i])
		{
			while (!s.empty() && nums[s.top()]<nums[i])
			{
				res[s.top() % len1] = nums[i];
				s.pop();
			}
			s.push(i);
		}
	}
	return res;
}
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);

	nextGreaterElements(v);
	system("pause");
	return 0;
}