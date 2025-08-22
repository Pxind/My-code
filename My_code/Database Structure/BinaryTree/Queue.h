#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//Excleam the type
struct BinaryTree;

typedef struct BinaryTree* QDataType;

typedef struct QueueNode
{
    struct QueueNode* _next;
    QDataType _data;
}QueueNode;

typedef struct Queue
{
    QueueNode* _head;
    QueueNode* _tail;
}Queue;

//Initializes the queue
void QueueInit(Queue* pq);

//Destroys the queue
void QueueDestroy(Queue* pq);

//Push an element onto the queue
void QueuePush(Queue* pq,QDataType x);

//Pop an element from the queue
void QueuePop(Queue* pq);

//Get the element at the front of the queue
QDataType QueueFront(Queue* pq);

//Get the element at the back of the queue
QDataType QueueBack(Queue* pq);

//Judges if the queue is empty
//return 1 if empty, otherwise return 0
int QueueEmpty(Queue* pq);

//Get the size of the queue
int QueueSize(Queue* pq);