#include<stdio.h>
#include<windows.h>

int fun(int p)
{
	int tmp;
	if (p == 0 || p == 1)
	{
		return 3;
	}
	tmp = p - fun(p - 2);//9-(7-(5-(3-3)));
	return tmp;
}
int main()
{
	printf("%d\n", fun(9));
	system("pause");
	return 0;
}