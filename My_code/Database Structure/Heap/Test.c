#include "Heap.h"

//Time complexity is 'N'
void HeapSort(HPDataType* a,int n)
{
    //Creat a heap (A complete binary tree)
    //The left child's index is (2*i+1) and the right child's index is (2*i+2) ('i' is the parent's index)
    
    //Get the last non-leaf node's index ((n-2)/2)
    for(int i = (n-2)/2;i>=0;i--)
        AdjustDown(a,n,i);
    //Heapsort
    int end = n-1;//The last element's index of the heap
    while(end>0)
    {
        Swap(a,a+end);
        //Because both the left child heap and the right child heap are the min-heaps,only making one downward adjustment is sufficient
        AdjustDown(a,end,0); 
        end--;
    }
}

int main()
{
    int a[] = {27,15,19,18,28,34,65,49,25,37};
    Heap hp;

    //HeapSort(a,sizeof(a)/sizeof(HPDataType));

    HeapInit(&hp,a,sizeof(a)/sizeof(HPDataType));
    HeapPush(&hp,13);
    int breakpoint = 0;
    HeapDestory(&hp);
    return 0;
}