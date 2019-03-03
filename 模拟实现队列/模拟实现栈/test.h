#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<assert.h>

typedef int QUDatatype;

typedef struct QueueNode
{
	QUDatatype _data;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue
{
	QueueNode* _front;
	QueueNode* _tail;
}Queue;

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_front = NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->_front;
	while (cur)
	{
		QueueNode* del = cur->next;
		free(del);
		cur = cur->next;
	}
	pq->_front = NULL;
}

QueueNode* QueueBuyNode(QUDatatype x)
{
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->next = NULL;
	newnode->_data = x;

	return newnode;
}

void QueuePush(Queue* pq, QUDatatype x)
{
	if (pq->_front == NULL)
	{
		pq->_tail = pq->_front = QueueBuyNode(x);
		return;
	}
	pq->_tail->next = QueueBuyNode(x);
	pq->_tail = pq->_tail->next;
}

void QueuePop(Queue* pq)
{
	if (pq->_front == NULL)
	{
		return;
	}
	if (pq->_front == pq->_tail)
	{
		pq->_tail = NULL;
	}
	QueueNode* del = pq->_front;
	pq->_front = pq->_front->next;
	free(del);
}

QUDatatype QueueFrontData(Queue* pq)
{
	return pq->_front->_data;
}

QUDatatype QueueTailData(Queue* pq)
{
	return pq->_front->_data;
}

size_t QueueSize(Queue* pq)
{
	QueueNode* cur = pq->_front;
	size_t count = 0;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

bool QueueEmpty(Queue* pq)
{
	if (pq->_front != NULL)
	{
		return 1;
	}
	return 0;
}