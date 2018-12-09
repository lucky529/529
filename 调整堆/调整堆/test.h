#pragma once


#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int _capacity;
}Heap;

void HeapInit(Heap* hp, HPDataType* a, int n);
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
void HeapPrint(Heap* hp);
size_t HeapSize(Heap* hp);
size_t HeapEmpty(Heap* hp);

void test1();
void TopK();
void HeapSort(int* a, int n);