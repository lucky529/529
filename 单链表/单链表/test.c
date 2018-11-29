#include"slist.h"

int main()
{
	SList list;
	ListNode* pos = NULL;
	SListInit(&list);
	SListDestory(&list);
	SListPushFront(&list,1);
	SListPushFront(&list,1);
	SListPushFront(&list,1);
	SListPushFront(&list,2);
	SListPushFront(&list,3);
	SListPopFront(&list);
	SListPushBack(&list,4);
	SListpopBack(&list);
	pos = FindNode(&list,2);
    SListInsertAfter(pos , 4);
	SListInsertFront(&list, pos , 6);
	SListEraseAfter(&list,pos);
	SListRemove(&list,1);
	SListPrint(&list);
	return 0;
}
