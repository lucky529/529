//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//	struct ListNode* next;
//	while(cur)
//	{
//		next = cur -> next;
//		cur -> next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* cur = head;//当前位置指针
//	struct ListNode* prev = NULL;//当前位置之前的指针
//	struct ListNode* next;
//	while(cur)
//	{
//		if(cur -> val == val)//判断数值是否需要被删除
//		{	
//			next = cur -> next;//记住当前位置之后的位置
//			free(cur);//释放当前的需要删除的空间
//			cur = next;//让cur指向下一个位置
//			if(prev == NULL)
//			{
//				head = next;//此处如果删除的是头节点的话，让头节点指向下一个位置
//			}
//			else
//			{
//				prev -> next = next;//如果删除的不是头节点让prev的next的指针指向当前位置
//			}
//		}
//		else//不删除让指针向后走
//		{
//			prev = cur;
//			cur = cur -> next;
//		}
//	}
//	return head;
//}

    //ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
    //{
    //struct ListNode* slow = pListHead;
    //struct ListNode* fast = pListHead;
    //while(k--)
    //{
    //    if(fast)
    //    {
    //        fast = fast -> next;
    //    }
    //    else
    //    {
    //        return NULL;
    //    }
    //}
    //while(fast)
    //{
    //    fast = fast -> next;
    //    slow = slow -> next;
    //}
    //return slow;   
    //}

//struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//	struct ListNode* cur = head;
//	if(head == NULL || head -> next == NULL) return head;
//	while(cur)
//	{
//		if(cur -> val = cur -> next -> val)
//		{
//			cur -> next = cur -> next -> next;
//		}
//		else
//		{
//			cur = cur -> next;
//		}
//	}
//	return head;
//}

//bool isPalindrome(struct ListNode* head) {
//    static struct ListNode* arr[100] = {0};
//    int t = 0,start = 0,end = 0;
//    struct ListNode* cur = head;
//    if(head == NULL || head -> next == NULL) return true;
//    while(cur)
//    {
//        arr[t++] = cur;
//        cur = cur -> next;        
//    }
//    end = t - 1;
//    while(start < end)
//    {
//        if(arr[start]-> val == arr[end]-> val)
//        {
//            ;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    return true;
//}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head == NULL)
    {
        return head;
    }
    struct ListNode* fast = head;
    struct ListNode* slow = fast;
    struct ListNode* prev = NULL;
    while(n--)
    {
        if(fast)
        {
            fast = fast->next;
        }
        else
        {
            return head;
        }
    }
    while(fast)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }
    
    if(prev == NULL)
    {
        head = slow->next;
    }
    else
    {
        prev->next = slow->next;
    }
    free(slow);
    return head;
}