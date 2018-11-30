//struct ListNode* removeElements(struct ListNode* head, int val)//É¾³ýÁ´±íÖÐµÄval
//{
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//	struct ListNode* next;
//	while(cur)
//	{
//		if(cur -> val == val)
//		{
//			next = cur -> next;
//			free(cur);
//			cur = next;
//			if(prev == NULL)
//			{
//				head = next;
//			}
//			else
//			{
//				prev -> next = next;
//			}
//		}
//		else
//		{
//			prev = cur;
//			cur = cur -> next;
//		}
//	}
//	return head;
//}

struct ListNode* reverseList(struct ListNode* head) 
{
	if(head == NULL || head -> next == NULL) return head;
	struct ListNode* h = reverseList(head -> next);
	head -> next -> next = head;
	head -> next = NULL;
	return h;
}

//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = head; 
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

//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* cur = head;
//	int count = 0;
//	while(cur)
//	{
//		count++;
//		cur = cur -> next;
//	}
//	count = count/2;
//	cur = head;
//	while(count--)
//	{
//		cur = cur -> next;
//	}
//	return cur;
//}

//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* slow = head;
//	struct ListNode* fast = head;
//	while(fast != NULL && fast -> next != NULL)
//	{
//		slow = slow -> next;
//		fast = fast -> next -> next;
//	}
//	return slow;
//}


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode* head;
    struct ListNode* tail;
    if(l1 == NULL)
    {
        return l2;
    }
    if(l2 == NULL)
    {
        return l1;
    }
    if(l1->val < l2->val)
    {
        head = l1;
        l1 = l1->next;
    }
    else
    {
        head = 12;
        l2 = l2->next;
    }
    tail = head;
    while(l1 && l2)
    {
        if(l1 -> val < l2 -> val)
        {
            tail->next = l1;
            tail = tail->next;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            tail = tail->next;
            l2 = l2->next;
        }
    }
    if(l1)
    {
        tail->next = l1;
    }
    if(l2)
    {
        tail->next = l2;
    }
    return head;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    	struct ListNode* head;
	struct ListNode* tail;
	if(l1 == NULL)
	{
		return l2;

	}
	if(l2 == NULL)
	{
		return l1;
	}
	if(l1->val < l2->val)
	{
		head = l1;
		l1 = l1->next;

	}
	else
	{
		head = l2;
		l2 = l2->next;
		
	}
	tail = head;
	while(l1&&l2)
	{
		if(l1->val< l2->val)
		{
			tail->next=l1;
			l1 = l1->next;
			tail = tail->next;
		}
		else
		{
			tail->next =l2;
			l2 = l2->next;
			tail = tail->next;
		}
	}
	if(l1)
	{
		tail->next = l1;
	}
	if(l2)
	{
		tail->next = l2;
	}
	return head;
    
}