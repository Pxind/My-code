#include "BinaryTree.h"

int main()
{
    BTNode *A = CreateNode('A');
    BTNode *B = CreateNode('B');
    BTNode *C = CreateNode('C');
    BTNode *D = CreateNode('D');
    BTNode *E = CreateNode('E');

    A->_left = B;
    A->_right = C;
    B->_left = D;
    B->_right = E;

    PrevOrder(A);
    printf("\n");
    
    InfixOrder(A);
    printf("\n");

    PostOrder(A);
    printf("\n");

    //printf("%d %d",TreeSize(A),TreeSize(B));
    //printf("%d ",TreeLeafSize(A));
    //printf("%d",TreeLeafSize(B));
    printf("%d %d",TreeDepth(A),TreeDepth(B));
    return 0;   
}