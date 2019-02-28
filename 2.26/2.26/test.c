#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

typedef struct
{
	int val;
	struct ListNode* next;
}ListNode;

typedef struct {
	struct ListNode* head;
} MyLinkedList;

/** Initialize your data structure here. */
MyLinkedList* myLinkedListCreate() {
	MyLinkedList* ret = (MyLinkedList*)malloc(sizeof(MyLinkedList));
	ret->head = NULL;

	return ret;
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int Getsize(MyLinkedList* obj)//获得链表长度
{
	ListNode* cur = obj->head;

	int count = 0;
	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
	ListNode* cur = obj->head;
	if (index < 0) return -1;
	while (cur)
	{
		if (index == 0)
			return cur->val;
		cur = cur->next;
		index--;
	}
	return -1;
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
ListNode* BuyListNode(int val)//获得链表节点
{
	ListNode* pnode = (ListNode*)malloc(sizeof(ListNode));
	pnode->val = val;
	pnode->next = NULL;
	return pnode;
}
void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
	ListNode* newnode = BuyListNode(val);
	newnode->next = obj->head;
	obj->head = newnode;
}

/** Append a node of value val to the last element of the linked list. */
void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
	ListNode* tail = obj->head;
	ListNode* newnode = BuyListNode(val);
	if (tail == NULL)
	{
		obj->head = newnode;
		return;
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = newnode;
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
	ListNode* cur = obj->head;
	//printf("%d%d",Lindex,index);
	if (index < 0 )
		return;
	if (index == 0)
	{
		myLinkedListAddAtHead(obj, val);
		return;
	}

	while (cur)
	{
		if (index == 1)
		{
			ListNode* newnode = BuyListNode(val);
			newnode->next = cur->next;
			cur->next = newnode;
		}
		index--;
		cur = cur->next;
	}
	return;
}

/** Delete the index-th node in the linked list, if the index is valid. */
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
	int Lindex = Getsize(obj);
	ListNode* del;
	ListNode* cur = obj->head;
	if (index >= Lindex || cur == NULL) return;
	if (index == 0)
	{
		obj->head = cur->next;
		free(cur);
		return;
	}
	while (--index)
	{
		cur = cur->next;
	}
	del = cur->next;
	cur->next = del->next;
	free(del);
}

void myLinkedListFree(MyLinkedList* obj) {
	free(obj);
	obj = NULL;
}

/**
* Your MyLinkedList struct will be instantiated and called as such:
* struct MyLinkedList* obj = myLinkedListCreate();
* int param_1 = myLinkedListGet(obj, index);
* myLinkedListAddAtHead(obj, val);
* myLinkedListAddAtTail(obj, val);
* myLinkedListAddAtIndex(obj, index, val);
* myLinkedListDeleteAtIndex(obj, index);
* myLinkedListFree(obj);
*/
void Printf(MyLinkedList* obj)
{
	ListNode* cur = obj->head;
	while (cur)
	{
		printf("%d", cur->val);
		cur = cur->next;
	}
	printf("\n");

}
int main()
{
	MyLinkedList* list = myLinkedListCreate();
	printf("%d\n", myLinkedListGet(list, 0));
	myLinkedListAddAtIndex(list, 1, 2);
	printf("%d\n", myLinkedListGet(list, 0));
	printf("%d\n", myLinkedListGet(list, 1));
	myLinkedListAddAtIndex(list, 0, 1);
	printf("%d\n", myLinkedListGet(list, 0));
	printf("%d\n", myLinkedListGet(list, 1));

	/*myLinkedListAddAtHead(list, 1);
	myLinkedListAddAtTail(list, 3);
	myLinkedListAddAtIndex(list, 1, 2);
	printf("\n");
	myLinkedListDeleteAtIndex(list, 1);*/

	Printf(list);
	system("pause");
	return 0;
}