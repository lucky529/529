#include<stdio.h>
#include<windows.h>

ģ��ʵ��һ��qsort����
int _cmp(const void* a, const void* b)//�ص�����
{
	return (*(int*)a) > (*(int*)b);//�Ƚϵķ�ʽ
}
void _swap(void* a, void* b, int size)//һ���ֽ�һ���ֽڵĽ���
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

printf("%d\n", strlen(arr));//���ֵ
printf("%d\n", strlen(arr + 0));//���ֵ
printf("%d\n", strlen(*arr));//����
printf("%d\n", strlen(arr[1]));//����
printf("%d\n", strlen(&arr));//���ֵ
printf("%d\n", strlen(&arr + 1));//���ֵ��������һ������
printf("%d\n", strlen(&arr[0] + 1));//���ֵ��������һ����

char arr[] = "abcdef";
printf("%d\n", sizeof(arr));//7
printf("%d\n", sizeof(arr + 0));//4
printf("%d\n", sizeof(*arr));//1
printf("%d\n", sizeof(arr[1]));//1
printf("%d\n", sizeof(&arr));//4
printf("%d\n", sizeof(&arr + 1));//4
printf("%d\n", sizeof(&arr[0] + 1));//4 �μ�ָ���ֵΪ1

printf("%d\n", strlen(arr));//6
printf("%d\n", strlen(arr + 0));//6
printf("%d\n", strlen(*arr));//����
printf("%d\n", strlen(arr[1]));//����
printf("%d\n", strlen(&arr));//6
printf("%d\n", strlen(&arr + 1));//������һ������
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
printf("%d\n", strlen(*p));//����
printf("%d\n", strlen(p[0]));//����

printf("%d\n", strlen(&p));//���ֵ����֪������ָ��\0��λ��
printf("%d\n", strlen(&p + 1));//���ֵ��ͬ��֪��\0��λ��
printf("%d\n", strlen(&p[0] + 1));//5

int a[3][4] = { 0 };
printf("&d\n", sizeof(a));//48//�������λ����Ĵ�С
printf("%d\n", sizeof(a[0][0]));//4//��һ�����ֵĴ�С
printf("%d\n", sizeof(a[0]));//16//��һ�е�����Ĵ�С
printf("%d\n", sizeof(a[0] + 1));//4//��һ�еڶ������ֵĵ�ַ
printf("%d\n", sizeof(*(a[0] + 1)));//4//��һ�еڶ������ֵĴ�С
printf("%d\n", sizeof(a + 1));//4//�ڶ��еĵ�ַ
printf("%d\n", sizeof(*(a + 1)));//16//�ڶ��еĴ�С
printf("%d\n", sizeof(&a[0] + 1));//4//�ڶ��еĵ�ַ
printf("%d\n", sizeof(*(&a[0] + 1)));//16//�ڶ���Ԫ�صĴ�С
printf("%d\n", sizeof(*a));//16//��һ�еĴ�С
printf("%d\n", sizeof(a[3]));//16//��ȻԽ���˵���sizeofֻ��һ���ؼ��������������ռ��Ƿ���Ĵ���

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);//��ȡ���ֽڷ����˱仯
	printf("%x,%x", ptr1[-1], *ptr2);
	system("pause");
	return 0;
}
