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
//	struct ListNode* cur = head;//��ǰλ��ָ��
//	struct ListNode* prev = NULL;//��ǰλ��֮ǰ��ָ��
//	struct ListNode* next;
//	while(cur)
//	{
//		if(cur -> val == val)//�ж���ֵ�Ƿ���Ҫ��ɾ��
//		{	
//			next = cur -> next;//��ס��ǰλ��֮���λ��
//			free(cur);//�ͷŵ�ǰ����Ҫɾ���Ŀռ�
//			cur = next;//��curָ����һ��λ��
//			if(prev == NULL)
//			{
//				head = next;//�˴����ɾ������ͷ�ڵ�Ļ�����ͷ�ڵ�ָ����һ��λ��
//			}
//			else
//			{
//				prev -> next = next;//���ɾ���Ĳ���ͷ�ڵ���prev��next��ָ��ָ��ǰλ��
//			}
//		}
//		else//��ɾ����ָ�������
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