#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//µ›πÈ–¥∑®
int sreach_k(int arr[3][3], int row, int col,int k,int x, int y,int *px,int *py)
{
	if(x<0 || y>=col)
	{
		*px = -1;
		*py = -1;
		return 0;
	}
	if(arr[x][y] == k)
	{
		*px = x;
		*py = y;
		return 1;
	}
	else if(arr[x][y] < k)
	{
		sreach_k(arr,3,3,k,x,y+1,px,py);
	}
	else if(arr[x][y] > k)
	{
		sreach_k(arr,3,3,k,x-1,y,px,py);
	}

}
int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int px;
	int py;
	sreach_k(arr,3,3,8,2,0,&px,&py);
	printf("%d %d",px,py);
	return 0;
}