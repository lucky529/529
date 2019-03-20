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

#include <stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;

//void func(const int& a,const int& b)
//{
//	cout << a << endl;//2
//	cout << b << endl;//0	
//}
int main()
{
	const int a = 10;
	const int& ra = a;

	system("pause");
	return 0;
}