struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
	int lenA = 0,lenB = 0,gap = 0;
	ListNode* a = headA;
	ListNode* b = headB;
	ListNode* meet = NULL;
	while(a -> next != NULL)
	{
		lenA++;
		a = a -> next;
	}
	while(b -> next != NULL)
	{
		lenB++;
		b = b -> next;
	}
	if(b != a)
	{
		return NULL;
	}
	else
	{
		a = headA;b = headB;
		if(lenA > lenB)
		{
			gap = lenA - lenB;
			while(gap--)
			{
				a = a -> next;
			}
		}
		else
		{
			gap = lenB - lenA;
			while(gap--)
			{
				b = b -> next;
			}
		}
		while(a != b)
		{
			if(a == b)
			{
				tmp = a;
				return a;
			}
			a = a -> next;
			b = b -> next;
		}
	}
	return tmp;
}

struct ListNode *hasCycle(struct ListNode *head) {
    if(head == NULL || head -> next == NULL) return false;
    struct ListNode* slow = head;
    struct ListNode* fast = head -> next;
    while(slow != fast)
    {
        if(fast == NULL || fast -> next == NULL)
        {
            return NULL;
        }
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return fast;
}