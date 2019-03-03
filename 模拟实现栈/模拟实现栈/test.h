#pragma once
#include<assert.h>
#include<stdlib.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* data;
	size_t _top;
	size_t _capicaty;
}Stack;

void StackInit(Stack* st)
{
	assert(st);
	st->data = NULL;
	st->_capicaty = 0;
	st->_top = 0;
}

void StackDestory(Stack* st)
{
	assert(st);
	free(st);
	st->data = NULL;
	st->_capicaty = 0;
	st->_top = 0;
}

void StackPush(Stack* st, STDataType x)
{
	if (st->_capicaty == st->_top)
	{
		size_t newcapicaty = st->_capicaty == 0 ? 2 : st->_capicaty * 2;
		st->data = (STDataType*)realloc(st->data, sizeof(STDataType)*newcapicaty);
		assert(st->data);
		st->_capicaty = newcapicaty;
	}
	st->data[st->_top] = x;
	st->_top++;
}

void StackPop(Stack* st)
{
	assert(st && st->_top > 0);
	--st->_top;
}

STDataType StackTop(Stack* st)
{
	assert(st && st->_top > 0);
	return st->data[st->_top - 1];
}

int StackEmpty(Stack* st)
{
	assert(st);
	return st->_top == 0 ? 1 : 0;
}

size_t StackSize(Stack* st)
{
	assert(st);
	return st->_top;
}