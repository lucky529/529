/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* removeElements(struct ListNode* head, int val)    
// 
//{
//  struct ListNode* cur = NULL;
//	struct ListNode* del = NULL;
//	struct ListNode* front = NULL;
//	cur = head;
//	front = cur;
//	while(cur != NULL)
//	{
//		if(cur -> val == val)
//		{
//			if(cur == head)
//			{
//				del = cur;
//				front = cur -> next;
//				head = cur -> next;
//				free(del);
//			}
//			else
//			{
//				del = cur;
//				front = cur -> next;
//				free(del);
//			}
//			front = cur;
//		}
//		else
//		{
//			front = cur;
//			cur = cur -> next;
//		}
//	}
//}

//struct ListNode* removeElements(struct ListNode* head, int val) 
//{
//    struct ListNode* cur = head;
//    struct ListNode* front = NULL;
//	while(cur != NULL)
//	{
//		if(cur -> val == val)
//		{
//            struct ListNode* del = cur;
//			if(cur == head)
//			{
//				del = cur;
//				front = cur -> next;
//				head = cur -> next;
//				free(del);
//			}
//			else
//			{
//				del = cur;
//				front = cur -> next;
//				free(del);
//			}
//			front = cur;
//		}
//		else
//		{
//			front = cur;
//			cur = cur -> next;
//		}
//	}
//    return head;
//}
//struct ListNode* reverseList(struct ListNode* head)
//{
//    if(head == NULL || head -> next == NULL) return head;
//    struct ListNode* cur = head -> next,*prev = head,*next = NULL;
//    while(cur)
//    {
//        next = cur -> next;
//        cur -> next= prev;
//        cur = next;
//    }
//    return prev;
//}
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if(head == NULL || head -> next == NULL) return head;
//	struct ListNode* h = reverseList(head -> next);
//	head -> next -> next = head;
//	head -> next = NULL;
//	return h;
//}

//struct ListNode* middleNode(struct ListNode* head) 
//{
//	if(head == NULL || head -> next == NULL)
//    int count = 0;
//	struct ListNode* cur = head,*p = head;
//	while(cur)
//	{
//		count++;
//	}
//	count = (count/2) + 1;
//	while(count--)
//	{
//		p = p -> next;
//	}
//	return p;
//}

//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* slow = head,*fast = head;
//    if(head == NULL || head -> next == NULL) return head;    
//    while(fast != NULL && fast -> next != NULL)
//    {
//        slow = slow -> next;
//        fast = fast -> next -> next;       
//    }
//    return slow;
//}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
	struct ListNode* cur = head,*prev = NULL;
	int count = 0;
	if(head == NULL) return head;
	if(head -> next == NULL)
	{
		free(head);
		head = NULL;
	}
	while(cur)
	{
		cur = cur -> next;
		++count;
	}
	count = count - n;
	while(count--)
	{
		prev = cur;
		cur = cur -> next;
	}
	prev = cur -> next;
	free(cur);
	return head;
} 