#include<stdio.h>
#include<windows.h>

#define CASE break;case
int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("file:%s line:%d date:%s i=%d\n", __FILE__,__LINE__,__DATE__,i);
	}
	//printf("%d", __STDC__);//VSÎ´Ö§³Östdc
	system("pause");
	return 0;
}