#include<unordered_set>
#include<iostream>
#include<windows.h>
#include<vector>
#include<algorithm>
#include<thread>
#include<mutex>
#include<stack>
using namespace std;
//
//void func(vector<vector<int>>& vv, vector<int> v, int m)
//{
//	if (m == 0)
//	{
//		sort(v.begin(), v.end());
//		if (find(vv.begin(), vv.end(), v) == vv.end())
//		{
//			vv.push_back(v);
//		}
//		return;
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		v[i] += 1;
//		func(vv, v, m - 1);
//		v[i] -= 1;
//	}
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		vector<int> v(n);
//		vector<vector<int>> vv;
//		func(vv,v, m);
//		cout << vv.size() << endl;
//	}
//	system("pause");
//	return 0;
//}


//void Test()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	free(p1);
//	// 1.malloc/calloc/realloc的区别是什么？
//	int* p2 = (int*)calloc(4, sizeof (int));
//	int* p3 = (int*)realloc(p2, sizeof(int)* 10);
//	// 这里需要free(p2)吗？
//	free(p3);
//}

//class HeapOnly
//{
//public:
//	static HeapOnly* CreateObject()
//	{
//		return new HeapOnly;
//	}
//private:
//	HeapOnly()
//	{}
//	// C++98
//	// 1.只声明,不实现。因为实现可能会很麻烦，而你本身不需要
//	// 2.声明成私有
//	HeapOnly(const HeapOnly&) = delete;
//};

//class StackOnly
//{
//public:
//	static StackOnly CreateObject()
//	{
//		return StackOnly();
//	}
//private:
//	StackOnly() {}
//	void* operator new(size_t size);
//	void operator delete(void* p);
//};

//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//		return &sn;
//	}
//private:
//	Singleton()
//	{}
//
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	static Singleton sn;
//};
//Singleton Singleton::sn;
//
//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//		if (sn == nullptr)
//		{
//			mutx.lock();
//			if (sn == nullptr)
//			{
//				sn = new Singleton();
//			}
//			mutx.unlock();
//		}
//		return sn;
//	}
//private:
//	Singleton()
//	{}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//
//	static Singleton* sn;
//	static mutex mutx;
//};
//Singleton* Singleton::sn = nullptr;
//mutex Singleton::mutx;


void _Merge(vector<int>& v, vector<int>& tmp, int start, int end)
{
	if (end <= start) return;
	int mid = start + (end - start) / 2;
	_Merge(v, tmp, start, mid);
	_Merge(v, tmp, mid+1, end);

	int begin1 = start, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int index = 0;

	while (begin1 <= end1 && begin2 <= end2){
		if (v[begin1] < v[begin2])
			tmp[index++] = v[begin1++];
		else
			tmp[index++] = v[begin2++];
	}

	while (begin1 <= end1)
		tmp[index++] = v[begin1++];
	while (begin2 <= end2)
		tmp[index++] = v[begin2++];
	for (int i = 0; i < index; i++)
		v[start + i] = tmp[i];
}
void Merge(vector<int>& v)
{
	vector<int> tmp(v.size(), 0);
	_Merge(v, tmp, 0, v.size() - 1);
}

//int _QuickSort(vector<int>& v, int start, int end)//前后指针
//{
//	int key = start;
//	int pre = start, cur = pre + 1;
//	while (cur <= end)
//	{
//		if (v[key] >= v[cur] && ++pre != cur)
//		{
//			swap(v[cur], v[pre]);
//		}
//		++cur;
//	}
//	swap(v[key], v[pre]);
//	return pre;
//}

//int _QuickSort(vector<int>& v, int start, int end)
//{
//	int key = start;
//	while (start < end)//start == end没必要走下去
//	{
//		while (start < end && v[end] >= v[key])
//			--end;
//		while (start < end && v[start] <= v[key])
//			++start;
//		swap(v[start], v[end]);
//	}
//	swap(v[end], v[key]);
//	return start;
//}

int _QuickSort(vector<int>& v, int start, int end)
{
	int key = v[start];
	while (start < end)//start == end没必要走下去
	{
		while (start < end && v[end] >= key)
		{
			--end;
		}
		v[start] = v[end];
		while (start < end && v[start] <= key)
		{
			++start;
		}
		v[end] = v[start];
	}
	v[start] = key;
	return start;
}


