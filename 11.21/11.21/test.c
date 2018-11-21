#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//public class Solution {
//    public int lengthOfLastWord(String s) {
//        int length = 0;
//		int i = s.length()-1;
//		while(i>=0&&s.charAt(i)==' ')
//			i--;
//        while(i>=0&&s.charAt(i)!=' '){
//        	length++;
//        	i--;
//        }
//        return length;
//    }
//}

int lengthOfLastWord(char* s)
{
	int len = 0;
	int i = strlen(s) - 1;
	while(i > 0 && s[i] == ' ')
	{
		i--;
	}
	while(i >= 0 && s[i] != ' ')
	{
		len++;
		i--;
	}
	return len;
}
int main()
{
	char arr[] = "world  ";
	lengthOfLastWord(arr);
	printf("%d",lengthOfLastWord(arr));
	return 0;
}

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    if(digits ==NULL ) return NULL;
    returnSize = (int *)malloc(sizeof(int) * (digitsSize));
    returnSize[0] = 0;
    // judge  all 9
    int all=1;
    for(int i=0;i<digitsSize;i++){
        if(digits[i] != 9){
            all=0;
            break;
        }
    }
    if(all == 0){
        //非全 9的情况，不需要进位
        
        for(int i=digitsSize-1; i>= 0;i--){
            //倒序处理
            digits[i] += 1;
            if( digits[i]<10) break;
            else if(digits[i]>=10){
                digits[i] -= 10;
                continue;
            }
        }
        for(int i=0;i<digitsSize;i++){
            returnSize[i] = digits[i];
            printf("%d,",returnSize[i]);
        }
        return returnSize;
    }
    else if(all == 1){
        //需要进位的情况
        returnSize = (int *)realloc(returnSize, sizeof(int)* (digitsSize+1));
        returnSize[0] = 1;
        for(int i=1;i<=digitsSize ;i++)
            returnSize[i] = 0;
        return returnSize;
    }
    else
        return NULL;
}


int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
	if(digits == NULL) return NULL;
	returnSize = (int*)malloc(sizeof(int)*(digitsSize));
	int flag = 1;
	for(int i = 0; i < digitsSize; i++)
	{
		if(digits[i] != 9)
		{
			flag = 0;
			break;
		}
	if(flag == 0)
	{
		for(i = digitsSize-1; i >= 0;i--)
		{
			digits[i] += 1;
			if(digits[i] < 10)
			{				
				break;
			}
			else(digits[i] >= 10)
			{
				digits[i] -= 10;
				continue;
			}
		}
		for(int i = 0; i < digitsSize; i++ )
		{
			returnSize[i] = digits[i];
		}
		return returnSize;
	}
	if(flag == 1)
	{
		returnSize = (int*)malloc(sizeof(int) * (digitsSize + 1));
		returnSize[0] = 1;
		for(int i = 1; i <= digitsSize; i++)
			returnSize[i] = digits[i];
		return returnSiz;

		
	}	
	return NULL;
}

	int* plusOne(int* digits, int digitsSize, int* returnSize) { 
	int *r = (int *)malloc(sizeof(int)*(digitsSize + 1)); //多分配一位内存，防止最位  进位溢出
	*returnSize = digitsSize;         //假设没有最高位进位，则返回结果的长度与原数组相同
	r[0] = 0;                         //多分配了一位内存，先占位
	
	int count = digitsSize;      //计数
	int temp; //进位变量
	if (digitsSize == 1)     //如果原数组只有一个值，单独处理
	{
		if (digits[0] == 9)    //一位还会产生进位，直接赋值，并将*returnSize + 1
		{
			r[0] = 1;
			r[1] = 0;
			*returnSize += 1;
		}
		else     //否则直接加一，程序结束
			r[0] = digits[0] + 1;
	}
	else    //有多位，模仿竖式计算
	{
		for (int i = digitsSize - 1; i >= 0; i--)        //从数组下标的高位开始处理，实际是处理数字的低位
		{
			if (digits[i] + 1 == 10 && i == digitsSize - 1)     //先看数字最低位是否产生进位，产生进位，则结果最低位为0
			{
				r[count - 1] = 0;
				temp = 1;            //temp记1代表下一位增 1
			}
			else if (digits[i] + 1 != 10 && i == digitsSize - 1)    //最低位没进位，直接加 1
			{
				r[count - 1] = digits[i] + 1;
				temp = 0;
			}
			else if (digits[i] + temp == 10)           //看除最低位是否产生进位
			{
				r[count - 1] = 0;
				temp = 1;
			}
			else
			{
				r[count - 1] = digits[i] + temp;
				temp = 0;
			}
			count--;          //往高位移动
		}
 
		if (digits[0] == 9 && (digits[1] + temp) == 10)      //在这种情况下，会在最高位产生一个进位
		{
			r[0] = 1;
			*returnSize += 1;
		}
 
 
		if (r[0] == 0)    //没有产生额外进位，处理掉多占的一位，并缩短结果数组的长度  
		{
			*returnSize -= 1;
			for (int i = 0; i<*returnSize - 1; i++)
				r[i] = r[i + 1];
		}
	}
 
 
	return r;
}

	public static int[] Method1(int[] nums)
        {
            if (nums.Length == 0) return nums;
            for (int i = nums.Length - 1; i >= 0; i--)
            {
                if (nums[i] < 9)//位置上的数字小于9不需要进位
                {
                    nums[i]++;
                    return nums;//加一之后返回数组。位置上小于9就返回
                }
                nums[i] = 0;//位置上是9的数字需要进行进位，把自己的位置置成
            }
            int[] newNums = new int[nums.Length + 1];
			newNums[0] = 1;}
