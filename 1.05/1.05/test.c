BTNode* BinaryFind(BTNode* root, BTNodeType x)//�ڶ������в���һ��ֵ
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