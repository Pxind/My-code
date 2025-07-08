#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int STDataType;

typedef struct Stack
{
    STDataType* _a;
    int _top;//The index at the top of the stack
    int _capacity;
}Stack;

//Initializes the stack
void StackInit(Stack* pst);

//Destorys the stack
void StackDestroy(Stack* pst);

//Push an element onto the stack
void StackPush(Stack* pst,STDataType x);

//Pop an element from the stack
void StackPop(Stack* pst);

//Get the size of the stack
int StackSize(Stack* pst);

//Judges if the stack is empty 
//return 1 if empty,otherwise return 0 
int StackEmpty(Stack* pst);

//Get the data from the top of the stack
STDataType StackTop(Stack* pst);



typedef int QDataType;

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