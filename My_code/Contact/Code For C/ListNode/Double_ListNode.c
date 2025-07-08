#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int DLNodeType;

typedef struct DoubleListNode
{
    DLNodeType data;
    struct DoubleListNode *next;
    struct DoubleListNode *prev;

}DLNode;

//尾插
void ListPushBack(DLNode **phead,DLNodeType x)
{

    assert(phead);
    DLNode *newNode = (DLNode *)malloc(sizeof(DLNode));
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = x;

    DLNode* tail = (*phead)->prev;
    
    //尾部链接
    tail->next = newNode;
    newNode->prev = tail;

    //头部链接
    newNode->next = *phead;
    (*phead)->prev = newNode;
    
}

//尾删
void ListPopBack(DLNode **phead)
{
    //检查哨兵结点是否存在
    assert(phead);
    assert(phead && *phead && (*phead)->next != *phead);

    if((*phead)->next == (*phead)) //只有一个哨兵结点
    {
        return;
    }

    DLNode *tail = (*phead)->prev;
    tail->prev->next = *phead;
    (*phead) ->prev = tail ->prev;

    free(tail);
}

void ListPrint(DLNode *phead)
{
    assert(phead);

    DLNode* cur = phead->next;

    while(cur!=phead)
    {
        printf("%d ",cur->data);
        cur = cur->next;
    }

    printf("\n");
}

void InitList(DLNode **phead)
{
    assert(phead);

    *phead = (DLNode *)malloc(sizeof(DLNode));
    (*phead)->next = *phead;
    (*phead)->prev = *phead;
}

void ListPushFront(DLNode **phead,DLNodeType x)
{
    assert(phead);

    DLNode* newNode = (DLNode*)malloc(sizeof(DLNode));
    newNode->data = x;
    
    if((*phead)->next!=(*phead))
    {
        DLNode* pheadNext = (*phead)->next;
        
        (*phead)->next = newNode;
        newNode->prev = (*phead);

        newNode->next = pheadNext;
        pheadNext->prev = newNode;
    }
    else
    {
        (*phead)->next = newNode;
        newNode->prev = *phead;

        newNode->next = (*phead);
        (*phead)->prev = newNode;
    }
}

void ListPopFront(DLNode **phead)
{
    assert(phead);

    if((*phead)->next == (*phead))
    {
        return ;
    }
    else
    {
        DLNode* pheadNextNext = (*phead)->next->next;
        free((*phead)->next);

        (*phead)->next = pheadNextNext;
        pheadNextNext->prev = (*phead);
    }
}

DLNode* ListFind(DLNode *phead,DLNodeType x)
{
    assert(phead);
    DLNode *cur = phead->next;
    while(cur!=phead)
    {
        if(cur->data == x)
            return cur;
        cur = cur->next;
    }
    return NULL;
}

void ListInsert(DLNode **phead,DLNodeType x,DLNode *pos)
{
    assert(phead);
    assert(pos);

    DLNode *newNode = (DLNode*)malloc(sizeof(DLNode));
    newNode->data = x;
    
    DLNode* prev = pos->prev;

    //头部链接
    newNode->prev = prev;
    prev->next = newNode;

    //尾部链接
    pos->prev = newNode;
    newNode->next = pos;
}

void ListErase(DLNode **phead,DLNode* pos)
{
    assert(pos);

    if(pos == *phead || pos->next == *phead)
    {
        return;
    }

    DLNode* prev = pos->prev;
    DLNode* next = pos->next;

    prev->next = next;
    next->prev = prev;

    free(pos);
    pos = NULL;
}

//清除存数据结点 保留头结点
void ListClear(DLNode** phead)
{
    assert(phead);

    DLNode* cur = (*phead)->next;
    
    while(cur!=(*phead))
    {
        DLNode* next = cur->next;
        free(cur);
        cur = next;
    }

    (*phead)->next = *phead;
    (*phead)->prev = *phead;
}

void ListDestroy(DLNode** phead)
{
    assert(*phead);

    ListClear(phead);

    free(*phead);
    *phead = NULL;
}

int main()
{
    //先创建一个哨兵结点
    DLNode *phead = NULL;
    InitList(&phead);
    
    ListPushBack(&phead, 1);
    ListPushBack(&phead,3);

    DLNode* pos = ListFind(phead,3);
    DLNode* pos2 = ListFind(phead,1);

    ListInsert(&phead,2,pos);
    ListErase(&phead,pos2);

    ListPrint(phead);

    ListDestroy(&phead);
    
    ListPrint(phead);
    return 0;
}