//void QuickSort(vector<int>& v, int start, int end)
//{
//	if (end < start) return;
//
//	int index = _QuickSort(v, start, end);
//	QuickSort(v, start, index - 1);
//	QuickSort(v, index+1, end);
//}

void QuickSort(vector<int>& v, int start, int end)
{
	stack<int> st;
	st.push(end);
	st.push(start);
	while (!st.empty())
	{
		int left = st.top(); st.pop();
		int right = st.top(); st.pop();		
		int index = _QuickSort(v, left, right);
		
		if (index + 1 < right)
		{
			st.push(end);
			st.push(index + 1);
		}
		if (index - 1 > left)
		{
			st.push(index - 1);
			st.push(left);
		}
	}
}

//void AdjustDown(vector<int>& v, int root, int size)
//{
//	int parent = root;
//	int child = 2 * parent + 1;
//	while (child < size)
//	{
//		if (child + 1 < size && v[child] < v[child+1])
//			++child;
//		if (v[parent] < v[child])
//		{
//			swap(v[parent], v[child]);
//			parent = child;
//			child = 2 * parent + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapSort(vector<int>& v)
//{
//	for (int i = (v.size() - 2) / 2; i >= 0; i--)
//	{
//		AdjustDown(v, i, v.size());
//	}
//	int end = v.size() - 1;
//	while (end >= 0)
//	{
//		swap(v[0], v[end]);
//		AdjustDown(v, 0, end);
//		end--;
//	}
//}

//void BubbleSort(vector<int>& v)
//{
//	int lastindex = 0;
//	int sortbirder = v.size() - 2;
//	for (int i = 0; i < v.size() - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < sortbirder; j++)
//		{
//			if (v[j] > v[j + 1])
//			{
//				swap(v[j], v[j + 1]);
//				flag = 1;
//				lastindex = j;
//			}
//		}
//		sortbirder = lastindex;
//		if (flag == 0) break;
//	}
//}
//int main()
//{
//	vector<int> v{ 2, 5, 6, 4, 7, 1, 8, 3, 9 };
//	//QuickSort(v,0,v.size()-1);
//	//BubbleSort(v);
//	for (auto& e : v){
//		cout << e << endl;
//	}
//	system("pause");
//	return 0;
//}

//void _Merge(vector<int>& v, vector<int>& tmp, int start, int end)
//{
//	if (end <= start) return;
//
//	int len = (start + end) / 2;
//	_Merge(v, tmp, start, start + len);
//	_Merge(v, tmp, start + len + 1, end);
//
//	int begin1 = start, end1 = start + len;
//	int begin2 = start + len + 1, end2 = end;
//
//	int index = 0;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (v[begin1] > v[begin2])
//		{
//			tmp[index++] = v[begin2++];
//		}
//		else
//		{
//			tmp[index++] = v[begin1++];
//		}
//	}
//
//	while (begin1 <= end1)
//		tmp[index++] = v[begin1++];
//	while (begin2 <= end2)
//		tmp[index++] = v[begin2++];
//
//	for (int i = 0; i < index; i++)
//	{
//		v[start + i] = tmp[i];
//	}
//}
//
//
//void AdjustDown(vector<int>& v, int root, int size)
//{
//	int parent = root;
//	int child = 2 * parent + 1;
//	while (child < size)
//	{
//		if (child + 1 < size && v[child] < v[child + 1])
//			++child;
//		if (v[parent] < v[child])
//		{
//			swap(v[parent], v[child]);
//			parent = child;
//			child = 2 * parent + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapSort(vector<int>& v)
//{
//	for (int i = (v.size() - 2) / 2; i >= 0; i--)
//	{
//		AdjustDown(v, i, v.size());
//	}
//
//	int end = v.size() - 1;
//	while (end >= 0)
//	{
//		swap(v[0], v[end]);
//		AdjustDown(v, 0, end);
//		--end;
//	}
//}
//
//int _QuickSort(vector<int>& v, int start, int end)
//{
//	int key = start;
//	int cur = start + 1, pre = start;
//	while (cur <= end)
//	{
//		if (v[cur] <= v[key] && ++pre != cur)
//		{
//			swap(v[cur], v[pre]);
//		}
//		++cur;
//	}
//	swap(v[key], v[pre]);
//	return pre;
//}
//void QuickSort(vector<int>& v, int start, int end)
//{
//	if (end <= start) return;
//	int index = _QuickSort(v, start, end);
//	QuickSort(v, start, index - 1);
//	QuickSort(v, index+1, end);
//}
//
//void BubbleSort(vector<int>& v)
//{
//	int sortbound = v.size() - 2;
//	int lastbound = 0;
//	for (int i = 0; i < v.size() - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < sortbound; j++)
//		{
//			if (v[j] > v[j + 1])
//			{
//				swap(v[j], v[j + 1]);
//				flag = 1;
//				lastbound = j;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}

