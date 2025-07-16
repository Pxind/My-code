#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//The elements in the heap are arranged in ascending order(ÉýÐò)
typedef int HPDataType;

typedef struct Heap
{
    HPDataType* _a;
    int _size;
    int _capacity;
}Heap;

//Swap the place of two elements
void Swap(HPDataType* x,HPDataType* y);

//Adjust to descending order
void AdjustDown(HPDataType* a,int n,int root);

//Initialize the heap
void HeapInit(Heap* php,HPDataType*a,int n);

//Destory the heap
void HeapDestory(Heap* php);

//Push an element to the heap
void HeapPush(Heap* php,HPDataType x);

//Pop the root element from the heap
void HeapPop(Heap* php);

//Get the top element in the heap
HPDataType HeapTop(Heap* php);