#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[]={1,2,3,4};
//	printf("%d ",sizeof(a));//16//����������Ĵ�С
//	printf("%d ",sizeof(a+0));//4//�ȼ���a[0]
//	printf("%d ",sizeof(*a));//4//��Ԫ�ص�ַ������
//	printf("%d ",sizeof(a+1));//4//ָ��
//	printf("%d ",sizeof(a[1]));//4//�ڶ���Ԫ��
//	printf("%d ",sizeof(&a));//4//����ĵ�ַҲ��ָ��
//	printf("%d ",sizeof(*&a));//16//����ĵ�ַ������
//	printf("%d ",sizeof(&a+1));//4//ָ��
//	printf("%d ",sizeof(&a[0]));//4//ָ��
//	printf("%d ",sizeof(&a[0]+1));//4//ָ��
//
//
//	char arr[] = {'a','b','c','d','e','f'};//δ��������Ĵ�С
//    printf("%d\n", sizeof(arr));//6//������6���ַ�
//    printf("%d\n", sizeof(arr+0));//4//ָ��
//    printf("%d\n", sizeof(*arr));//1//�����õ�һ��Ԫ�صĴ�С
//    printf("%d\n", sizeof(arr[1]));//1
//    printf("%d\n", sizeof(&arr));//4//����ĵ�ַ//	printf("%d\n",sizeof(&arr+1));//4//����һ�������Ԫ��
//	printf("%d\n", sizeof(&arr[0]+1));//4//����ڶ���Ԫ�صĵ�ַ
//
//    printf("%d\n", strlen(arr));//x//��֪��\0��λ��������
//    printf("%d\n", strlen(arr+0));//x//ͬ��
//    printf("%d\n", strlen(*arr));//err//strlen��Ҫ����ȥ���ǵ�ַ
//    printf("%d\n", strlen(arr[1]));//err
//    printf("%d\n", strlen(&arr));//x//ͬ��֪��\0��λ��
//    printf("%d\n", strlen(&arr+1));//x-5//������һ�����鵫�ǲ�֪��\0��λ��
//    printf("%d\n", strlen(&arr[0]+1));//x-1//ͬ��//////	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7//�ַ������������\0�ĳ���
//    printf("%d\n", sizeof(arr+0));//4//ָ��
//    printf("%d\n", sizeof(*arr));//1//��һ���ַ��Ĵ�С
//    printf("%d\n", sizeof(arr[1]));//1//ͬ��
//    printf("%d\n", sizeof(&arr));//4//��Ԫ�ص�ַ
//    printf("%d\n", sizeof(&arr+1));//4
//    printf("%d\n", sizeof(&arr[0]+1));//4
//
//    printf("%d\n", strlen(arr));//6//��\0ͣ��
//    printf("%d\n", strlen(arr+0));//6//ͬ��
//    printf("%d\n", strlen(*arr));//err//��Ҫ����ȥ��ַ
//    printf("%d\n", strlen(arr[1]));//err
//    printf("%d\n", strlen(&arr));//6//��Ԫ�ص�ַ
//	printf("%d\n", strlen(&arr+1));//x//�������������
//	printf("%d\n", strlen(&arr[0]+1));//5//�ӵڶ�����ʼ��////	char *p = "abcdef";
//    printf("%d\n", sizeof(p));//4//���ַ���ַ
//    printf("%d\n", sizeof(p+1));//4//�ڶ����ַ��ĵ�ַ
//    printf("%d\n", sizeof(*p));//1//��һ���ַ���ʵ�ʴ�С
//    printf("%d\n", sizeof(p[0]));//1//ͬ��
//    printf("%d\n", sizeof(&p));//4//����ָ��
//    printf("%d\n", sizeof(&p+1));//4
//    printf("%d\n", sizeof(&p[0]+1));//4////	printf("%d\n", strlen(p));//6//������ַ����ĳ���
//    printf("%d\n", strlen(p+1));//5
//    //printf("%d\n", strlen(*p));//err
//    //printf("%d\n", strlen(p[0]));//err
//    printf("%d\n", strlen(&p));//x//����ָ���\0��ȷ��
//    printf("%d\n", strlen(&p+1));//y
//    printf("%d\n", strlen(&p[0]+1));//5//�ӵڶ����ַ���ʼ��////	int a[3][4] = {0};//	printf("&d\n",sizeof(a));//48//�������λ����Ĵ�С//	printf("%d\n",sizeof(a[0][0]));//4//��һ�����ֵĴ�С
//    printf("%d\n",sizeof(a[0]));//16//��һ�е�����Ĵ�С
//    printf("%d\n",sizeof(a[0]+1));//4//��һ�еڶ������ֵĵ�ַ
//    printf("%d\n",sizeof(*(a[0]+1)));//4//��һ�еڶ������ֵĴ�С
//    printf("%d\n",sizeof(a+1));//4//�ڶ��еĵ�ַ
//    printf("%d\n",sizeof(*(a+1)));//16//�ڶ��еĴ�С
//	printf("%d\n",sizeof(&a[0]+1));//4//�ڶ��еĵ�ַ
//    printf("%d\n",sizeof(*(&a[0]+1)));//16//�ڶ���Ԫ�صĴ�С
//    printf("%d\n",sizeof(*a));//16//��һ�еĴ�С
//    printf("%d\n",sizeof(a[3]));//16//��ȻԽ���˵���sizeofֻ��һ���ؼ��������������ռ��Ƿ���Ĵ���
//
//	
//	return 0;
//}