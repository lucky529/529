#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int ret = 0;
	char arr1[] = "hello";
	char arr2[] = "world";
	ret = strcmp(arr1,arr2);
	printf("%d",ret);
	return 0;
}