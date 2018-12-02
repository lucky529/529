#include"list.h"

int main()
{
	List list;
	ListNode* pos = NULL;
	ListInit(&list);
	ListPushBack(&list,1);
	ListPushBack(&list,2);
	ListPushBack(&list,3);
	ListPushBack(&list,4);
	ListPrint(&list);
	ListPopBack(&list);
	ListPrint(&list);
	ListPushFront(&list,5);
	ListPrint(&list);
	ListPopFront(&list);
	ListPrint(&list);
	ListFind(&list,2);	
	//printf("%d",ListFind(&list,2));//打印一个位置
    pos = ListFind(&list,2);
	ListInsert(pos,6);
	ListPrint(&list);
	ListErase(&list,pos);
	ListPrint(&list);
	ListRemove(&list,3);
	ListPrint(&list);
	ListDestory(&list);
	return 0;
}
