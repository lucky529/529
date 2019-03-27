//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<windows.h>
//#include<string>
//#include<stack>
//using namespace std;
//
//
//int evalRPN(string& tokens) {
//	stack<int> st;
//	for (auto e : tokens)
//	{
//		if (e == '+')
//		{
//			int right = st.top();
//			st.pop();
//			int left = st.top();
//			st.pop();
//			st.push(left + right);
//		}
//		else if (e == '-')
//		{
//			int right = st.top();
//			st.pop();
//			int left = st.top();
//			st.pop();
//			st.push(left - right);
//		}
//
//		else
//		{
//			int tmp = e - '0';
//			st.push(tmp);
//		}
//	}
//	return st.top();
//}
//int calculate(string s) {
//	string ret = "";
//	stack<char> st;
//	int flag = 0;
//	for (auto e : s)
//	{
//		if (e != '(' && e != ')' && e != '+' && e != '-' && flag == 0)
//		{
//			ret += e;
//		}
//		else
//		{
//			if (e == '(')
//			{
//				flag++;
//				st.push(e);
//			}
//			else if (st.empty())
//			{
//				st.push(e);
//			}
//			else if (e == ')')
//			{
//				while (st.top() != '(')
//				{
//					int left;
//					int right = e - '0';
//					st.pop();
//					if (st.top() == '(')
//					{
//						st.pop();
//						flag--;
//						if (flag == 0)
//						{
//							ret += to_string(right);
//							break;
//						}
//						else
//						{
//							st.push(right + '0');
//							break;
//						}
//					}
//					if (st.top() == '-')
//					{
//						st.pop();
//						left = e - '0';
//						st.pop();
//						st.push((left - right) + '0');
//					}
//					if (st.top() == '+')
//					{
//						st.pop();
//						left = e - '0';
//						st.pop();
//						st.push((left + right) + '0');
//					}
//				}
//			}
//			else
//			{
//				while (st.top() == '+' || st.top() == '-')
//				{
//					ret += st.top();
//					st.pop();
//				}
//			}
//		}
//	}
//	while (!st.empty())
//	{
//		ret += st.top();
//		st.pop();
//	}
//	return evalRPN(s);
//}
//int main()
//{
//	//string s("1+2");
//	//int ret = calculate(s);
//	//cout << ret << endl;
//	int(*a)[3][4]; int * b[3][4];
//	int **b = a[1][1];
//	cout << sizeof(a) << endl;
//	
//	system("pause");
//	return 0;
//}

#include<string>
#include <stdio.h>
#include<iostream>
#include<windows.h>
#include<vector>
#include<algorithm>
using namespace std;

//void func(const int& a,const int& b)
//{
//	cout << a << endl;//2
//	cout << b << endl;//0	
//}
//int main()
//{
//	const int a = 10;
//	const int& ra = a;
//
//	system("pause");
//	return 0;
//}

//class Person {
//public:
//	void BuyTicket() { cout << "买票-全价" << endl; }
//};
//class Student : public Person {
//public:
//	virtual void BuyTicket() { cout << "买票-半价" << endl; }
//};
//int main(){
//
//	
//	system("pause");
//	return 0;
//}


//#include <stdio.h>

//int main()
//{
//	char s[] = { "012xy" };
//	int i, n = 0;
//	for (i = 0; s[i]; i++) if (s[i] >= 'a' && s[i] <= 'z') n++;
//	printf("%d\n", '\0');
//	int printf = 0;
//	int enum = 0;
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#define SUB(x,y) x-y
//#define ACCESS_BEFORE(element,offset,value) *SUB(&element, offset) = value
//int main() {
//	/*unsigned long val = 0;
//	char a = 0x48;
//	char b = 0x52;
//	val = b << 8 | a;
//	printf("%d\n", val);
//	printf("\n");
//	system("pause");*/
//	cout << (1 + (2 - 2) >> 1) << endl;
//	system("pause");
//	return (0);
//}

