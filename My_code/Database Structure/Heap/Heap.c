#include "Heap.h"

void Swap(HPDataType* x,HPDataType* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BuyMemory(Heap* php)
{
    int* a = (int*)realloc(php->_a,sizeof(HPDataType)*2*(php->_capacity));
    if(a==NULL)
    {
        printf("Memory is not enough!");
        assert(a);
        return ;
    }
    php->_a = a;
    (php->_capacity)*=2;
}

void AdjustUp(HPDataType* a,int n,int child)
{
    int parent = (child-1)/2;
    while (child-1>=0)
    {
        if(a[child]<a[parent])
        {
            Swap(a+child,a+parent);
            child = parent;
            parent = (child-1)/2;
        }
        else
            break;
    }
}

//Requirment:both the left and right subtrees to be adjusted are min-heaps
void AdjustDown(HPDataType* a,int n,int root)
{
    //Find the small one
    int parent = root;
    int child = (parent*2) + 1;//the left child;
    while(child < n)
    {
        //Make the child with the index "child" is the small one
        if(a[child]>a[child+1]&&child+1<n)
            child++;
        
        if(a[child] < a[parent])
        {
            Swap(a+child,a+parent);

            parent = child;
            child = (parent*2) + 1;
        }
        else
            break;
    }
}

void HeapInit(Heap* php,HPDataType* a,int n)
{
    php->_a = (HPDataType*)malloc(sizeof(HPDataType)*n);
    if(php->_a == NULL)
    {
        printf("Memory is not enough!");
        assert(php->_a);
        return ;
    }

    //Attention£ºThe third parameter of ¡®memcpy¡¯ is the number of bytes rather than the number of elements
    memcpy(php->_a,a,n*sizeof(HPDataType));
    php->_size = n;
    php->_capacity = n;

    int i = (n-2)/2;//Get the last non-leaf node's index
    while(i>=0)
    {
        AdjustDown(php->_a,n,i);
        i--;
    }
}

void HeapDestory(Heap* php)
{
    assert(php);
    free(php->_a);
    php->_a = NULL;
    php->_capacity = 0;
    php->_size = 0;
}

void HeapPush(Heap* php,HPDataType x)
{
    assert(php);

    if(php->_size == php->_capacity)
        BuyMemory(php);

    php->_a[php->_size++] = x;
    AdjustUp(php->_a,php->_size,php->_size-1);
}

void HeapPop(Heap* php)
{
    assert(php);
    assert(php->_size>0);

    //Swap the position of the root element and the last element
    Swap(php->_a,(php->_a)+(php->_size-1));
    //Pop the last element
    php->_size--;

    //Making one downward adjustment
    AdjustDown(php->_a,php->_size,0);
}

HPDataType HeapTop(Heap* php)
{
    assert(php);
    assert(php->_size>0);

    return php->_a[0];
}


