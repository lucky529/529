#define _CRT_SECURE_NO_WARNINGS 1
//字符串最长公共前缀  
//方法一（横向比较）


char* longestCommonPrefix(char** strs, int strsSize)
{     
    if(strsSize == 0) return"";
    if(strsSize == 1) return strs[0]; 
    int i = 0;
    int index = 0; 
    
    for(i = 1; i < strsSize; i++)
    {
        for(index = 0; index < strlen(strs[0]) ; index++)
        {
            if(strs[0][index] != strs[i][index])
            { 
                strs[0][index] = '\0';
            break;
            }
               
        }
    }
    return strs[0];
    
}
char* longestCommonPrefix(char** strs, int strsSize)
{     
    if(strsSize == 0) return"";
    if(strsSize == 1) return strs[0]; 
	int i = 0;
	int m = 0;
	int index = 0;
	char* ret = (char*)malloc(strlen(strs[0])*sizeof(char));
	for(index = 0; index < strlen(strs[0]); index ++)
	{
		for(i = 0; i < strsSize; i++)
		{
			if(strs[0][index] != strs[i][index])
			{
				ret[m] = '\0';
				return ret;
			}
		}
		ret[m] = strs[0][index];
		m++;
	}
	ret[m] = '\0';
	return ret; 
    
}

//bool isValid(char* s)
//{
//	int len = strlen(s);
//	int pos = 0;
//	int i = 0;
//	char* arry = (char*)malloc(len*sizeof(int));
//	for(i = 0; i < len; i++)
//	{
//		if(s[i] == '(' || s[i] == '{' || s[i] == '[')
//		{
//			arry[pos++] = s[i];
//		}
//		if(s[i] == '}')
//		{
//			if(arry[pos - 1] == '{')
//			{
//				pos--;
//			}
//			else
//			return false;
//		}
//		if(s[i] == ')')
//		{
//			if(arry[pos - 1] == '(')
//			{
//				pos--;
//			}
//			else
//			return false;
//		}
//		if(s[i] == ']')
//		{
//			if(arry[pos - 1] == '[')
//			{
//				pos--;
//			}
//			else
//			return false;
//		}
//	}
//	if(pos != 0) return false;
//	return true;
//}

//int strStr(char* haystack, char* needle) 
//{
//  if((needle == NULL ) || strlen(needle) == 0) return 0;
//	char* tmp = haystack;
//	char* s1 = haystack;
//	char* s2 = needle;
//	char* ptr = haystack;
//	while(*ptr)
//	{
//		s1 = ptr;
//	    s2 = needle;
//		while(*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;			
//		}
//		if(*s2 == '\0')
//		{
//			return s1 - tmp - strlen(needle);
//		}
//		ptr++
//	}
//	return -1;
//}
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//char* my_strncat(char*dest, const char*src, int num)
//{
//	char*ret = dest;
//	//找\0
//	assert(src != NULL);
//	assert(dest != NULL);	
//	
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (num--)
//	{
//			*dest++ = *src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char a[] = "abcd";
//	char b[] = "efgh";
//	printf("%s\n", my_strncat(a, b, 3));
//	system("pause");
//	return 0;
//}

//int removeDuplicates(int* nums, int numsSize) 
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for(i = 2; i < numSize; i++)
//	{
//		if(numSize[i-2] == numSize[i-1])
//		{
//			k = numSize - i + 2;
//			for(j = 0; j < k; j++)
//			{
//				numSize[i-1] = numSize[i];
//			}
//			numSize--;
//		}
//	}
//}
#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) 
{
	int i = 0;
	int ret = 0;
	ret = nums[numsSize-1] - nums[0] + 1;
	for(i = 0; i < ret; i++ )
	{
		nums[i] = nums[0] + i + 1;
	}
	return ret;
}
//[0,0,1,1,1,2,2,3,3,4]
int removeDuplicates(int* nums, int numsSize)
{
    int pre = 0, cur = 0;
    if (numsSize == 0)
        return 0;
    while (cur < numsSize)
    {
        if (nums[pre] == nums[cur])
        {
            cur++;
        }
        else
        {
            nums[++pre] = nums[cur++];
        }
    }
    return pre + 1;
}
int main()
{
	int arr[3] = {0,1,1};
	removeDuplicates(arr,3);
	return 0;
}


