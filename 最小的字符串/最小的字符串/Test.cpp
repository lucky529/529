#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

int main()
{
	string map[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	string s;
	s += map[4];
	cout << s << endl;
	system("pause");
	return 0;
}

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	string map[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	void _binaryTreePaths(TreeNode* root, string cmb, vector<string>& v)
	{
		if (root->left == nullptr && root->right == nullptr)
		{
			cmb = map[(root->val)] + cmb;
			v.push_back(cmb);
			return;
		}

		if (root->left)
			_binaryTreePaths(root->left, map[(root->val)] + cmb, v);
		if (root->right)
			_binaryTreePaths(root->right, map[(root->val)] + cmb, v);
	}
	string smallestFromLeaf(TreeNode* root) {
		vector<string> v;
		string min;
		if (root == nullptr) return min;
		string cmb;
		_binaryTreePaths(root, cmb, v);
		min = v[0];
		for (int i = 1; i < v.size(); i++)
		{
			if (strcmp(min.c_str(), v[i].c_str()) > 0)
			{
				min = v[i];
			}
		}
		return min;
	}
};

class Solution {
public:
	char map[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	string min = "~";
	void dfs(TreeNode* root, string s)//直接比较记录最小的字符串
	{
		if (root == nullptr) return;
		s += map[root->val];
		if (root->left == nullptr && root->right == nullptr)
		{
			reverse(s.begin(), s.end());
			if (s.compare(min) < 0)
			{
				min = s;
			}
		}
		dfs(root->left, s);
		dfs(root->right, s);
	}
	string smallestFromLeaf(TreeNode* root) {
		dfs(root, "");
		return min;
	}
};