//int main()
//{
//	int N;
//	cin >> N;
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	int ret;
//	while (c < N)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	ret = abs(N - c) > abs(N - b) ? abs(N - b) : abs(N - c);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	v.push_back(0);
//	v.push_back(-1);
//	v.push_back(5);
//	v.push_back(7);
//	v.push_back(-12);
//	v.push_back(64);
//
//	int sum = 0;
//	int max = v[0];
//	for (auto e : v)
//	{
//		if (sum > 0)
//		{
//			sum += e;
//		}
//		else
//		{
//			sum = e;
//		}
//		max = sum > max ? sum : max;
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//
//	int ss;
//	int ee;
//	int n1 = 1;
//	int n2 = 1;
//	int start = 0;
//	int end = s.size() - 1;
//	
//	int flag = 2;
//	int check = 0;
//	while (start <= end)
//	{
//		if (s[start] == s[end])
//		{
//			start++;
//			end--;
//		}
//		
//		if (s[start] != s[end] && flag != 0)
//		{
//			if (start + 1 <= end && s[start + 1] == s[end] && flag != 0 && n1)
//			{
//				ss = start;
//				ee = end;
//				n1 = 0;
//				flag--;
//				start++;
//			}
//			if (n1 == 0 || n2 == 0)
//			{
//				start = ss;
//				end = ee;
//			}
//			if (end - 1 >= start && s[start] == s[end - 1] && flag != 0 && n2)
//			{
//				ss = start;
//				ee = end;
//				n2 = 0;
//				flag--;
//				end--;
//			}
//			if (s[start] != s[end] && flag == 0)
//			{				
//				check = 1;
//				break;
//			}
//		}		
//	}
//	if (check == 1)
//	{
//		cout << "NO" << endl;
//	}
//	else
//	{
//		cout << "YES" << endl;
//	}
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a;
//	cin >> a;
//	vector<int> v;
//	v.resize(a);
//	int count = 0;
//	int sum = 0;
//	for (int i = 0; i < a; i++)
//	{
//		cin >> v[i];
//		sum += v[i];
//	}
//	if ((sum % a) != 0)
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	int ave = sum / a;
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (((ave - v[i]) & 1) == 1)
//		{
//			cout << -1 << endl;
//			return 0;
//		}
//		if (v[i] >= ave)
//		{
//			count += ((v[i] - ave) / 2);
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}

//#include<string>
//#include<iostream>
//using namespace std;
//
//bool checkch(string& s, int start, int end)
//{
//	while (start < end)
//	{
//		if (s[start] != s[end])
//		{
//			return false;
//		}
//		start++;
//		end--;
//    }
//	return true;
//}
//int main()
//{
//	string s;
//	getline(cin, s);
//	int start = 0;
//	int end = s.size() - 1;
//	bool a = true;
//	while (start < end)
//	{
//		if (s[start] != s[end])
//		{
//			//判断删除第一个或者删除最后一个是否构成回文串
//			a = checkch(s, start + 1, end) ||
//				checkch(s, start, end - 1);
//			break;
//		}
//		start++;
//		end--;
//	}
//
//	//判断结果
//	if (a)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//	system("pause");
//	return 0;
//}



//int n, a[105]; 
//int main(){
//	int cnt, flag, sum = 0;
//	int averApple = 0;
//	cin >> n;
//	for (int i = 0; i<n; i++){
//		cin >> a[i];
//		sum += a[i];
//	}
//	if (0 != (sum % n)){
//		cout << -1 << endl;
//		return 0;
//	}
//	averApple = sum / n;
//	cnt = 0;
//
//	for (int i = 0; i<n; i++){
//		//不能用2去补齐，使该数等于平均数，即分到最后每一个人的苹果不可能相等
//		if (1 == ((averApple - a[i]) & 0x01)){
//			cout << -1 << endl;
//			return 0;
//		}
//		if (averApple >= a[i]){
//
//			cnt = cnt + (averApple - a[i]) / 2;
//		}
//
//	}
//
//	cout << cnt << endl;
//
//	system("pasue");
//	return 0;
//}

int main()
{
	vector<int> v;
	for (int i = 1; i <= 7; i++)
	{
		v.push_back(i);
	}

	auto it = v.begin();
	vector<int> v1(it,it+1);
	for (auto e : v1)
	{
		cout << e << endl;
	}
	system("pause");
	return 0;
}

int len = pre.size();
if (len == 0) return nullptr;
TreeNode* node = new TreeNode(pre[0]);
if (len == 1) return node;

int L = 0;
for (int i = 0; i < len; i++)
{
	if (post[i] == pre[1])
	{
		L = i + 1;
	}
}


node->left = constructFromPrePost(v1, v2);
node->right = constructFromPrePost(v3, v4);
return node;