#include<stdio.h>
#include<stdlib.h>

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

