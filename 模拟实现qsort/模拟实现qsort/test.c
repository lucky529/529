#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
//int cmp_age(const void* e1,const void* e2)//�Ƚ�����
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
int cmp_name(const void* e1,const void* e2)//�Ƚ��ַ�
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}//�ϱߵ�����������������Ϊ�û�ʹ����ʵ�ֵģ�����Ĵ����������Լ�ʵ�ֵ�ģ��⺯��
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
void bubble_sort(void* base,int sz, int width, int (*cmp)(const void* e1,const void* e2))//��ð��������ģ��ʵ�֣���Ϊ����
��֪����������������ʲô����������char��ָ�����
{
	int i = 0;
	int j = 0;
	for(i = 0; i < sz-i; i++)
	{
		for(j = 0; j < sz-i-1; j++)
		{
			if(cmp((char*)base + j*width,(char*)base + (j+1)*width) > 0)//���ǲ�֪�����������ݵĴ�С�����Խ����ݶ�ת��
			Ϊchar������
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
