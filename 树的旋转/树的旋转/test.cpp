#include<iostream>
#include<windows.h>
using namespace std;

struct Node
{
	Node* _left;
	Node* _right;
	Node* _parent;
	int _bf;
};
void RotateL(Node* parent)
{
	Node* SubR = parent->_right;
	Node* SubRL = SubR->_left;
	if (SubRL)
	{
		SubRL->_parent = parent;
	}
	parent->_right = SubRL;
	SubR->_left = parent;
	Node* pNode = parent->_parent;
	parent->_parent = SubR;
	if (_root == parent)
	{
		_root = SubR;
	}
	else
	{
		if (_root->_right == parent)
		{
			pNode->_right = SubR;
		}
		else if (_root->_left == parent)
		{
			pNode->_left == SubR;
		}
	}
	SubR->_parent = pNode;
	SubR->_bf = parent->_bf = 0;
}
int main()
{
	return 0;
}