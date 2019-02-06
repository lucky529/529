#include<stdio.h>
#include<windows.h>

模拟实现一个qsort函数
int _cmp(const void* a, const void* b)//回调函数
{
	return (*(int*)a) > (*(int*)b);//比较的方式
}
void _swap(void* a, void* b, int size)//一个字节一个字节的交换
{
	for (int i = 0; i < size; i++)
	{
		char tmp = *((char*)a + i);
		*((char*)a + i) = *((char*)b + i);
		*((char*)b + i) = tmp;
	}
}
void MyQsort(int* arr, int size, int length, int(*cmp)(void*, void*))
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (cmp(((char*)arr + j*length), ((char*)arr + (j + 1)*length)) > 0)
			{
				_swap(((char*)arr + j*length), ((char*)arr + (j + 1)*length),length);
			}
		}
	}
}
int main()
{
	int arr[] = { 9, 2, 3, 1, 4, 6, 5, 7, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	MyQsort(arr, size, sizeof(int), _cmp);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

int a[] = { 1, 2, 3, 4 };
printf("%d\n", sizeof(a));//16
printf("%d\n", sizeof(a + 0));//4
printf("%d\n", sizeof(*a));//4
printf("%d\n", sizeof(a + 1));//4
printf("%d\n", sizeof(a[1]));//4
printf("%d\n", sizeof(&a));//4
printf("%d\n", sizeof(*&a));//16
printf("%d\n", sizeof(&a + 1));//4
printf("%d\n", sizeof(&a[0]));//4
printf("%d\n", sizeof(&a[0] + 1));//4char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
printf("%d\n", sizeof(arr));//6
printf("%d\n", sizeof(arr + 0));//4
printf("%d\n", sizeof(*arr));//1
printf("%d\n", sizeof(arr[1]));//1
printf("%d\n", sizeof(&arr));//4
printf("%d\n", sizeof(&arr + 1));//4
printf("%d\n", sizeof(&arr[0] + 1));//4

printf("%d\n", strlen(arr));//随机值
printf("%d\n", strlen(arr + 0));//随机值
printf("%d\n", strlen(*arr));//错误
printf("%d\n", strlen(arr[1]));//错误
printf("%d\n", strlen(&arr));//随机值
printf("%d\n", strlen(&arr + 1));//随机值，跳过了一个数组
printf("%d\n", strlen(&arr[0] + 1));//随机值，跳过了一个数

char arr[] = "abcdef";
printf("%d\n", sizeof(arr));//7
printf("%d\n", sizeof(arr + 0));//4
printf("%d\n", sizeof(*arr));//1
printf("%d\n", sizeof(arr[1]));//1
printf("%d\n", sizeof(&arr));//4
printf("%d\n", sizeof(&arr + 1));//4
printf("%d\n", sizeof(&arr[0] + 1));//4 牢记指针的值为1

printf("%d\n", strlen(arr));//6
printf("%d\n", strlen(arr + 0));//6
printf("%d\n", strlen(*arr));//错误
printf("%d\n", strlen(arr[1]));//错误
printf("%d\n", strlen(&arr));//6
printf("%d\n", strlen(&arr + 1));//跳过了一个数组
printf("%d\n", strlen(&arr[0] + 1));//5

char *p = "abcdef";
printf("%d\n", sizeof(p));//4
printf("%d\n", sizeof(p + 1));//4
printf("%d\n", sizeof(*p));//1
printf("%d\n", sizeof(p[0]));//1
printf("%d\n", sizeof(&p));//4
printf("%d\n", sizeof(&p + 1));//4
printf("%d\n", sizeof(&p[0] + 1));//4

printf("%d\n", strlen(p));//6
printf("%d\n", strlen(p + 1));//5
printf("%d\n", strlen(*p));//错误
printf("%d\n", strlen(p[0]));//错误

printf("%d\n", strlen(&p));//随机值，不知道二级指针\0的位置
printf("%d\n", strlen(&p + 1));//随机值，同理不知道\0的位置
printf("%d\n", strlen(&p[0] + 1));//5

int a[3][4] = { 0 };
printf("&d\n", sizeof(a));//48//数这个二位数组的大小
printf("%d\n", sizeof(a[0][0]));//4//第一个数字的大小
printf("%d\n", sizeof(a[0]));//16//第一行的数组的大小
printf("%d\n", sizeof(a[0] + 1));//4//第一行第二个数字的地址
printf("%d\n", sizeof(*(a[0] + 1)));//4//第一行第二个数字的大小
printf("%d\n", sizeof(a + 1));//4//第二行的地址
printf("%d\n", sizeof(*(a + 1)));//16//第二行的大小
printf("%d\n", sizeof(&a[0] + 1));//4//第二行的地址
printf("%d\n", sizeof(*(&a[0] + 1)));//16//第二行元素的大小
printf("%d\n", sizeof(*a));//16//第一行的大小
printf("%d\n", sizeof(a[3]));//16//虽然越界了但是sizeof只是一个关键字他不关心这块空间是否真的存在

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);//读取的字节发生了变化
	printf("%x,%x", ptr1[-1], *ptr2);
	system("pause");
	return 0;
}
