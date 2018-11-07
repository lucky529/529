#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[]={1,2,3,4};
//	printf("%d ",sizeof(a));//16//求整个数组的大小
//	printf("%d ",sizeof(a+0));//4//等价于a[0]
//	printf("%d ",sizeof(*a));//4//首元素地址解引用
//	printf("%d ",sizeof(a+1));//4//指针
//	printf("%d ",sizeof(a[1]));//4//第二个元素
//	printf("%d ",sizeof(&a));//4//数组的地址也是指针
//	printf("%d ",sizeof(*&a));//16//数组的地址解引用
//	printf("%d ",sizeof(&a+1));//4//指针
//	printf("%d ",sizeof(&a[0]));//4//指针
//	printf("%d ",sizeof(&a[0]+1));//4//指针
//
//
//	char arr[] = {'a','b','c','d','e','f'};//未定义数组的大小
//    printf("%d\n", sizeof(arr));//6//数组中6个字符
//    printf("%d\n", sizeof(arr+0));//4//指针
//    printf("%d\n", sizeof(*arr));//1//解引用第一个元素的大小
//    printf("%d\n", sizeof(arr[1]));//1
//    printf("%d\n", sizeof(&arr));//4//数组的地址//	printf("%d\n",sizeof(&arr+1));//4//跳过一个数组的元素
//	printf("%d\n", sizeof(&arr[0]+1));//4//数组第二个元素的地址
//
//    printf("%d\n", strlen(arr));//x//不知道\0的位置在哪里
//    printf("%d\n", strlen(arr+0));//x//同上
//    printf("%d\n", strlen(*arr));//err//strlen需要传过去的是地址
//    printf("%d\n", strlen(arr[1]));//err
//    printf("%d\n", strlen(&arr));//x//同理不知道\0的位置
//    printf("%d\n", strlen(&arr+1));//x-5//跳过了一个数组但是不知道\0的位置
//    printf("%d\n", strlen(&arr[0]+1));//x-1//同理//////	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7//字符串会求出包含\0的长度
//    printf("%d\n", sizeof(arr+0));//4//指针
//    printf("%d\n", sizeof(*arr));//1//第一个字符的大小
//    printf("%d\n", sizeof(arr[1]));//1//同理
//    printf("%d\n", sizeof(&arr));//4//首元素地址
//    printf("%d\n", sizeof(&arr+1));//4
//    printf("%d\n", sizeof(&arr[0]+1));//4
//
//    printf("%d\n", strlen(arr));//6//到\0停下
//    printf("%d\n", strlen(arr+0));//6//同理
//    printf("%d\n", strlen(*arr));//err//需要传过去地址
//    printf("%d\n", strlen(arr[1]));//err
//    printf("%d\n", strlen(&arr));//6//首元素地址
//	printf("%d\n", strlen(&arr+1));//x//跳过了这个数组
//	printf("%d\n", strlen(&arr[0]+1));//5//从第二个开始数////	char *p = "abcdef";
//    printf("%d\n", sizeof(p));//4//首字符地址
//    printf("%d\n", sizeof(p+1));//4//第二个字符的地址
//    printf("%d\n", sizeof(*p));//1//第一个字符的实际大小
//    printf("%d\n", sizeof(p[0]));//1//同上
//    printf("%d\n", sizeof(&p));//4//二级指针
//    printf("%d\n", sizeof(&p+1));//4
//    printf("%d\n", sizeof(&p[0]+1));//4////	printf("%d\n", strlen(p));//6//数这个字符串的长度
//    printf("%d\n", strlen(p+1));//5
//    //printf("%d\n", strlen(*p));//err
//    //printf("%d\n", strlen(p[0]));//err
//    printf("%d\n", strlen(&p));//x//二级指针的\0不确定
//    printf("%d\n", strlen(&p+1));//y
//    printf("%d\n", strlen(&p[0]+1));//5//从第二个字符开始数////	int a[3][4] = {0};//	printf("&d\n",sizeof(a));//48//数这个二位数组的大小//	printf("%d\n",sizeof(a[0][0]));//4//第一个数字的大小
//    printf("%d\n",sizeof(a[0]));//16//第一行的数组的大小
//    printf("%d\n",sizeof(a[0]+1));//4//第一行第二个数字的地址
//    printf("%d\n",sizeof(*(a[0]+1)));//4//第一行第二个数字的大小
//    printf("%d\n",sizeof(a+1));//4//第二行的地址
//    printf("%d\n",sizeof(*(a+1)));//16//第二行的大小
//	printf("%d\n",sizeof(&a[0]+1));//4//第二行的地址
//    printf("%d\n",sizeof(*(&a[0]+1)));//16//第二行元素的大小
//    printf("%d\n",sizeof(*a));//16//第一行的大小
//    printf("%d\n",sizeof(a[3]));//16//虽然越界了但是sizeof只是一个关键字他不关心这块空间是否真的存在
//
//	
//	return 0;
//}