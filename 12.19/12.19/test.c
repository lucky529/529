typedef char BTDataType;
typedef struct BinaryTreeNode
{
 BTDataType _data;
 struct BinaryTreeNode* _left;
 struct BinaryTreeNode* _right;
}BTNode;
// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
void BinaryTreeDestory(BTNode** root);
int BinaryTreeSize(BTNode* root);
int BinaryTreeLeafSize(BTNode* root);
int BinaryTreeLevelKSize(BTNode* root, int k);
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
���ؿƼ�
4.3����������������
1. �����������ַ�����OJ����
2. �������ķֲ���� ��OJ����
3. ����һ��������, �ҵ�����������ָ���ڵ������������� ��OJ����
4. ������������ת��������˫������OJ����
5. ����һ������ǰ������������������������� OJ����
6. ����һ��������������������������������[���ò����⣬�κ������ҵ]����OJ����
7. ��������ǰ��������ǵݹ����ʵ�� ����[���ò����⣬�κ������ҵ]��OJ����
8. ������������� ���ǵݹ����ʵ�֡���[���ò����⣬�κ������ҵ]��OJ����
9. �������ĺ������ ���ǵݹ����ʵ�֡���[���ò����⣬�κ������ҵ]��[OJ����](https://leetcode-cn.
com/problems/binary-tree-postorder-traversal/
// ����
void BinaryTreePrevOrder(BTNode* root);
void BinaryTreeInOrder(BTNode* root);
void BinaryTreePostOrder(BTNode* root);
// �ǵݹ����
// �������
void BinaryTreeLevelOrder(BTNode* root);
// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root);
void BinaryTreePrevOrderNonR(BTNode* root);
void BinaryTreeInOrderNonR(BTNode* root);
void BinaryTreePostOrderNonR(BTNode* root);
void TestBinaryTree();