#define _CRT_SECURE_NO_WARNINGS 1
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//	ListNode* fast = head;
//	ListNode* slow = head;
//	ListNode* prev = NULL;
//	while(n--)
//	{
//		if(fast)
//		{
//			fast = fast -> next;
//		}
//		else
//		{
//			return head;
//		}
//	}
//	while(fast)
//	{
//		prev = slow;
//		slow = slow -> next;
//		fast = fast -> next;
//	}
//	if(prev == NULL)
//	{
//		head = slow -> next;
//	}
//	else
//	{
//		prev -> next = slow -> next;
//	}
//	free(slow);
//	return head;
//}

//int Num(int x)
//{
//    int ret=0;
//    while(x){
//         ret+=(x%10)*(x%10);
//        x/=10;
//    }
//    return ret;
//}
//bool isHappy(int n) {
//    if(n<=0)
//        return false;
//    while(n!=1){
//        n=Num(n);
//        if(n==4)
//            return false;
//    }
//    return true;
//}
//int Num(int n)
//{
//	int ret = 0;
//	while(n)
//	{
//		ret += n%10;
//		n = n/10;
//	}
//	return ret;
//}
//int addDigits(int num) {
//	if(num < 0) return -1;
//    if(num >=0 && num <= 9) return num;
//	while(num > 9)
//	{
//		num = Num(num);
//	}
//	return num;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int ret = pow(2,30);
//	printf("%d",ret);
//	return 0;
//}

//amanaP :lanac a ,nalp a ,nam A
//
//void reverse(char* start,char* end)
//{
//	while(start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;end--;
//	}
//}
//char* reverseString(char* s) {
//	char* ptr = s;
//	char* ret = s;
//	int len = strlen(s);
//	reverse(s,s + len -1);
//	while(ptr)
//	{
//		char *ptr2 = ptr;
//		while(ptr != '\0' && ptr != ' ')
//		{
//			ptr++;
//		}
//		reverse(ptr2, ptr - 1);
//		if(ptr == ' ')
//		{
//			ptr++;
//		}
//	}
//	return ret;
//}

#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse_arr(char* left,char* right)
{
    assert(left);
    assert(right);
    while (left<right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

char* reverse(char arr[])
{
    int len = strlen(arr);
    char *start = arr;
    char *end = NULL;
    char *ret = arr;
    reverse_arr(arr,arr+len-1);//逆序整个字符串
    //while (*arr)
    //{
    //    start = arr;
    //    while ((*arr != ' ') && (*arr != '\0'))
    //    {
    //        arr++;
    //    }
    //    //找到空格
    //    end = arr - 1;
    //    reverse_arr(start,end);//逆序单个单词
    //    if (*arr == ' ')
    //        arr++;
    //}
    return ret;
}
int main()
{
    char arr[] = "student i";
     //i ma a tneduts
     //i ma a student
    printf("%s\n", reverse(arr));
    system("pause");
    return 0;
}