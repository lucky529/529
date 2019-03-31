#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<map>
#include<string>
using namespace std;

//static int a = 1;
//void fun1()
//{
//	a = 2;//对全局a的值进行更改
//	cout << &a << endl;	
//}
//void fun2()
//{
//	static int a = 4;//此处为局部静态变量隐藏全局静态变量
//	cout << &a << endl;
//}

//bool Checkstr(vector<string>& banned, string& str)
//{
//	for (int i = 0; i < banned.size(); i++)
//	{
//		if (banned[i] == str)
//			return true;
//	}
//	return false;
//}
//string mostCommonWord(string paragraph, vector<string>& banned) {
//	map<string, int> mp;
//	int cur = 0;
//	for (int i = 0; i < paragraph.size(); i++)
//	{
//		if (paragraph[i] >= 65 && paragraph[i] < 97)
//		{
//			paragraph[i] = paragraph[i] + 32;
//		}
//		if (!(paragraph[i] >= 65 && paragraph[i] < 97))
//		{
//			paragraph[i] = ' ';
//		}
//	}
//	while (cur < paragraph.size())
//	{
//		string tmp = "";
//		while (cur < paragraph.size() && paragraph[cur] != ' ')
//		{
//			tmp += paragraph[cur++];
//		}
//		mp[tmp]++;
//		while (cur < paragraph.size() && paragraph[cur] == ' ')
//		{
//			cur++;
//		}
//	}
//	string ret = ""; int max = 0;
//	auto it = mp.begin();
//	while (it != mp.end())
//	{
//		string tmp = it->first;
//		if (!Checkstr(banned, tmp) && it->second > max)
//		{
//			max = it->second;
//			ret = tmp;
//		}
//	}
//	return ret;
//}

int main()
{
	
	map<string, int> mp;
	for (int i = 0; i < words.size(); i++)
	{
		string tmp = "";
		for (int j = 0; j < words[i].size(); j++)
		{
			tmp += map[words[i][j] - 'a'];
		}
		mp[tmp]++;
	}
	int count = 0;
	auto it = mp.begin();
	while (it != mp.end())
	{
		count++;
		it++;
	}
	return count;
	/*map<string, int> mp;
	mp["ss"] = 1;
	auto it = mp.begin();
	it++;
	string a = it->first;
	cout << a << endl;*/
	//auto it = mp.begin();
	/*mp["hello"]++;
	mp["lllll"]++;

	auto it = mp.begin();
	while (it != mp.end())
	{
		cout << it->second << endl;
		it++;
	}
	string ret;
	ret = it->first;
	cout << ret << endl;*/
	
	

	
	//char p[4][12] = {"aaa","bbbb","ccccc","dddddd"};
	////scanf("%s", p);
	//cout << p << endl;//打印全局a的地址
	//fun1();//打印全局a的地址
	//fun2();	//打印局部静态变量a的地址
	//const int x = 1;
	//int* p;
	//int const** q = &p;  // q now points to p; this is (fortunately!) an error
	//*q = &x;             // p now points to x
	//*p = 2;	
	system("pause");
	return 0;
}