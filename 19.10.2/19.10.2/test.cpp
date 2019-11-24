#include<iostream>
#include<vector>
#include<windows.h>
#include<unordered_map>
using namespace std;

//void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
//	int ornum = 0;
//	for (auto& e : data)
//		ornum ^= e;
//	int flag = 1;
//	while ((ornum ^ flag) != 0)
//		flag = flag << 1;
//
//	vector<int> n1, n2;
//	for (auto& e : data)
//	{
//		if (e & flag == 1)
//			n1.push_back(e);
//		else
//			n2.push_back(e);
//	}
//	for (auto& e : n1)
//		*num1 ^= e;
//	for (auto& e : n2)
//		*num2 ^= e;
//}

//int LastRemaining_Solution(int n, int m)
//{
//	vector<int> v(n, 1);
//	int flag = 1, index = 0, size = n;
//	while (n > 1)
//	{
//		if (flag%m == 0 && v[index] != 0)
//		{
//			v[index] = 0;
//			flag++;
//			n--;
//		}
//		if (v[index] != 0)
//		{
//			flag++;
//		}
//		index++;
//		if (index == size)
//			index = 0;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		if (v[i] == 1)
//			return i;
//	}
//	return -1;
//}

class Solution
{
public:
	//Insert one char from stringstream
	void Insert(char ch)
	{
		mp[ch]++;
		str += ch;
		while (mp[str[left]] != 1)
		{
			left++;
			if (left == str.size())
				break;
		}
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{
		if (left == str.size())
			return '#';
		return str[left];
	}
private:
	string str = "";
	unordered_map<char, int> mp;
	size_t left = 0;
};

int main()
{
	Solution* p = new Solution();
	p->Insert('g');
	cout << p->FirstAppearingOnce() << endl;
	p->Insert('o');
	cout << p->FirstAppearingOnce() << endl;
	p->Insert('o');
	cout << p->FirstAppearingOnce() << endl;
	p->Insert('g');
	cout << p->FirstAppearingOnce() << endl;
	system("pause");
	return 0;
}