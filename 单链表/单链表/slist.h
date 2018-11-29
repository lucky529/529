#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct ListNode
{
	SLTDataType _data;
	struct ListNode* _next;
}ListNode;

typedef struct SList
{
	ListNode* _head;
}SList;

void SListInit(SList* plist);
void SListDestory(SList* plist);
void SListPrint(SList* plist);
void SListPushFront(SList* plist, SLTDataType x);
ListNode* BuySListNode(SLTDataType x);
void SListPopFront(SList* plist);
void SListPushBack(SList* plist, SLTDataType x);
void SListpopBack(SList* plist);
ListNode* FindNode(SList* plist,SLTDataType x);
void SListInsertAfter(ListNode* pos, SLTDataType x);
void SListInsertFront(SList* plist,ListNode* pos, SLTDataType x);
void SListEraseAfter(SList* plist,ListNode* pos);
void SListRemove(SList* plist, SLTDataType x);


