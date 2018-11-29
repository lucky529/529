#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0,j = 0,max = 0,row = 0, col = 0;
	int arr[3][4] = {0};
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(arr[i][j] > max)
			{
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}
	printf("max=%d,row=%d,col=%d",max,row+1,col+1);
	return 0;
}