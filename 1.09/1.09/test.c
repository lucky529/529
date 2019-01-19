//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int stemps)
//{
//	int len = strlen(arr);
//	if (arr != NULL && len > 0)
//	{
//		stemps = stemps % len;
//		reverse(arr, arr + stemps - 1);
//		reverse(arr + stemps, arr + len - 1);
//		reverse(arr, arr + len - 1);
//	}
//	else
//	{
//		return;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int n = 0;
//	printf("请输入你想要旋转的字符个数\n");
//	scanf_s("%d", &n);
//
//	left_move(arr, n);
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}
//int Partition(int data[], int len, int start, int end)
//{
//	if (len < 0 || data == NULL) return;
//
//	int index = random(start, end);
//	Swap(&data[index], &data[end]);
//
//	int small = start - 1;
//	for (index = start; index < end; index++)
//	{
//		if (data[index] < data[end])
//		{
//			small++;
//		}
//		if (index != small)
//		{
//			Swap(&data[index], &data[small]);
//		}
//	}
//	small = small + 1;
//	Swap(&data[small], &data[end]);
//
//	return small;
//}
//void Quicksort(data[], len, start, end)
//{
//	int index = 0;
//	if (start == end)
//	{
//		return;
//	}
//	index = Partition(data, len, start, end);
//	if (index > start)
//	{
//		Partition(data, len, index + 1, end);
//	}
//	if (index < end)
//	{
//		Partition(data, len, start, index-1);
//	}
//}

//#include<iostream>//交换俩个数值的宏
//#include<windows.h>
//using namespace std;

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	for (auto& e : arr)
//	{
//		e *= 2;
//		cout << e << endl;
//	}
//	system("pause");
//	return 0;
//}
//void Print(int arr[])
//{
//	for (auto& e : arr)
//	{
//		cout << e << endl;
//	}
//}
#include<stdio.h>
#include<windows.h>
//#define offsetof(s,m) (size_t)&(((s *)0)->m)
#pragma pack(4)
struct S1
{
	int a;
	double d;
};

int main()
{
	printf("%d\n", sizeof(struct S1));
	system("pause");
	return 0;
}