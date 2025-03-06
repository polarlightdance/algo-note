#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>
#include <vector>

struct treeNode{
    int val;          // 节点值
    treeNode *left;   // 左子节点指针
    treeNode *right;  // 右子节点指针
    treeNode(int x) : val(x), left(nullptr), right(nullptr) }{}
};

class BinaryTree {
private:
    treeNode* root;  // 根节点指针

    // 递归释放内存（析构函数辅助）
    void clear(treeNode* node);
    // 递归插入节点（二叉搜索树规则）
    treeNode* insertRecursive(treeNode* node, int val);
    // 前序遍历（根 -> 左 -> 右）
    void preOrder(treeNode* node);
    // 中序遍历（左 -> 根 -> 右）
    void inOrder(treeNode* node);
    // 后序遍历（左 -> 右 -> 根）
    void postOrder(treeNode* node);
    
public:
    BinaryTree() : root(nullptr) {}  // 构造函数初始化根节点为空
    ~BinaryTree() { clear(root); }   // 析构函数释放内存
    // 插入新节点（外部接口）
    void insert(int val);
    // 遍历方法（外部接口）
    void printPreOrder();
    void printInOrder();
    void printPostOrder();
};

 // void initTree(treeNode *node, int lenght);

#endif
