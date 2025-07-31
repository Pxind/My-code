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
