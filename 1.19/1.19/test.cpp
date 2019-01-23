#include<stdio.h>
#include<windows.h>
void my_reverse(char* pb, char* pe)
{
	while (pb < pe)
	{
		char t = *pb;
		*pb = *pe;
		*pe = t;
		pb++;
		pe--;
	}
}
char* reverseWords(char* s) {
	char* start = s;
	char* cur = s;
	while (*cur)
	{
		start = cur;
		while ((*cur != ' ')&& (*cur != '\0'))
		{
			++cur;
		}
		my_reverse(start, cur - 1);
		if (*cur == ' ')
		{
			++cur;
		}
	}
	return s;
}

int main()
{
	char arr[] = "hello world";
	reverseWords(arr);
	system("pause");
	return 0;
}