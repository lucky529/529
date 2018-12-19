typedef char BTDataType;
typedef struct BinaryTreeNode
{
 BTDataType _data;
 struct BinaryTreeNode* _left;
 struct BinaryTreeNode* _right;
}BTNode;
// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
void BinaryTreeDestory(BTNode** root);
int BinaryTreeSize(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreeLevelKSize(BTNode* root, int k);
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
比特科技
4.3二叉树进阶面试题
1. 二叉树创建字符串。OJ链接
2. 二叉树的分层遍历 。OJ链接
3. 给定一个二叉树, 找到该树中两个指定节点的最近公共祖先 。OJ链接
4. 二叉树搜索树转换成排序双向链表。OJ链接
5. 根据一棵树的前序遍历与中序遍历构造二叉树。 OJ链接
6. 根据一棵树的中序遍历与后序遍历构造二叉树（[课堂不讲解，课后完成作业]）。OJ链接
7. 二叉树的前序遍历，非递归迭代实现 。（[课堂不讲解，课后完成作业]）OJ链接
8. 二叉树中序遍历 ，非递归迭代实现。（[课堂不讲解，课后完成作业]）OJ链接
9. 二叉树的后序遍历 ，非递归迭代实现。（[课堂不讲解，课后完成作业]）[OJ链接](https://leetcode-cn.
com/problems/binary-tree-postorder-traversal/
// 遍历
void BinaryTreePrevOrder(BTNode* root);
void BinaryTreeInOrder(BTNode* root);
void BinaryTreePostOrder(BTNode* root);
// 非递归遍历
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root);
// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root);
void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);
void TestBinaryTree();