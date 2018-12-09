#include"test.h"

void JustDown(HPDataType* a, size_t n, int root)
{
	int parent = root;
	int child = parent*2+1;
	assert(a);

	while(child < (int)n)
	{
		if(child + 1 < (int)n && a[child + 1] < a[child] ) ++child;
		if(a[child] < a[parent])
		{
			HPDataType tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;

			parent = child;
			child = parent*2+1;
		}
		else
		{
			break;
		}
	}
}

void HeapInit(Heap* hp, HPDataType* a, int n)
{
	int i = 0;
	assert(hp && a);
	hp ->_a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	hp ->_size = hp ->_capacity = n;
	memcpy(hp ->_a  , a , sizeof(HPDataType) * n);

	for(i = (hp ->_size - 2)/2; i >= 0; i-- )
	{
		JustDown(hp ->_a , hp ->_size ,i);
	}
}

void JustUp(HPDataType* a, size_t n)
{
	int child = n - 1;
	int parent = (n - 2)/2;
	while(child > 0)
	{
		if(a[child] < a[parent])
		{
			HPDataType tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;

			child = parent;
			parent = (child - 1)/2;
		}
		else
		{
			break;
		}
	}
}

void CheckCapacity(Heap* hp)//检查堆的容量
{
	if(hp ->_size == hp ->_capacity )
	{
		hp ->_capacity *= 2;
		hp ->_a = (HPDataType*)realloc(hp ->_a ,sizeof(HPDataType)*hp ->_capacity );
	}
}

void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	CheckCapacity(hp);
	hp ->_a [hp ->_size ] = x;
	++hp ->_size;	
	JustUp(hp ->_a ,hp ->_size);
	
}

void Swap(HPDataType* p1,HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void HeapPop(Heap* hp)
{
	int i = 0;
	Swap(&hp ->_a[0],&hp ->_a[hp ->_size-1]);
	assert(hp);
	hp ->_size--; 
	for(i = (hp ->_size - 2)/2; i >= 0; i-- )
	{
		JustDown(hp ->_a , hp ->_size ,i);
	}
}


void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp ->_a);
	hp ->_a = NULL;
	hp ->_capacity = 0;
	hp ->_size = 0;
}

void HeapPrint(Heap* hp)
{
	int i = 0;
	for(i = 0; i < hp ->_size; i++)
	{
		printf("%d ",hp ->_a[i]);
	}
	printf("\n");
}

size_t HeapSize(Heap* hp)
{
	assert(hp);
	return hp ->_size;
}

size_t HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp ->_size == 0 ? 0 : 1;
}

HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp ->_a[0];
}

void TopK()//选数问题
{
	Heap hp;	
	size_t i = 0;
	const size_t N = 100000;
	const size_t K = 10;
	size_t* a = (size_t*)malloc(sizeof(size_t)*N);
	srand((unsigned int)time(0));
	for(i = 0; i < N ; i++)
	{
		a[i] = rand()%100;
	}

	a[23] = 103;
	a[1203] = 606;
	
	HeapInit(&hp, a, K);
	for(i = K ; i < N; ++i)
	{
		if((size_t)HeapTop(&hp) < a[i])
		{
			HeapPop(&hp);
			HeapPush(&hp, a[i]);
		}
	}
	HeapPrint(&hp);
}

void HeapSort(int* a, int n)
{
	int i = 0;
	int end = n - 1;

	assert(a);
	for(i = (n - 1 - 1)/2; i >=0; i--)
	{
		JustDown(a ,n , i);
	}

    while(end > 0)
	{
		Swap(&a[0], &a[end]);
		JustDown(a, end, 0);
		--end;
	}
}


void test1()
{
	int i = 0;
	int a[] = {2,7,8,0,0,7,5,3,7,9};
	Heap hp;
	HeapInit(&hp, a, sizeof(a)/sizeof(a[0]));
	//HeapPush(&hp, 1);
	/*HeapPop(&hp);
	HeapPop(&hp);
	HeapPop(&hp);*/
	HeapPrint(&hp);
	HeapSort(a, sizeof(a)/sizeof(a[0]));
    for(i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}