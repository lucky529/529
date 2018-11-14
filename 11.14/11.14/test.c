#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void reverse(char* arr)
//{
//	char temp = *arr;
//	while(*(arr + 1))
//	{
//		*arr = *(arr + 1);
//		arr++;
//		*arr = temp;
//	}
//}
//int reverse1(char* arr1, char* arr2,int sz)
//{
//	while(sz--)//你要从哪里开始旋转
//	{
//		reverse(arr1, sz);
//		if(!strcmp(arr1, arr2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int sz = strlen(arr1);	
//	reverse1(arr1,arr2,sz);
//	printf("%d",reverse1(arr1,arr2,sz));
//	return 0;
//
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[5] = "bcda";	
//	strncat(arr1, arr1, 4);
//	strstr(arr1,arr2);
//	printf("%s",strstr(arr1,arr2));	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//	int ret = 0;
//	int pos = 0;
//	int x = 0,y = 0;
//	int arr[] = {1,1,2,2,4,4,8,9};
//	for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		ret ^= arr[i];
//	}
//	for(i = 0; i < 32; i++)
//	{
//		if((ret>>i) & 1)
//			pos = i;
//		break;
//	}
//	for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		if((arr[i]>>pos)&1 == 1)
//		{
//			x ^= arr[i];
//		}
//		else
//		{
//			y ^= arr[i];
//		}
//	}
//	printf("%d %d",x,y);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int total = 0;
//	int cash = 20;
//	int empty = cash;	
//	while(empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	total = total + cash;
//	printf("%d",total);
//	return 0;
//}

