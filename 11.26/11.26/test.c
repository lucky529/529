#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//char* convertToTitle(int n)
//{
//	int end = 0,len ,start = 0;
//	int i = 0,j = 0,tmp = 0;	
//	static char ans[50] = {0};
//	char num[26] = {0};	
//	for(j = 0; j < 26; j++)
//	{
//		num[j] = j + 'A';
//	}
//	while(n > 0)
//	{
//		tmp = (n - 1) % 26;
//		ans[i++] = num[tmp];
//		n = (n - 1)/ 26;
//	}
//	ans[i] = '\0';
//	len = strlen(ans);
//	end = len - 1;
//	start = 0;
//	while(start < end)
//	{
//		char tmp2 = ans[end];
//		ans[end] = ans[start];
//		ans[start] = tmp2;
//		start++; end--;
//	}
//	return ans;
//}
//int main()
//{
//	convertToTitle(100);
//	return 0;
//}

//[1,2,3,4,5,6,7] ºÍ k = 3

//void rotate(int* nums, int numsSize, int k) 
//{
//	int i = 0, tmp = 0;
//	while(k--)
//	{
//		tmp = nums[numsSize - 1];
//	    for(i = numsSize - 1; i > 0; i--)
//	    {
//		    nums[i] = nums[i - 1];
//	    }
//	    nums[0] = tmp;
//	}
//}
//void reverse(int* nums,int e1, int e2)
//{
//	while(e1 < e2)
//	{
//		int tmp1 = nums[e1];
//		nums[e1] = nums[e2];
//		nums[e2] = tmp1;
//		e1++;e2--;
//	}
//}
//void rotate(int* nums, int numsSize, int k)
//{
//    k = k % numsSize;
//	reverse(nums,0,numsSize - 1);
//	reverse(nums,0,k - 1);
//	reverse(nums,k,numsSize - 1);
//}
//
//uint32_t reverseBits(uint32_t n) 
//{
//    int value = 0;
//	int pos = 0;
//	int i = 0;	
//	for(i = 0; i < 32; i++)
//	{
//		value = value << 1;
//		pos =(n >> i)& 1;
//		value = pos ^ value;
//	}	
//}

//uint32_t reverseBits(uint32_t n)
//{
//	int pos = 0,i = 0,sum = 0;
//	for(i = 0; i < 32; i++)
//	{
//		pos = (n >> i)&1;
//		sum += pos * pow(2,31 - i);
//	}
//	return sum;
//}

//int hammingWeight(uint32_t n)
//{
//    int i = 0,count = 0;
//	for(i = 0; i < 32; i++)
//	{
//		pos = (n >> i) & 1;
//		if(pos == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int hammingWeight(uint32_t n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}

//int maxProfit(int* prices, int pricesSize)
//{
//	int max = 0;
//	for(int i = 0; i < pricesSize; i++)
//	{
//		for(int j = i + 1; j < pricesSize; j++)
//		{
//			int tmp = prices[j] - prices[i];
//			if(tmp > max)
//			{
//				max = tmp;
//			}
//		}
//	}
//	return max;
//}
//int maxProfit(int* prices, int pricesSize)
//{
//	int min = prices[0];
//	int max = 0;
//	for(int i = 0; i < pricesSize; i++)
//	{
//		if(prices[i] < min)
//		{
//			min = prices[i];
//		}
//		else
//		{
//			if(prices[i] - min > max)
//				max = prices[i] - min;
//		}
//	}
//	return max;
//}

//int maxProfit(int* prices, int pricesSize)
//{
//	int valley = prices[0];
//	int peak = prices[0];
//	int max = 0;
//	int i = 0;
//	while( i < pricesSize-1)
//	{
//		while((i < pricesSize-1)&&(prices[i] >= prices[i+1]))
//		{
//			i++;
//		}
//		valley = prices[i];		
//		while((i < pricesSize-1)&&(prices[i] <= prices[i+1]))     
//		{
//			i++;
//		}
//		peak = prices[i];
//		max += peak - valley;
//	}
//    return max;
//}
//char* my_strstr(const char* dest,const char* src)
//{
//	const char s1 = src;
//	const char s2 = dest;
//	const char ptr = src;
//	assert(src);assrt(dest);
//	while(*ptr)
//	{
//		s1 = dest;
//		s2 = src;
//		while(*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//		{
//			return (char*)ptr;
//		}
//		ptr++;
//	}
//	return NULL;
//}
#include<assert.h>
#include<stdio.h>
void* my_memcpy(void* dest,const void* src,int count)

{

	void* temp = dest;

	assert(dest != NULL);

	assert(src != NULL);

	while(count--)

	{

		if(src > dest)	

		{
			*((char*)dest) = *((char*)src);
			((char*)dest)++;
			((char*)src)++;
		}

		else

		{

			*((char*)dest+count) = *((char*)src+count);

		}

	}

	return temp;

}
int main()
{
	int arr[7] = {1,2,3,4,5,6,7};
	int arr2[10] = {0};
	my_memcpy(arr2,arr,12);
	return 0;
}
