#pragma once


#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int _capacity;
}Heap;

void HeapInit(Heap* hp, HPDataType* a, int n);
void HeapDestory(Heap* hp);
