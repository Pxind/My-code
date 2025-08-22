#include<stdio.h>
#include<stdlib.h>
#include "Queue.h"

typedef char BTDataType;

typedef struct BinaryTree
{
    BTDataType _data;
    struct BinaryTree* _left;
    struct BinaryTree* _right;
}BTNode;

//Get the size of the tree
int TreeSize(BTNode* root);

//Create a new node
BTNode* CreateNode(char x);

//Prev order(print)
void PrevOrder(BTNode* root);

//Infix order(print)
void InfixOrder(BTNode* root);

//Post order(print)
void PostOrder(BTNode* root);

//Get the number of leaf-node
int TreeLeafSize(BTNode* root);

//Get the depth of a binary tree.
int TreeDepth(BTNode* root);

//Get the number of nodes at the KTH level of the binary tree
int BinaryTreeLevelKSize(BTNode* root,int k);

//Find the node which value is 'x'
BTNode* BinaryTreeFind(BTNode* root,BTDataType x);

//Destory a tree
void DestoryBinaryTree(BTNode** proot);

//Level order(print)
void BinaryTreeLevelOrder(BTNode* root);

//Juedge if the binary tree is complete
int IsCompleteBinaryTree(BTNode* root);