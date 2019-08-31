#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<map>
#include<string>
#include<vector>
#include<stack>
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

//int main()
//{
//	
//	map<string, int> mp;
//	for (int i = 0; i < words.size(); i++)
//	{
//		string tmp = "";
//		for (int j = 0; j < words[i].size(); j++)
//		{
//			tmp += map[words[i][j] - 'a'];
//		}
//		mp[tmp]++;
//	}
//	int count = 0;
//	auto it = mp.begin();
//	while (it != mp.end())
//	{
//		count++;
//		it++;
//	}
//	return count;
//	/*map<string, int> mp;
//	mp["ss"] = 1;
//	auto it = mp.begin();
//	it++;
//	string a = it->first;
//	cout << a << endl;*/
//	//auto it = mp.begin();
//	/*mp["hello"]++;
//	mp["lllll"]++;
//
//	auto it = mp.begin();
//	while (it != mp.end())
//	{
//		cout << it->second << endl;
//		it++;
//	}
//	string ret;
//	ret = it->first;
//	cout << ret << endl;*/
//	
//	
//
//	
//	//char p[4][12] = {"aaa","bbbb","ccccc","dddddd"};
//	////scanf("%s", p);
//	//cout << p << endl;//打印全局a的地址
//	//fun1();//打印全局a的地址
//	//fun2();	//打印局部静态变量a的地址
//	//const int x = 1;
//	//int* p;
//	//int const** q = &p;  // q now points to p; this is (fortunately!) an error
//	//*q = &x;             // p now points to x
//	//*p = 2;	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	stack<string> st;
//	string s = "/home///////////////////////..//////../";
//	vector<string> v;
//	int pre = 0, cur = 0, count = 1;
//	while (cur < s.size())
//	{
//		while (s[cur] != '/')
//		{
//			cur++;count++;
//		}
//		string tmp = s.substr(pre, count);
//		v.push_back(tmp);
//		pre = ++cur;
//		count = 1;
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i] == "/")
//		{
//			if (st.empty()) st.push(v[i]);
//			else continue;
//		}
//		else if (v[i] == "../")
//		{
//			if (st.size() == 1) continue;
//			else st.pop();
//		}
//		else if (v[i] == "./")
//		{
//			continue;
//		}
//		else
//		{
//			st.push(v[i]);
//		}
//	}
//	string ret = "";
//	while (!st.empty())
//	{
//		ret = st.top() + ret;
//		st.pop();
//	}
//	if (ret.size() != 1 && ret[ret.size() - 1] == '/')
//		ret.pop_back();
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	string s = "a good   example";
//	stack<string> st;
//	int cur = 0, pre = 0, count = 0;
//	while (s[cur] == ' ') cur++;	
//	while (cur < s.size())
//	{
//		pre = cur;
//		while (cur < s.size() && s[cur] != ' ')
//		{
//			cur++; count++;
//		}
//		string tmp = s.substr(pre, count);
//		st.push(tmp);
//		while (cur < s.size() && s[cur] == ' ')
//		{
//			cur++;
//		}
//		count = 0;
//	}
//	string ret = "";
//	while (!st.empty())
//	{
//		ret = ret + (st.top() + " ");
//		st.pop();
//	}
//	ret.pop_back();
//	cout << ret << endl;
//
//	system("pause");
//	return 0;
//}

//int main()
//{	
//	/*string str = "";
//	stack<char> st;
//	stack<int> nst;
//	for (auto e : s)
//	{
//		if (e == ' ') continue;
//		else if (e >= '0' && e <= '9') str += e;
//		else if (e == '+' || e == '-' || e == '*' || e == '/')
//		{
//			if (st.empty()) st.push(e);
//			else if (e == '+' || e == '-')
//			{
//				while (!st.empty())
//				{
//					str += st.top();
//					st.pop();
//				}
//				st.push(e);
//			}
//			else
//			{
//				while (!st.empty() && (st.top() == '*' || st.top() == '/'))
//				{
//					str += st.top();
//					st.pop();
//				}
//				st.push(e);
//			}
//		}
//	}
//	while (!st.empty())
//	{
//		str += st.top();
//		st.pop();
//	}
//
//	for (auto e : str)
//	{
//		if (e == '-')
//		{
//			int right = nst.top();
//			nst.pop();
//			int left = nst.top();
//			nst.pop();
//			nst.push(left - right);
//		}
//		else if (e == '+')
//		{
//			int right = nst.top();
//			nst.pop();
//			int left = nst.top();
//			nst.pop();
//			nst.push(left + right);
//		}
//		else if (e == '*')
//		{
//			int right = nst.top();
//			nst.pop();
//			int left = nst.top();
//			nst.pop();
//			nst.push(left * right);
//		}
//		else if (e == '/')
//		{
//			int right = nst.top();
//			nst.pop();
//			int left = nst.top();
//			nst.pop();
//			nst.push(left / right);
//		}
//		else
//		{
//			nst.push(e - '0');
//		}
//	}
//	cout << nst.top() << endl;*/
//	string s("1*2-3/4+5*6-7*8+9/10");
//	int res = 0, d = 0;
//	char sign = '+';
//	stack<int> nums;
//	for (int i = 0; i < s.size(); ++i) {
//		if (s[i] >= '0') {//加减乘除和空格ASCII码都小于'0'
//			d = d * 10 - '0' + s[i];//进位(先减法)
//		}
//		if ((s[i] < '0' && s[i] != ' ') || i == s.size() - 1) {
//			if (sign == '+') {
//				nums.push(d);
//			}
//			else if (sign == '-') {
//				nums.push(-d);
//			}
//			else if (sign == '*' || sign == '/') {
//				int tmp = sign == '*' ? nums.top() * d : nums.top() / d;
//				nums.pop();
//				nums.push(tmp);
//			}
//			sign = s[i]; //保存当前符号
//			d = 0;
//		}
//	}
//	for (; !nums.empty(); nums.pop()) {
//		res += nums.top();
//	}
//	return res;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	vector<char> chars{ 'b', 'l', 'l', 'l', 'l', 'l', 'l', '4', '4', 'W', 'W', '&', 'd', 'd', 'd'};
//	int cur = 0, pre = 0, index = 0, count = 0;
//	while (cur < chars.size())
//	{
//		char tmp = chars[pre];
//		while (cur < chars.size() && tmp == chars[cur])
//		{
//			cur++; count++;
//		}
//		if (count == 1)
//		{
//			chars[index++] = chars[pre];
//			count = 0; pre = cur;
//			continue;
//		}
//		chars[index++] = tmp;		
//		string tmpp = to_string(count);
//		for (int i = 0; i <= tmpp.size() - 1; i++)
//		{
//			chars[index++] = tmpp[i];
//		}
//		count = 0; pre = cur;
//	}
//	cout << index << endl;
//
//	system("pause");
//	return 0;
//}

int main()
{
	string a = "0+20i"; string b = "0+20i";
	int cur1 = a.size()-1, cur2 = b.size()-1;
	int x1 = atoi(a.c_str());
	int x2 = atoi(b.c_str());	
	while (a[cur1] != '+'){
		cur1--;
	}
	a = a.substr(cur1+1);
	while (b[cur2] != '+'){
		cur2--;
	}
	b = b.substr(cur2+1);
	int y1 = atoi(a.c_str());
	int y2 = atoi(b.c_str());
	int aa = x1 * x2 - y1 * y2;
	int bb = x1 * y2 + x2 * y1;
	string ret = "";
	ret += (to_string(aa) + "+") + (to_string(bb) + "i");
	cout << ret << endl;
	
	system("pause");
	return 0;
}