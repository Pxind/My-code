#include "StackAndQueue.h"

void StackInit(Stack* pst)
{
    assert(pst);
    pst->_a = NULL;
    pst->_top = 0;
    pst->_capacity = 0;
}

void StackDestroy(Stack* pst)
{
    assert(pst);

    free(pst->_a);
    pst->_a = NULL;
    pst->_top = 0;
    pst->_capacity = 0;
}

//Buy memory
void BuyCapacity(Stack* pst)
{
     if(pst->_capacity == 0)
    {
        pst->_capacity = 2;
        (pst->_a) = (STDataType*)malloc(sizeof(STDataType)*(pst->_capacity));
        return ;
    } 
    pst->_capacity *= 2;
    STDataType* a = (STDataType*)realloc((pst->_a),sizeof(STDataType)*(pst->_capacity));
    if(a == NULL)
    {
        printf("Memory application failed\n");
        exit(-1);
    }
    else
        pst->_a = a;
}

void StackPush(Stack* pst,STDataType x)
{
    assert(pst);

    if(pst->_top == pst->_capacity)
        BuyCapacity(pst);
    pst->_a[pst->_top] = x;
    (pst->_top)++;
}

void StackPop(Stack* pst)
{
    assert(pst);
    assert((pst->_top)>0);

    (pst->_top)--;
}

int StackSize(Stack* pst)
{
    assert(pst);

    return (pst->_top);
}

int StackEmpty(Stack* pst)
{
    assert(pst);

    return !(pst->_top);
}

STDataType StackTop(Stack* pst)
{
    assert(pst);
    assert(pst->_top>0);
    
    return pst->_a[(pst->_top)-1];
}



void QueueInit(Queue* pq)
{
    assert(pq);

    pq->_head = NULL;
    pq->_tail = NULL;
}

void QueueDestroy(Queue* pq)
{
    assert(pq);

    QueueNode* cur = pq->_head;
    while(cur)
    {
        QueueNode* next = cur->_next;
        free(cur);
        cur = next;
    }

    pq->_head = pq->_tail = NULL;
}

void QueuePush(Queue* pq,QDataType x)
{
    assert(pq);

    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    if(newNode == NULL)
    {
        printf("memory application failed\n");
        exit(-1);
    }
    newNode->_data = x;
    newNode->_next = NULL;
    if(pq->_head == NULL)
        pq->_head = pq->_tail = newNode;
    else
    {
        pq->_tail->_next = newNode;
        pq->_tail = newNode;
    }
}

void QueuePop(Queue* pq)
{
    assert(pq);
    assert(pq->_head);

    //judges if "pq->_head == pq->_tail",both the head and the tail need assigned "NULL"
    if(pq->_head == pq->_tail)
    {
        free(pq->_head);

        pq->_head = pq->_tail = NULL;
        return ;
    }

    QueueNode* next = pq->_head->_next;
    free(pq->_head);
    pq->_head = next;

}

QDataType QueueFront(Queue* pq)
{
    assert(pq);
    assert(pq->_head);

    return pq->_head->_data;
}

QDataType QueueBack(Queue* pq)
{
    assert(pq);
    assert(pq->_tail);

    return pq->_tail->_data;
}

int QueueEmpty(Queue* pq)
{
    assert(pq);

    return pq->_head == NULL ? 1 : 0;
}

int QueueSize(Queue* pq)
{
    assert(pq);

    QueueNode* cur = pq->_head;
    int size = 0;

    while(cur)
    {
        QueueNode* next = cur->_next;
        cur = next;
        size++;
    }

    return size;
}
