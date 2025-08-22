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

    BinaryTreeLevelOrder(A);
    return 0;   
}