#include<stdio.h>
#include<stdlib.h>


typedef int SListDataType;

//���
typedef struct SListNode
{
    int data;
    struct SListNode* next;
}SListNode;

void SListNodePrint(SListNode** pphead)
{
    SListNode* cur = *pphead;
    while(cur!=NULL)
    {
        printf("%d ",cur->data);
        cur = cur->next;
    }
    printf("\n");
}

void SListPushBack(SListNode** pphead,SListDataType x)
{
    //�ҵ����һ�����
    SListNode* tail = *pphead;
    if(*pphead == NULL)
    {
        *pphead = (SListNode*)malloc(sizeof(SListNode));
        (*pphead)->data = x;
        (*pphead)->next = NULL;
        return;
    }
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
    newNode->data = x;
    newNode->next = NULL;
    tail->next = newNode;
}

void SListPopBack(SListNode** pphead)
{
    if(*pphead==NULL)
    printf("����Ϊ�գ��޷�����ɾ������\n");
    else if((*pphead)->next==NULL)
    {
        free(*pphead);
        *pphead = NULL;
    }
    else
    {
        SListNode* tail = *pphead;
        SListNode* prev;
        while(tail->next!=NULL)
        {
            prev = tail;
            tail=tail->next;
        }
        free(tail);
        prev->next = NULL;
    }
}

void SListPushFront(SListNode** pphead,SListDataType x)
{
    SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
    newNode->data = x;
    newNode->next = *pphead;
    *pphead = newNode;
}

void SListPopFront(SListNode** pphead)
{
    if(*pphead==NULL)
    {
        printf("������Ϊ�գ��޷�����ͷɾ\n");
    }
    else if((*pphead)->next==NULL)
    {
        free(*pphead);
        *pphead==NULL;
    }
    else
    {
        SListNode* next = (*pphead)->next;
        free(*pphead);
        (*pphead)=next;
    }
}

SListNode* SListFind(SListNode** pphead,SListDataType x)
{
    SListNode* cur;
    cur = *pphead;
    while(cur)
    {
        if(cur->data==x)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

void SListInsertBefore(SListNode**pphead,SListNode* pos,SListDataType x)
{
    if(*pphead==NULL||pos==NULL)
    return ;

    if(*pphead==pos)
    {
        SListPushFront(pphead,x);
        return ;
    }

    SListNode* prev = *pphead;
    while(prev->next!=NULL && prev->next!=pos)
    {
        prev=prev->next;
    }
    if(prev->next!=pos)
    {
        printf("����λ����Ч��\n");
        return ;
    }
    
    SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
    newNode->data = x;
    newNode->next =pos;
    prev->next = newNode;
}

void SListEraseBefore(SListNode** pphead,SListNode*pos)
{
    if(*pphead==NULL)
    {
        printf("���б�Ϊ�գ��޷�ɾ��\n");
        return ;
    }

    if((*pphead)->next==NULL)
    {
        SListPopBack(pphead);
        return;
    }

    SListNode* prev = *pphead;
    SListNode* prev1 ;
    while(prev->next!=NULL && prev->next!=pos)
    {
        prev1 = prev;
        prev = prev->next;
    }
    free(prev);
    prev==NULL;
    prev1->next = pos;
}

SListNode*  mergeTwoLists(SListNode *list1, SListNode * list2) ;



