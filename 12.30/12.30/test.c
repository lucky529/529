#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++; end--;
	}
}
void convertToBase7(int num) {//实现10进制数转换7进制数
	if (num == 0) return "0";
	char arr[10] = "0123456";
	static char arr1[100] = "";
	int i = 0, len = 0;
	int flag = 0;
	if (num < 0)
	{
		num = -num;
		flag = 1;
	}
	while (num > 0)
	{
		int tmp = num % 7;
		arr1[i++] = arr[tmp];
		num = num / 7;
	}
	if (flag)
	{
		arr1[i++] = '-';
	}
	arr1[i] = '\0';
	len = strlen(arr1);	
	reverse(arr1, arr1 + len - 1);
	return arr1;
}
int main()
{
	convertToBase7(-100);

	system("pause");
	return 0;
}

int findMaxConsecutiveOnes(int* nums, int numsSize) {//最长二进制序列
	int max = 0;
	int nowMax = 0;
	for (int i = 0; i < numsSize; i++){
		if (nums[i] == 1){
			nowMax++;
		}
		else{
			max = max > nowMax ? max : nowMax;
			nowMax = 0;
		}
	}

	return max > nowMax ? max : nowMax;
}

int max(int a, int b)
{
	return a > b ? a : b;
}
int binaryGap(int N) {//二进制间接
	int arr[32] = { 0 };
	int i = 0;
	for (int j = 0; j < 32; j++)
	{
		if (((N >> j) & 1) == 1)
		{
			arr[i++] = j;
		}
	}
	int ans = 0;
	for (int k = 0; k < i - 1; k++)
	{
		ans = max(ans, arr[k + 1] - arr[k]);
	}

	return ans;
}

int max(int a, int b)
{
	return a > b ? a : b;
}
int binaryGap(int N) {//二进制间距一次遍历
	int last = -1;
	int ans = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((N >> i) & 1 > 0)
		{
			if (last >= 0)
			{
				ans = max(ans, i - last);
			}
			last = i;
		}
	}
	return ans;
}