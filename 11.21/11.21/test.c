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
        //��ȫ 9�����������Ҫ��λ
        
        for(int i=digitsSize-1; i>= 0;i--){
            //������
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
        //��Ҫ��λ�����
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
	int *r = (int *)malloc(sizeof(int)*(digitsSize + 1)); //�����һλ�ڴ棬��ֹ��λ  ��λ���
	*returnSize = digitsSize;         //����û�����λ��λ���򷵻ؽ���ĳ�����ԭ������ͬ
	r[0] = 0;                         //�������һλ�ڴ棬��ռλ
	
	int count = digitsSize;      //����
	int temp; //��λ����
	if (digitsSize == 1)     //���ԭ����ֻ��һ��ֵ����������
	{
		if (digits[0] == 9)    //һλ���������λ��ֱ�Ӹ�ֵ������*returnSize + 1
		{
			r[0] = 1;
			r[1] = 0;
			*returnSize += 1;
		}
		else     //����ֱ�Ӽ�һ���������
			r[0] = digits[0] + 1;
	}
	else    //�ж�λ��ģ����ʽ����
	{
		for (int i = digitsSize - 1; i >= 0; i--)        //�������±�ĸ�λ��ʼ����ʵ���Ǵ������ֵĵ�λ
		{
			if (digits[i] + 1 == 10 && i == digitsSize - 1)     //�ȿ��������λ�Ƿ������λ��������λ���������λΪ0
			{
				r[count - 1] = 0;
				temp = 1;            //temp��1������һλ�� 1
			}
			else if (digits[i] + 1 != 10 && i == digitsSize - 1)    //���λû��λ��ֱ�Ӽ� 1
			{
				r[count - 1] = digits[i] + 1;
				temp = 0;
			}
			else if (digits[i] + temp == 10)           //�������λ�Ƿ������λ
			{
				r[count - 1] = 0;
				temp = 1;
			}
			else
			{
				r[count - 1] = digits[i] + temp;
				temp = 0;
			}
			count--;          //����λ�ƶ�
		}
 
		if (digits[0] == 9 && (digits[1] + temp) == 10)      //����������£��������λ����һ����λ
		{
			r[0] = 1;
			*returnSize += 1;
		}
 
 
		if (r[0] == 0)    //û�в��������λ���������ռ��һλ�������̽������ĳ���  
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
                if (nums[i] < 9)//λ���ϵ�����С��9����Ҫ��λ
                {
                    nums[i]++;
                    return nums;//��һ֮�󷵻����顣λ����С��9�ͷ���
                }
                nums[i] = 0;//λ������9��������Ҫ���н�λ�����Լ���λ���ó�
            }
            int[] newNums = new int[nums.Length + 1];
			newNums[0] = 1;}
