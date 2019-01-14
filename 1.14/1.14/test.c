#include<stdio.h>
#include<windows.h>
//#define offsetof(s,m) (size_t)&(((s *)0)->m)

struct S1
{
	int a;
	int b;
	short c;
};
struct S2
{
	int m;
	char n;
	struct S1 s1;
};
int main()
{
	printf("%d\n", sizeof(struct S2));
	system("pause");
	return 0;
}