#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun()
{
	static int a = 1;
	return ++a;
}
int main()
{
	int sum = 0;
	sum = fun()-fun()*fun();
	printf("%d",sum);
	return 0;
}

