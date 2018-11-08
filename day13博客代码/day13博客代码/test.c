#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void my_check(int arr[],int sz)
//{
//	int i = 0;
//	int j = sz-1;
//	for(i = 0; i<sz; i++)
//	{
//		if((arr[i])%2 !=0 )
//		{
//			continue;
//		}
//		else
//		{
//			int t = arr[i];
//			arr[i] = arr[sz-1];
//			arr[sz-1] = t;	
//			if(arr[j]%2 == 0)
//			{
//				i--;
//			}
//			sz--;
//		}	
//		
//	}
//	
//}
//int main()
//{
//	int i = 0;
//	int arr[7] = {1,3,5,4,8,9,2};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	my_check(arr,sz);	
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
//int check(int arr[3][3],int row,int col,int k)
//{
//	int x = 0;
//	int y = col-1;
//	
//		while(x <= row && y >= 0)
//		{
//			if(arr[x][y] == k)
//			{
//				printf("找到了\n");
//				break;
//			}
//			else if(arr[x][y] > k)
//			{
//				y = y-1;
//			}
//			else
//			{
//				x = x+1;
//			}
//			if ((x>2) || (y<0))
//	        {
//		       printf("找不到了\n");
//	        }
//
//	   }
//}
void check(int arr[3][3],int row,int col,int k)
{
	int x = 0;
	int y = col-1;
	while(x<row && y>=0)
	{
		 if(arr[x][y] == k)
	{
		printf("找到了\n");		
	}
	else if(arr[x][y] > k)
	{
		check(arr,row,col-1,k);
	}
	else
	{
		check(arr,row+1,col,k);
	}   
	}
}
int main()
{
	int k = 5;
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};	
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]); 

	check(arr,row,col,arr1,k);
	return 0;
}