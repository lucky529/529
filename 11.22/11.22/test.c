#define _CRT_SECURE_NO_WARNINGS 1
//int** generate(int numRows, int** columnSizes) 
//{
//	int i = 0;
//	int j = 0;
//	int** columnSizes = (int**)malloc(numRows*numRows*(sizeof(int)));
//	for(i = 0; i < numRows; i++)
//	{
//		columnSizes[i][i] = 1;
//		columnSizes[i][0] = 1;
//	}
//	for(i=2; i<numRows; i++)
//	
//		for(j=1; j<=i-1; j++)
//		{
//		
//			columnSizes[i][j]=columnSizes[i-1][j-1]+columnSizes[i-1][j];
//
//		}
//		return * columnSizes;
//}


////[7,1,5,3,6,4]
////Êä³ö: 5
//#include<stdio.h>
//int maxProfit(int* prices, int pricesSize) 
//{
//	int i = 0;
//	int j = 0;
//	int min = prices[0];
//	int max = -1;
//	int flag = -1;
//	int count = -1;
//	for(i = 0; i < pricesSize; i++)
//	{
//		if(prices[i] < min)
//		{
//			min = prices[i];
//			flag = i;
//		}
//	}
//	for(j = flag; j < pricesSize; j++)
//	{
//		if(prices[j] > max)
//		{
//			max = prices[j];
//			count = 1;
//		}
//	}
//	if(1 == count)
//	{
//		return max - min;
//	}
//}
//int main()
//{
//	int arr[6] = {7,1,5,3,6,4};
//	maxProfit(arr,6);
//	return 0;
//}
//
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
//			if((prices[i] - min > max) && (prices[i]>prices[i+1]))
//				max += prices[i] - min;
//			min = prices[i+1];
//		}
//	}
//	return max;
//}
//
//int maxProfit(int* prices, int pricesSize)
//{
//	int max = 0;
//	for(int i = 0; i < pricesSize; i++)
//	{
//		for(int j = i + 1; j < pricesSize;j++)
//		{
//			if(prices[j]-prices[i] > max)
//				max = prices[j]-prices[i];
//		}
//	}
//	return max;
//}

//
//int maxProfit(int* prices, int pricesSize)
//{
//	int max = 0;
//    int profit = 0;
//	for(int i = 0; i < pricesSize; i++)
//	{
//        int maxprofit = 0;
//		for(int j = i + 1; j < pricesSize;j++)
//		{            
//			if(prices[i] < prices[j])
//			profit = maxProfit(prices,i+1) + prices[j] - prices[i];
//            if(profit>maxprofit)
//                maxprofit = profit;
//		}
//        if(maxprofit > max)
//            max = maxprofit;
//	}    
//	return max;
//}
//
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
//	}	
//		while((i < pricesSize-1)&&(prices[i] <= prices[i+1]))
//    { 
//		{
//			i++;
//		}
//		peak = prices[i];
//		max += peak - valley;
//	}
//    return max;
//}
//
//int maxProfit(int* prices, int pricesSize)
//{
//	int max = 0;
//	for(int i = 1; i < pricesSize; i++)
//	{
//		if(prices[i] > prices[i - 1])
//		{
//			max += prices[i] - prices[i - 1]
//		}
//	}
//	return max;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[]="abcd,dc,ba";
//	printf("%d",sizeof(arr));
//	return 0;
//}

//
//bool isPalindrome(char* s) 
//{
//    int left = 0;
//	int right = strlen(s) - 1;
//	while(left < right)
//	{
//		if(! my_check(s[left]))
//		{
//			left++;
//		}
//		else if(!my_check(s[right]))
//		{
//			right--;
//		}
//		else if((s[left] + 32 - 'a')!=(s[right] + 32 - 'a'))
//		{
//			return false;
//		}
//		else
//		{
//			left++;
//			right--;
//		}
//		
//	}
//	int my_check(char &ch)
//	{
//		if (ch >= 'a' && ch <= 'z')
//             return 1;
//         if (ch >= 'A' && ch <= 'Z')
//             return 1;
//         if (ch >= '0' && ch <= '9')
//             return 1;
//         return 0;
//	}
//}

#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d%d",&x,&y);
	if(x > y)
	{
		printf("%d",x);
	}
	else
	{
		printf("%d",y);
	}
	return 0;
}




    int mySqrt(int x) {
        for(int i = 0;;i++)
        {
            if(i * i <= x && (long long)(i + 1) * (long long)(i + 1) > x)
                return i;
        }   

    }