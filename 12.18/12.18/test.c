//bool _isBalanced(struct TreeNode* root, int* pDepth) {
//	if (root == NULL) {
//		*pDepth = 0;
//		return true;
//	}
//
//	int leftDepth = 0, rightDepth = 0;
//	if (_isBalanced(root->left, &leftDepth)
//		&& _isBalanced(root->right, &rightDepth)
//		&& abs(leftDepth - rightDepth) < 2)
//	{
//		*pDepth = leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//
//}
//
//bool isBalanced(struct TreeNode* root) {
//	int depth = 0;
//	return _isBalanced(root, &depth);
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char* Getchar(char* arr, int n)
//{
//	static char a[1000] = {0};
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = arr[i];
//	}
//	return a;
//}
//int Checkchar(char* dest, char* src)
//{
//	int len1 = strlen(dest);
//	int len2 = strlen(src);
//	if (len1 % len2 != 0)
//	{
//		return 0;
//	}
//	int i, j;
//	for (i = 0, j = 0; j < len1;)
//	{
//		if (dest[i] != src[j])
//		{
//			return 0;
//		}
//		i++; j++;
//		if (j == len2)
//		{
//			j = len2;
//		}
//	}
//	return 1;
//}
//int repeatedSubstringPattern(char* s) {
//	int len = strlen(s);	
//	for (int i = 0; i < len / 2; i++)
//	{
//		char* ptr = Getchar(s, i);
//		
//		if (Checkchar(s, ptr))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr[10] = "abaababaa";
//	repeatedSubstringPattern(arr);
//	printf("%d", repeatedSubstringPattern(arr));
//	system("pause");
//	return 0;
//}

//bool repeatedSubstringPattern(char* s) {//重复字符串
//
//	int len = strlen(s);
//	for (int p = 1; p<len / 2 + 1; p++){
//		for (int i = 0; i<len - p; i++){
//			if (s[i] != s[i + p]) break;
//			if (len%p == 0 && (i == len - p - 1)) return true;
//		}
//	}
//	return false;
//}
//
//int findComplement(int num) {//数字的补数
//	int temp = num, c = 0;
//	while (temp > 0){
//		temp >>= 1;
//		c = (c << 1) + 1;
//	}
//	return num ^ c;
//}



