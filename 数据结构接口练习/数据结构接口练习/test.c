#include"test.h"
int main()
{
	SeqList s;
	SeqListInit(&s, 2);
	SeqListPushBack(&s,1);//β��
	SeqListPushBack(&s,1);
	SeqListPushBack(&s,1);
    SeqListprintf(&s);
	SeqListPopBack(&s);//βɾ
	SeqListprintf(&s);
	SeqListPushFront(&s,2);//ͷ��
	SeqListprintf(&s);
	SeqListPopFront(&s);
	SeqListprintf(&s);
	SeqListInsert(&s,0,6);//����
    SeqListprintf(&s);
	SeqListErase(&s,0);
	SeqListprintf(&s);
	SeqListFind(&s,1);
	printf("%d\n",SeqListFind(&s,1));
	SeqListModify(&s,0,66);//�޸�˳���
	SeqListprintf(&s);
	SeqListDestory(&s);
	return 0;
}
