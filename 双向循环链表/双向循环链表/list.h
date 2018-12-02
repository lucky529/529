#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType _data;
	struct ListNode* _next;
	struct ListNode* _prev;
}ListNode;

typedef struct List
{
	struct ListNode* _head;
}List;


void ListInit(List* plist);	
void ListDestory(List* plist);
ListNode* BuyListNode(LTDataType x);
void ListPushBack(List* plist, LTDataType x);
void ListPrint(List* plist);
void ListPopBack(List* plist);
void ListPushFront(List* plist, LTDataType x);
void ListPopFront(List* plist);
ListNode* ListFind(List* plist, LTDataType x);
void ListInsert(ListNode* pos, LTDataType x);
void ListErase(List* plist,ListNode* pos);
void ListRemove(List* plist, LTDataType x);