//#include<stdio.h>
//
//#include<assert.h>
//
//char* my_strncpy(char* dest,const char* src,int count)
//
//{
//
//	char* ret = dest;	
//
//	assert(src != NULL);
//
//	while(count--)//count来控制循环次数
//
//	{
//
//		*dest++ = *src++;		
//
//	}
//
//	*dest = '\0';//当赋值结束时应当让目标字符串以‘\0’结束
//
//	return ret;
//
//}
//
//int main()
//
//{
//
//	int input = 0;
//
//	char arr1[20] = "abcdef";
//
//	char *arr2 = "abc";
//
//	printf("请输入你想拷贝几个字符\n");
//
//	scanf("%d",&input);
//
//	my_strncpy(arr1, arr2, input);
//
//    printf("%s\n",arr1);
//
//	return 0;
//
//}
//
//
//
//#include<stdio.h>
//
//char* my_strncat(char* dest,const char* src,int count)
//
//{
//
//	
//
//	char* ret = dest;//保存dest的起始位置
//
//	if(count < 0)
//
//		return NULL;//判断假如count输入为负数时
//
//	assert(src != NULL);
//
//	while(*dest != '\0')
//
//	{
//
//		dest++;
//
//	}
//
//	while(count--)
//
//	{
//
//		*dest++ = *src++;		
//
//	}
//
//	*dest = '\0';//当赋值结束时应当让目标字符串以‘\0’结束
//
//	return ret;
//
//}
//
//int main()
//
//{
//
//	int input = 0;
//
//	char arr1[10] = "aaa";
//
//	char *arr2 = "abc";
//
//	printf("请输入你想连接几个字符\n");
//
//	scanf("%d",&input);
//
//	my_strncat(arr1, arr2, input);
//
//    printf("%s\n",arr1);
//
//	return 0;
//
//}
//
//
//
//
//
//#include<stdio.h>
//
//int my_strncmp(const char* dest,const char* src,int count)
//
//{
//
//	assert(dest != NULL);
//
//	assert(src != NULL);
//
//	while((*dest == *src) && --count)//必须同时满足俩个条件时才满足
//
//	{
//
//		if(*dest == '\0')//如果*dest为0，说明*src已经结束返回0
//
//			return 0;
//
//		dest++;
//
//		src++;
//
//	}
//
//	return *src-*dest;//直接返回比较结果数字
//
//
//}
//
//#include<stdio.h>
//
//#include<assert.h>
//
//char* my_strcpy(char* dest,const char* src)
//
//{
//
//	char* temp = dest;
//
//	assert(src != NULL);
//
//	while(*dest++ = *src++)
//
//	{
//
//		;
//
//	}
//
//	return temp;
//
//}
//
//int main()
//
//{
//
//	char arr[20] = {0};
//
//	char *p = "abcdef";
//
//	my_strcpy(arr, p);
//
//	printf("%s",arr);
//
//	return 0;
//
//}
//
//
//
//#include<stdio.h>
//
//#include<assert.h>
//
//char* my_strcat(char* arr,const char* src)
//
//{
//
//	char* temp = arr;
//
//	assert(src != NULL);
//
//	while(*arr != '\0')
//
//	{
//
//		arr++;
//
//	}
//
//	while(*arr++ = *src++)
//
//	{
//
//		;
//
//	}
//
//	return temp;
//
//}
//
//int main()
//
//{
//
//	char arr[20] = "abc";
//
//	char* p = "abcdef";
//
//	my_strcat(arr,p);
//
//	printf("%s",arr);
//
//	return 0;
//
//}
//
//
//
//#include<stdio.h>
//
//#include<assert.h>
//
//char* my_strstr(const char* dest,const char* src)//函数返回找到目标开始匹配且成功的起始位置
//
//{
//
//	const char* s1 = dest;//定义s1让dest备份
//
//	const char* s2 = src;
//
//	const char* ptr = dest;
//
//	assert(src != NULL);
//
//
//
//	while(*ptr)//ptr++寻找开始匹配的位置
//
//	{
//
//		s1 = ptr;//记住开始匹配的位置
//
//		s2 = src;//记住子字符串开始的位置
//
//		while(*s1 && *s2 && *s1 == *s2)//有一个条件为假结束
//
//		{
//
//			s1++;
//
//			s2++;
//
//		}
//
//		if(*s2 == '\0')//当s2说明匹配成功 返回目标字符串的开始位置
//
//			return (char*)ptr;
//
//		ptr++;//假设开始匹配却未匹配成功*ptr没有成为'\0'时，ptr加加开始下一轮查找
//
//	}
//
//	return NULL;//没有找到时返回空指针
//
//
//
//}
//
//int main()
//
//{
//
//	char* arr1 = "abbbcef";
//
//	char* arr2 = "bce";
//
//	my_strstr(arr1,arr2);
//
//	printf("%s",my_strstr(arr1,arr2));
//
//	return 0;
//
//}
//
//
//
//#include<stdio.h>
//
//#include<assert.h>
//
//int my_strcmp(const char* dest,const char* src)
//
//{
//
//	assert(dest != NULL);//判断传过来的指针是不是为空
//
//	assert(src != NULL);
//
//	while(*dest == *src)//当src为'\0'时结束，但他的值赋给了dest,
//
//		//所以在循环内部返回0；然后跳出循环
//
//	{
//
//		if(*dest == '\0')
//
//		{
//
//			return 0;
//
//		}
//
//		dest++;src++;
//
//	}
//
//	if(*dest > *src)//不要把判断写在if之后，因为当dest为0时程序没有机会来到最后
//
//	{
//
//		return -1;
//
//	}
//
//	else
//
//	{
//
//		return 1;
//
//	}
//
//}
//
//int main()
//
//{
//
//	char* arr1 = "abc";//测试三种情况保证程序的正确性
//
//	char* arr2 = "abc";
//
//	my_strcmp(arr1,arr2);
//
//	printf("%d",my_strcmp(arr1,arr2));
//
//	return 0;
//
//}
//
//
//
//
//
//#include<stdio.h>
//
//#include<assert.h>
//
//void* my_memcpy(void* dest,const void* src,int count)
//
//{
//
//	void* temp = dest;
//
//	assert(dest != NULL);
//
//	assert(src != NULL);
//
//	while(count--)
//
//	{
//
//		if(src < dest)//不判断指针的大小即是memcpy,判断指针大小函数便成为了memmove函数。
//
//		*((char*)dest+1) = *((char*)src+1);
//
//		//((char*)dest)++;
//
//		//((char*)src)++;
//
//		else
//
//		{
//
//			*((char*)dest+count) = *((char*)src+count);
//
//		}
//
//	}
//
//	return temp;
//
//}
//
//int main()
//
//{
//
//	int i = 0;
//
//	int arr1[] = {1,2,3,4,5,6};
//
//	int arr2[20] = {1,2,3,4,5,6,7,8,9,10};
//
//    my_memcpy(arr2+2, arr1, 12);//向目标字符串拷贝12个字节
//
//    for(i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
//
//	{
//
//		printf("%d ",arr2[i]);
//
//	}
//
//	return 0;
//
//}
//
//
//
//#include<stdio.h>
//
//#include<assert.h>
//
//char* my_strchr(const char* dest,const char* src)
//
//{	
//
//	while(*dest)
//
//	{	
//
//		if(*dest == *src)
//
//			return dest;
//
//		dest++;
//
//	}
//
//	return NULL;
//
//	
//
//}
//
//int main()
//
//{
//
//	char* arr1 = "abbbcef";
//
//	char* arr2 = "b";
//
//	my_strchr(arr1,arr2);
//
//	printf("%s",my_strchr(arr1,arr2));
//
//	return 0;
//
//}

#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
//int cmp_age(const void* e1,const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
int cmp_name(const void* e1,const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void Swap(char*e1,char* e2, int width)
{
	int i = 0;
	for(i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
void bubble_sort(void* base,int sz, int width, int (*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	int j = 0;
	for(i = 0; i < sz-i; i++)
	{
		for(j = 0; j < sz-i-1; j++)
		{
			if(cmp((char*)base + j*width,(char*)base + (j+1)*width) > 0)
			{
				Swap((char*)base + j*width,(char*)base + (j+1)*width, width);
			}
		}
	}
}
int main()
{
	struct Stu s[3] = {{"zhangsan",20},{"lisi",30},{"wangwu",15}};
	int sz = sizeof(s)/sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_name);
	return 0;
}