#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
//int cmp_age(const void* e1,const void* e2)//比较数字
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
int cmp_name(const void* e1,const void* e2)//比较字符
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}//上边的俩个函数是我们作为用户使用来实现的，下面的代码是我们自己实现的模拟库函数
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
void bubble_sort(void* base,int sz, int width, int (*cmp)(const void* e1,const void* e2))//用冒泡排序来模拟实现，因为我们
不知道传过来的数据是什么类似所以用char型指针接受
{
	int i = 0;
	int j = 0;
	for(i = 0; i < sz-i; i++)
	{
		for(j = 0; j < sz-i-1; j++)
		{
			if(cmp((char*)base + j*width,(char*)base + (j+1)*width) > 0)//我们不知道传过来数据的大小，所以将数据都转化
			为char型数据
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
