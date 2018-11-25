#include"test.h"
int main()
{
	SeqList s;
	SeqListInit(&s, 2);
	SeqListPushBack(&s,1);//Œ≤≤Â
	SeqListPushBack(&s,1);
	SeqListPushBack(&s,1);
    SeqListprintf(&s);
	SeqListPopBack(&s);//Œ≤…æ
	SeqListprintf(&s);
	SeqListPushFront(&s,2);//Õ∑≤Â
	SeqListprintf(&s);
	SeqListPopFront(&s);
	SeqListprintf(&s);
	SeqListInsert(&s,0,6);//≤Â»Î
    SeqListprintf(&s);
	SeqListErase(&s,0);
	SeqListprintf(&s);
	SeqListFind(&s,1);
	printf("%d\n",SeqListFind(&s,1));
	SeqListModify(&s,0,66);//–ﬁ∏ƒÀ≥–Ú±Ì
	SeqListprintf(&s);
	SeqListDestory(&s);
	return 0;
}
