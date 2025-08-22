#include "BinaryTree.h"

int Max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

void PostOrder(BTNode* root)
{
    if(root == NULL)
    {
        printf("NULL ");
        return ;
    }
    PostOrder(root->_left);
    PostOrder(root->_right);
    printf("%c ",root->_data);
}

void InfixOrder(BTNode* root)
{
    if(root == NULL)
    {
        printf("NULL ");
        return ;
    }
    InfixOrder(root->_left);
    printf("%c ",root->_data);
    InfixOrder(root->_right);
}

void PrevOrder(BTNode* root)
{
    if(root == NULL)
    {
        printf("NULL ");
        return ;
    }
    printf("%c ",root->_data);
    PrevOrder(root->_left);
    PrevOrder(root->_right);
}

int TreeSize(BTNode* root)
{
    if(root==NULL)
        return 0;
    else
        return 1+TreeSize(root->_left)+TreeSize(root->_right);

}

int TreeLeafSize(BTNode* root)
{
    if(root==NULL)
        return 0;
    else if(root->_left==NULL&&root->_right==NULL)
        return 1;
    else
        return TreeLeafSize(root->_left)+TreeLeafSize(root->_right);
}

int TreeDepth(BTNode* root)
{
    if(root==NULL)
        return 0;
    else
        return 1+Max(TreeDepth(root->_left),TreeDepth(root->_right));
}

BTNode* CreateNode(char x)
{
    BTNode* node = (BTNode*)malloc(sizeof(BTNode));
    node->_data = x;
    node->_left = NULL;
    node->_right = NULL;

    return node;
}

int BinaryTreeLevelKSize(BTNode* root,int k)
{
    if(root==NULL)
        return 0;
    

    if(k==1)
        return 1;
    else
        return BinaryTreeLevelKSize(root->_left,k-1)+BinaryTreeLevelKSize(root->_right,k-1);
    
}

BTNode* BinaryTreeFind(BTNode* root,BTDataType x)
{
    if(root==NULL)
        return NULL;

    if(root->_data==x)
        return root;

    BTNode* node = BinaryTreeFind(root->_left,x);

    if(node==NULL)
        node = BinaryTreeFind(root->_right,x);
    
    return node;
}

void DestoryBinaryTree(BTNode** proot)
{
    if(*proot==NULL)
        return;
    
    DestoryBinaryTree(&(*proot)->_left);
    DestoryBinaryTree(&(*proot)->_right);
    
    free(*proot);
}

//Queue
void BinaryTreeLevelOrder(BTNode* root)
{
    struct Queue newQueue;

    QueueInit(&newQueue);

    if(root == NULL)
        return ;
    
    QueuePush(&newQueue,root);

    while(!QueueEmpty(&newQueue))
    {
        BTNode* front = QueueFront(&newQueue);
        QueuePop(&newQueue);
        printf("%c ",front->_data);

        if(front->_left)
            QueuePush(&newQueue,front->_left);

         if(front->_right)
            QueuePush(&newQueue,front->_right);
    }
    printf("\n");
}

int IsCompleteBinaryTree(BTNode* root)
{
    if(root == NULL)
        return 1;
    
    Queue newQueue;
    QueueInit(&newQueue);
    QueuePush(&newQueue, root);

    while(!QueueEmpty(&newQueue))
    {
        BTNode* front = QueueFront(&newQueue);
        QueuePop(&newQueue);
        if(front == NULL)
            break;
        
        QueuePush(&newQueue, front->_left);
        QueuePush(&newQueue, front->_right);
    }

    while(!QueueEmpty(&newQueue))
    {
        BTNode* front = QueueFront(&newQueue);
        QueuePop(&newQueue);

        if(front != NULL)
        {
            return 0;
            QueueDestroy(&newQueue);
        }
    }

    QueueDestroy(&newQueue);
    return 1;
}