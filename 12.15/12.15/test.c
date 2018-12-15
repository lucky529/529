//typedef struct RandomListNode RLNode;
//
//struct RandomListNode *copyRandomList(struct RandomListNode *head) {//¸´Ï°¿½±´Ëæ»úÖ¸ÕëµÄÁ´±í
//    RLNode* cur = head;   
//    while(cur)
//    {
//        RLNode* next = cur -> next;
//        RLNode* copy = (RLNode*)malloc(sizeof(RLNode));
//        copy -> label = cur -> label;
//        cur -> next = copy;
//        copy -> next = next;
//        
//        cur = next;
//    }    
//    cur = head;
//    while(cur)
//    {
//        RLNode* copy = cur -> next;
//        if(cur -> random)
//        {
//            copy -> random = cur -> random -> next;
//        }
//        else
//        {
//            copy -> random = NULL;
//        }
//        
//        cur = copy -> next;
//    }
//    RLNode* tail, *copyhead;
//    tail = copyhead = (RLNode*)malloc(sizeof(RLNode));
//    cur = head;
//    while(cur)
//    {
//        RLNode* copy = cur -> next;
//        RLNode* next = copy -> next;
//        
//        tail -> next = copy;
//        tail = copy;
//        
//        cur -> next = next;        
//        cur = next;
//    }
//    RLNode* newnode = copyhead -> next;
//    free(copyhead);
//    
//    return newnode;
//}
typedef struct RandomListNode RLNode
struct RandomListNode *copyRandomList(struct RandomListNode *head)
{
	RLNode* cur = head;
	while(cur)
	{
		RLNode* next = cur -> next;
		RLNode* copy = (RLNode*)malloc(sizeof(RLNode));
		copy -> label = cur -> label;
		cur -> next = copy;
		copy -> next = next;

		cur = next;
	}
	cur = head;
	while(cur)
	{
		RLNode* copy = cur -> next;
		if(cur -> random)
		{
			copy -> random = cur -> random -> next;
		}
		else
		{
			copy -> random = NULL;
		}
		cur = copy -> next;
	}
	RLNode* tail,*copyhead;
	tail = copyhead = (RLNode*)malloc(sizeof(RLNode));
	cur = head;
	while(cur)
	{
		RLNode* copy = cur -> next;
		RLNode* next = copy -> next;

		tail -> next = copy;
		tail = copy;
		cur -> next = next;

		cur = next;
	}
	RLNode* newhead = copyhead -> next;
	free(copyhead);

	return newhead;
}