#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) 
//{
//    int* ans = (int*)malloc(sizeof(int)*numbersSize);    
//	for(int i = 0; i < numbersSize; i++)
//	{
//		for(int j = i; j < numbersSize; j++)
//		{
//			if(numbers[i] + numbers[j] == target && i != j)
//			{
//				ans[0] = i + 1;
//				ans[1] = j + 1;
//			}
//		}
//	}
//    *returnSize = 2;
//	return ans;
//}
//int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
//{
//	int* ans = (int*)malloc(sizeof(int)*2);
//	int start = 0;
//	int end = numbersSize - 1;
//	while(start < end)
//	{
//		if(numbers[start] + numbers[end] > target)
//		{
//			end--;
//		}
//		else if(numbers[start] + numbers[end] < target)
//		{
//			start++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	ans[0] = start + 1;
//	ans[1] = end + 1;
//	*returnSize = 2;
//	return ans;
//}
//int main()
//{
//	int i = 0;
//	int arr[4] = {2, 7, 11, 15};
//	int*p = NULL;
//    twoSum(arr,4,9,p);
//	for(i = 0; i < 2; i++)
//	{
//		printf("%d",*(twoSum(arr,4,18,p)+i));
//	}
//	return 0;
//}

//int main()
//{
//	int n = ;
//	char ch = '@'+ n;
//	printf("%c",ch);
//	return 0;
//}

//int majorityElement(int* nums, int numsSize) 
//{
//    for(int i = 0; i < numsSize; i++)
//	{
//		int count = 0;
//		for(int j = 0; j < numsSize; j++)
//		{
//			if(nums[i] == nums[j])
//			{
//				count++;
//				if(count > (numsSize/2))
//				{
//					return nums[i];
//				}
//			}
//		}
//	}
//    return 0;
//}

//int cmp_age(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int majorityElement(int* nums, int numsSize)
//{
//	int n = 0;
//	qsort(nums,numsSize,sizeof(int),cmp_age);
//	n = nums[numsSize/2];
//	return n;	
//}

//int majorityElement(int* nums, int numsSize)
//{
//	int count = 0;
//	int ret = 0;
//	for(int x = 0; x < numsSize; x++)
//	{
//		if(count == 0)
//		{
//			ret = nums[x];
//			count = 1;
//		}
//		else if(ret == nums[x])
//		{
//			count++;
//		}
//		else
//		{
//			count--;
//		}
//	}
//	return nums[x];
//}

//int trailingZeroes(int n) 
//{
//	int count = 0;
//	long long ret = 1;
//	for(int i = 1; i < n; i++)
//	{
//		ret = ret * i;
//	}
//	while(ret/10)
//	{
//		if((ret/10)%10 == 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}

int main()
{
	int sum = 1;
	int i = 0;
	for(i = 1; i <= 10;i++)
	{
		sum = sum * i;
	}
	printf("%d",sum);
	return 0;
}

