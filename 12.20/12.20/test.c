#include<stdio.h>
int main()
{
	int i = 0;
	i = i++;
	printf("%d\n",i);
	return 0;
}

int findMaxConsecutiveOnes(int* nums, int numsSize) {//最大连续1的个数
        int max = 0;
        int nowMax = 0;
        for(int i = 0; i < numsSize; i++){
            if(nums[i] == 1){
                nowMax++;
            }else{
                max = max > nowMax ? max : nowMax;
                nowMax = 0;
            }
        }
        
        return max > nowMax ? max : nowMax;
}