//void CountSort(vector<int>& v)
//{
//	int min = v[0], max = v[0];
//	for (auto& e : v)
//	{
//		if (e < min) min = e;
//		if (e > max) max = e;
//	}
//
//	vector<int> cv(max - min + 1, 0);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cv[v[i] - min]++;
//	}
//
//	int index = 0;
//	for (int i = 0; i < cv.size(); i++)
//	{
//		while (cv[i]--)
//			v[index++] = i+min;
//	}
//}

void Select(vector<int>& v)
{
	int start = 0;
	int end = v.size() - 1;
	while (start < end)
	{
		int min = start;
		int max = end;
		for (int i = start; i <= end; i++)
		{
			if (v[i] >= v[max]) max = i;
			if (v[i] <= v[min]) min = i;
		}
		swap(v[start], v[min]);
		if (max == start)
			max = min;
		swap(v[end], v[max]);
		++start; --end;
	}
}

void InsertSort(vector<int>& v)
{
	for (int i = 0; i < v.size() - 1; i++)
	{
		int end = i;
		int tmp = v[end + 1];
		while (end >= 0)
		{
			if (tmp < v[end])
			{
				v[end + 1] = v[end];
				--end;
			}
			else
			{
				break;
			}
			v[end + 1] = tmp;
		}
	}
}

void ShellSort(vector<int>& v)
{
	int gap = v.size();
	while (gap > 1)//区间始终大于一
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < v.size() - gap; i+=gap)
		{
			int end = i;
			int tmp = v[end + gap];
			while (end >= 0)
			{
				if (tmp < v[end])
				{
					v[end + gap] = v[end];
					end -= gap;
				}
				else
				{
					break;
				}
				v[end + gap] = tmp;
			}
		}
	}
}

void dfs(vector<vector<int>>& vv, vector<int> v, int pre, int cur, bool& flag)
{
	if ((v[1]!=-1 || v[2] != -1) && cur < pre){
		flag = true;
		return;
	}

	if (cur != -1)
	{
		if (v[1] != -1)
			dfs(vv, vv[v[1]], cur, vv[v[1]][0], flag);
		if (v[2] != -1)
			dfs(vv, vv[v[2]], cur, vv[v[2]][0], flag);
	}
}
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> v(n+1, 1);
		int index = 0, res = 0, i = 1;
		while (i)
		{
			if (v[i] != 0)
				index++;
			if (index % 5 == 0)
			{
				res += 1;
				v[i] = 0;
			}
			if (index % 5 == 0 && i == n)
			{
				cout << res << endl;
				break;
			}
			if (i == n)
			{
				i = 1; continue;
			}
			i++;
		}		
	}
	system("pause");
	return 0;
}

//bool EnumFile(const std::string& input_path, std::vector<std::string>& file_list)
//{
//	namespace fs = boost::filesystem;
//	fs::path root_path(input_path);
//	if (!fs::exists(root_path))
//	{
//		std::cout << "root_path is empty" << endl;
//		return false;
//	}
//	fs::recursive_directory_iterator end_iter;
//	for (fs::recursive_directory_iterator iter(root_path); iter != end_iter; ++iter)
//	{
//		if (!fs::is_regular_file(*iter))
//		{
//			continue;
//		}
//		if (iter->path().extension != ".html")
//		{
//			continue;
//		}
//		file_list.push_back(iter->path().string());
//	}
//	return true;
//}
//
//bool EnumFile(const std::string& input_path, std::vector<std::string>& file_list)
//{
//	namespace fs = boost::filesystem;
//	fs::path root_path(input_path);
//	if (!fs::exists(root_path))
//	{
//		cout << "root_path is empty()" << endl;
//		return false;
//	}
//
//	fs::recursive_directory_iterator end_iter;
//	for (fs::recursive_directory_iterator iter(root_path); iter != end_iter; ++iter)
//	{
//		if (fs::is_regular_file(*iter))
//			continue;;
//		if (iter->path().enxtension() != ".html")
//			continue;
//
//		file_list.push_back(iter->path().string());
//	}
//	return true;
//}