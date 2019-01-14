BTNode* BinaryFind(BTNode* root, BTNodeType x)//在二叉树中查找一个值
{
	if(root == NULL)
		return NULL;

	if(root -> val == x)
	{
		return root;
	}

	BTNode* ret;

	ret = BinaryFind(root -> left, x);
	if(ret)
	{
		return ret;
	}

	return BinaryFind(root -> right);
}