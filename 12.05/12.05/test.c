 //   ListNode* partition(ListNode* pHead, int x) {//链表分割
	//ListNode* cur = pHead;
	//struct ListNode* lesstail = (struct ListNode*)malloc(sizeof(struct ListNode));
	//struct ListNode* greathead = (struct ListNode*)malloc(sizeof(struct ListNode));
 //   struct ListNode* ltail = lesstail;
 //   struct ListNode* ghead = greathead;
	//while(cur)
	//{
	//	if(cur -> val < x)
	//	{
	//		ltail -> next = cur;
	//		ltail = ltail -> next;
	//	}
	//	else
	//	{
	//		ghead -> next = cur;
	//		ghead = ghead -> next;
	//	}
	//	cur = cur -> next;
	//}
	//ltail -> next = greathead -> next;
	//ghead -> next = NULL;
	//pHead = lesstail -> next;
 //       
 //   return pHead;
 //   }
 //       
//ListNode* deleteDuplication(ListNode* pHead)//删除链表元素
//{
//	ListNode* cur = pHead;
//	ListNode* prev = NULL;
//	ListNode* next = cur -> next;
//	if(pHead == NULL || pHead -> next = NULL) return pHead;
//	while(next)
//	{
//		if(cur -> val == next -> val)
//		{
//			next = next -> next;
//			while(next)
//			{
//				if(next -> val != cur -> val)
//					break;
//				next = next -> next;
//			}
//			while(cur != next)
//			{
//				ListNode* tmp = cur;
//				cur = cur -> next;
//				free(tmp);
//			}
//			if(prev == NULL)
//			{
//				pHead = cur;
//			}
//			else
//			{
//				prev -> next = next;
//			}
//			if(next)
//			{
//				next = next -> next;
//			}
//		}
//		else
//		{
//			prev = cur;
//			cur = next;
//			next = next -> next;
//		}
//	}
//	return pHead;
//}
