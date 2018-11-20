//#define _CRT_SECURE_NO_WARNINGS 1
//int removeElement(int* nums, int numsSize, int val)//删除数组的重复元素
//{
//	int i = 0;
//	int tmp = 0;
//	for(i = 0; i < numsSize; i++)
//	{
//		if(nums[i] != val)
//		{
//			continue;
//		}
//		if(nums[i] == val)
//		{
//			tmp = nums[i];
//			nums[i] = nums[numsSize-1];
//			nums[numsSize-1] = tmp;
//			if(nums[numsSize-1] == val)
//			{
//				i--;
//			}
//			numsSize--;
//		}
//	}
//	return numsSize;
//}
//
//int removeElement(int* nums, int numsSize, int val)
//{
//	int i = 0;
//	int j = 0;
//	for(j = 0; j < numsSize; j++)
//	{
//		if(nums[j] != val)
//		{
//			nums[i] = nums[j];
//			i++;
//		}
//	}
//	return i;
//}
//
//int removeElement(int* nums, int numsSize, int val)
//{
//	int i = 0;
//	int n = numsSize;
//	while(i < n)
//	{
//		if(nums[i] == val)
//		{
//			nums[i] = nums[n];
//			n--;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return n;
//}
//
//int searchInsert(int* nums, int numsSize, int target)//搜索插入位置
//{
//	int i = 0;
//	int flag = 0;
//	if(nums[numsSize-1] < target)
//	{
//		return numsSize;
//	}
//	if(nums[0] > target)
//	{
//		return 0;
//	}
//	for(i = 0; i < numsSize; i++)
//	{
//		if(nums[i] == target)
//		{			
//			return i;
//		}
//	}
//	flag = 1;
//	if(flag == 1)
//	{
//		for(i = 0; i < numSize; i++)
//		{
//			if(nums[i] > target)
//			{
//				return i;
//			}
//		}
//	}
//}
//
//int searchInsert(int* nums, int numsSize, int target)
//{
//	int i = 0;
//	for(i = 0; i < numsSize; i++)
//	{
//		if(nums[i] >= target)
//		{
//			return i;
//		}
//	}
//	return numsSize;
//}

//[-2,1,-3,4,-1,2,1,-5,4]
//int maxSubArray(int* nums, int numsSize)
//{
//    int i = 0;
//	int j = 0;
//	int k = 0;
//	int sum = 0;
//	int max = 0;	
//	for(i = 0; i < numsSize; i++)
//	{
//		for(int j = i; j < numsSize; j++)
//		{
//			sum = 0;
//			for (int k = i; k <= j; k++)
//			{
//					sum += nms[k];// 计算a[i]到a[j]的和
//			}
//			if(sum > max)
//			{
//				max = sum;
//			}
//		}
//	}	
//	return max;	
//}
//
//	public static int maxSubSum1(int[] a) {
//		int maxSum = 0;
//		int sum;
//		for (int i = 0; i < a.length; i++) {
//			for (int j = i; j < a.length; j++) {
//				sum = 0;
//				for (int k = i; k <= j; k++) {
//					sum += a[k];// 计算a[i]到a[j]的和
//				}
//				if (sum > maxSum) {
//					maxSum = sum;
//				}
//			}
//		}
//		return maxSum;
//	}
//
//}
//int main()
//{
//	int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
//	maxSubArray(arr, 9);
//	printf("%d",maxSubArray(arr, 9));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10];	
//	for(i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//		
//	}
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int lengthOfLastWord(char* s)
{
	char*tmp = s;
	char*tmp2 = s;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int blankcot = 0;
	if(s == NULL)
	{
		return -1;
	}
	if(strlen(s) == 0)
	{
		return 0;
	}
	while(*s != '\0')
	{
		if(*s == ' ')
		{
			blankcot++;
		}
		s++;
	}
	s--;
	if(blankcot == 0)
	{
		while(*tmp != '\0')
		{
			count2++;
			tmp++;
		}
		return count2;
	}
	if(*s == ' '&& blankcot == 1)
	{
		while(*tmp != '\0')
		{
			count2++;
			tmp++;
		}
		return count2 - 1;
	}
	if(*s == ' '&& blankcot >= 2)
	{
		s--;
		while(*s != ' ')
		{
			s--;
		}
		s++;
		while(*s != ' ')
		{
			s++;
			count3++;
		}
		return count3;
	}
	while(*s != ' ')
	{
		count1++;
		s--;
	}
	return count1;
	
	
}
int main()
{
	char arr[] = "hello worlde ";
    lengthOfLastWord(arr);
	printf("%d",lengthOfLastWord(arr));
	return 0;
}






