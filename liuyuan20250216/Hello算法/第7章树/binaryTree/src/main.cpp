#include "tree.h"

int main()
{
    treeNode *node1 = new treeNode(1);
    treeNode *node2 = new treeNode(2);
    treeNode *node3 = new treeNode(3);
    treeNode *node4 = new treeNode(4);
    treeNode *node5 = new treeNode(5);
    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;
    
    treeNode *p;
    node1->left = p;
    p->left = node2;
    

    return 0;
}