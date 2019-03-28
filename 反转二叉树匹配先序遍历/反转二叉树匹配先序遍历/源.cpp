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
	vector<int> v;
	int index = 0;
	void dfs(TreeNode* root, vector<int>& voyage)
	{
		if (!v.empty() && v[0] == -1)
			return;
		if (root != nullptr)
		{
			if (root->val != voyage[index++])
			{
				v.clear();
				v.push_back(-1);
				return;
			}
		}
		if ((index < voyage.size()) && (root->left != nullptr) && (root->left->val != voyage[index]))
		{
			v.push_back(root->val);
			dfs(root->right, voyage);
			dfs(root->left, voyage);
		}
		else
		{
			dfs(root->left, voyage);
			dfs(root->right, voyage);
		}
	}
	vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
		dfs(root, voyage);
		if (!v.empty() && v[0] == -1)
		{
			v.clear();
			v.push_back(-1);
		}
		return v;
	}
};