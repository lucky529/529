#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int sum = 2;
//	int m = 3;
//	if(sum/count > m)
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	char c;
//	for(i = 0; i < 5; i++)
//	{
//		scanf("%d", &c);
//		printf("%d ",i);
//	}
//	return 0;
//}

//#include<stdio.h>
//union Un
//{
//	int i;
//	char c;
//};
//union Un n;
//int main()
//{
//	n.i = 0x11223344;
//	n.c = 0x55;
//	printf("%x",n.i);
//	return 0;
//}

//void g(char* p)
//{
//	p = (char*)malloc(1000);
//}
//void test2()
//{
//	char* str = NULL;
//	g(str);
//	strcpy(str,"hello world");
//	printf("%s",str);
//
//}
//char *GetMemory(void)
//{
// static char p[] = "hello world";
// return p;
//}
//void Test(void)
//{
// char *str = NULL;
// str = GetMemory();
// printf("%s",str);
//}//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>//void GetMemory2(char **p, int num)
//{
// *p = (char *)malloc(num);
//}
//void Test()
//{
// char *str = NULL;
// GetMemory2(&str, 100);
// strcpy(str, "hello");
// printf("%s",str);
//}
//void main()
//{
//	Test();
//}
 
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
// } 
// 
//void Test(void)
//{ 
//	char *str = NULL;
//	GetMemory(&str, 100); 
//	strcpy(str, "hello\n"); 
//	printf(str); 
//	free(str); 
//} 

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str,"hello");
//	free(str);
//	if(str != NULL)
//	{
//		strcpy(str, "hello");
//		printf(str);
//	}
//}
//void main()
//{
//	Test();
}
I             1
V             5
X             10
L             50
C             100
D             500
M             1000



I ���Է��� V (5) �� X (10) ����ߣ�����ʾ 4 �� 9��
X ���Է��� L (50) �� C (100) ����ߣ�����ʾ 40 �� 90�� 
C ���Է��� D (500) �� M (1000) ����ߣ�����ʾ 400 �� 900��
#define nI 1
#define nV 5
#define nX 10
#define nL 50
#define nC 100
#define nD 500
#define nM 1000
#include<stdio.h>
int romanToInt(char* s)
{
	int num = 0;
	int flag = 0;
	while(*s != NULL)
	{
		if(*s == 'I' && (*(s + 1 ) == 'V'|| *(s + 1) == 'X' ))
		{
			flag = 1;
			switch(*(s + 1))
			{
			case'V':num += (nV - nI);s += 2;break;
			case'X':num += (nX - nI);s += 2;break;
			}
		}
		if(*s == 'X' && (*(s + 1 ) == 'L'|| *(s + 1) == 'C' ))
		{
			flag = 1;
			switch(*(s + 1))
			{
			case'L':num += (nL - nX);s += 2;break;
			case'C':num += (nC - nX);s += 2;break;
			}

		}
		if(*s == 'C' && (*(s + 1 ) == 'D'|| *(s + 1) == 'M' ))
		{
			flag = 1;
			switch(*(s + 1))
			{
			case'D':num += (nD - nC);s += 2;break;
			case'M':num += (nM - nC);s += 2;break;
			}
		}
		if(0 == flag)
		{
			switch(*s)
			{
				case'I':num += nI;s += 1;break;
				case'V':num += nV;s += 1;break;
				case'X':num += nX;s += 1;break;
				case'L':num += nL;s += 1;break;
				case'C':num += nC;s += 1;break;
				case'D':num += nD;s += 1;break;
				case'M':num += nM;s += 1;break;			
			}
		}
		flag = 0;
	}
	return num;
}
int main()
{
	char arr[10] = {0};
	printf("������һ����������\n");
	scanf("%s",&arr);
	romanToInt(arr);
	printf("%d",romanToInt(arr));
	return 0;
}