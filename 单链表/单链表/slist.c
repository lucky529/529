#include"slist.h"

void SListInit(SList* plist)
{
	assert(plist);
	plist -> _head = NULL; 
}

void SListDestory(SList* plist)
{	
	ListNode* cur = plist -> _head;
	assert(plist);
	while(cur != NULL)
	{
		ListNode* next = cur -> _next;
		free(cur);
		cur = next;
	}
	plist -> _head = NULL; 
}

void SListPrint(SList* plist)
{
	ListNode* cur = plist ->_head ;
	assert(plist);	
	while(cur != NULL)
	{
		printf("%d->",cur ->_data);
		cur = cur -> _next; 
	}
}

void SListPushFront(SList* plist, SLTDataType x)
{
	ListNode* newnode = BuySListNode(x);
	assert(plist);
	newnode ->_next  = plist ->_head ;
	plist ->_head = newnode;
}

ListNode* BuySListNode(SLTDataType x)
{
	ListNode* pnode = (ListNode*)malloc(sizeof(ListNode));
	pnode ->_data = x;
	pnode ->_next = NULL;
	return pnode;
}

void SListPopFront(SList* plist)
{
	ListNode* next = plist ->_head ->_next ;
	free(plist ->_head );
	plist ->_head = next;
}


void SListPushBack(SList* plist, SLTDataType x)
{
	ListNode* tail = plist ->_head;
	ListNode* newnode = BuySListNode(x);
	while(tail ->_next  != NULL)
	{
		tail = tail ->_next; 
	}	
	tail ->_next = newnode;
}

void SListpopBack(SList* plist)
{
	ListNode* cur = plist ->_head;	
	if(plist ->_head ->_next == NULL)
	{
		free(plist ->_head );
		plist ->_head = NULL;
	}
	while(cur ->_next ->_next != NULL)
	{
		cur = cur ->_next ;
	}
	free(cur ->_next);
	cur ->_next = NULL;
}

ListNode* FindNode(SList* plist,SLTDataType x)
{
	ListNode* cur = plist ->_head;
	while(cur != NULL)
	{
		if(cur ->_data == x)
		{
			return cur;
		}
		cur = cur ->_next ;
	}
	return cur;
}

void SListInsertAfter(ListNode* pos, SLTDataType x)
{
	ListNode* newnode = BuySListNode(x);
	newnode ->_next = pos ->_next ;
	pos ->_next = newnode;
}

void SListInsertFront(SList* plist,ListNode* pos, SLTDataType x)
{

	ListNode* newnode = BuySListNode(x);
	ListNode* cur = plist ->_head ;
	assert(plist);
	if(pos == plist ->_head )
	{
		SListPushFront(plist,x);
		return;
	}
	while(cur ->_next != pos )
	{
		cur = cur ->_next ;
	}
	newnode ->_next = cur ->_next ;
	cur ->_next = newnode;
}
void SListEraseAfter(SList* plist,ListNode* pos)
{
	ListNode* cur = plist ->_head ;
	if(pos == plist ->_head )
	{
		SListPopFront(plist);
		return;
	}
	while(cur ->_next != pos)
	{
		cur = cur ->_next ;
	}
	cur ->_next = pos ->_next ;
	free(pos);
	pos ->_next = NULL;
}