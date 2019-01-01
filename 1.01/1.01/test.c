#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     struct RandomListNode *next;
 *     struct RandomListNode *random;
 * };
 */
typedef struct RandomListNode RLNode;

struct RandomListNode *copyRandomList(struct RandomListNode *head) {//�������ָ�������
    RLNode* cur = head;   
    while(cur)//��������
    {
        RLNode* next = cur -> next;
        RLNode* copy = (RLNode*)malloc(sizeof(RLNode));
        copy -> label = cur -> label;
        cur -> next = copy;
        copy -> next = next;
        
        cur = next;
    }    
    cur = head;
    while(cur)//����ָ��
    {
        RLNode* copy = cur -> next;
        if(cur -> random)
        {
            copy -> random = cur -> random -> next;
        }
        else
        {
            copy -> random = NULL;
        }
        
        cur = copy -> next;
    }
    RLNode* tail, *copyhead;
    tail = copyhead = (RLNode*)malloc(sizeof(RLNode));
    cur = head;
    while(cur)//���в��
    {
        RLNode* copy = cur -> next;
        RLNode* next = copy -> next;
        
        tail -> next = copy;
        tail = copy;
        
        cur -> next = next;        
        cur = next;
    }
    RLNode* newnode = copyhead -> next;
    free(copyhead);
    
    return newnode;
}
