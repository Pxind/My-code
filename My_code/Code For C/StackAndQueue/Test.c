#include "StackAndQueue.h"

void StackTest()
{
    Stack st;
    StackInit(&st);
    StackPush(&st,1);
    StackPush(&st,2);
    StackPush(&st,3);
    StackPush(&st,4);

    while(!StackEmpty(&st))
    {
        printf("%d ",StackTop(&st));
        StackPop(&st);
    }
    printf("\n");

    StackDestroy(&st);
}

void QueueTest()
{
    Queue q;

    QueueInit(&q);

    QueuePush(&q,1);
    QueuePush(&q,2);
    QueuePush(&q,3);
    QueuePush(&q,4);

    while(!QueueEmpty(&q))
    {
        printf("%d ",QueueFront(&q));
        QueuePop(&q);
    }
    printf("\n");
    
    QueueDestroy(&q);
}

int main()
{
    //StackTest();
    QueueTest();
    return 0;
}