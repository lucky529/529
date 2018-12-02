#include"list.h"

void ListInit(List* plist)
{	
	ListNode* head = BuyListNode(-1);
	assert(plist);
	head ->_next = head;
	head ->_prev = head;

	plist ->_head = head;
}

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode ->_next = NULL;
	newnode ->_prev = NULL;
	newnode ->_data = x;

	return newnode;
}

void ListPrint(List* plist)
{	
	ListNode* cur = plist ->_head ->_next ;
	printf("<-head->");
	while(cur  != plist ->_head )
	{
		printf("<-%d->",cur->_data);
		cur = cur ->_next ;
	}
	printf("\n");
}
void ListDestory(List* plist)
{
	ListNode* cur = plist ->_head ->_next;
	ListNode* next;
	while(cur != plist ->_head)
	{
		next = cur -> _next;
		free(cur);
		cur = next;
	}
	free(plist ->_head);
	plist ->_head = NULL;
}

void ListPushBack(List* plist, LTDataType x)
{
	//ListNode* newnode = BuyListNode(x);
	//ListNode* prev = plist ->_head ->_prev;
	//prev ->_next = newnode;
	//newnode ->_prev = prev;
	//newnode ->_next = plist->_head;
	//plist ->_head ->_prev  = newnode;
	ListInsert(plist ->_head, x);
}

void ListPopBack(List* plist)
{
	//ListNode* head = plist ->_head;
	//ListNode* prev = head ->_prev ;
	//ListNode* prevprev = prev ->_prev ;
	//assert(plist && plist ->_head ->_next != plist ->_head );
	//free(prev);
	//prevprev ->_next = head;
	//head ->_prev = prevprev;
	ListErase(plist,plist ->_head ->_prev );
}
void ListPushFront(List* plist, LTDataType x)
{
	//ListNode* newnode = BuyListNode(x);
	//ListNode* head = plist ->_head;
	//ListNode* next = head ->_next;
	//assert(plist);
	//head ->_next = newnode;
	//newnode ->_prev = head;
	//next ->_prev = newnode;
	//newnode ->_next = next;
	ListInsert(plist ->_head ->_next , x);
}

void ListPopFront(List* plist)
{
	//ListNode* head = plist ->_head ;
	//ListNode* del = head ->_next ;
	//ListNode* next = head ->_next ->_next ;
	//assert(plist && plist ->_head ->_next != plist ->_head );
	//free(del);
	//head ->_next = next;
	//next ->_prev = head;
	ListErase(plist,plist ->_head ->_next);
}

ListNode* ListFind(List* plist, LTDataType x)
{
	ListNode* head = plist ->_head;
	ListNode* cur = head ->_next;
	assert(plist && plist ->_head ->_next != plist ->_head );
	while(cur != head)
	{
		if(cur ->_data == x)
		{
			return cur;
		}
		cur  = cur ->_next ;
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode* newnode = BuyListNode(x);
	ListNode* prev = pos ->_prev;
	assert(pos);
	prev ->_next = newnode;
	newnode ->_prev = prev;
	newnode ->_next = pos;
	pos ->_prev = newnode;
}

void ListErase(List* plist,ListNode* pos)
{
    ListNode* prev = pos ->_prev;
	ListNode* next = pos ->_next;
	assert(pos && plist ->_head ->_next != plist ->_head);
	prev ->_next = next;
	next ->_prev = prev;
}

void ListRemove(List* plist, LTDataType x)
{
	ListNode* pos = ListFind(plist,x);
	if(pos)
	{
		ListErase(plist, pos);
	}
	else
	{
		return;
	}
}
