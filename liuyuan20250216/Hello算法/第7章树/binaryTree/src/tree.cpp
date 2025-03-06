#include "tree.h"

/*void initTree(treeNode *node, int lenght)
{
    for (int i = 1; i < lenght; i++) {
        treeNode *n1 = new treeNode(lenght);
    }
}*/

// 递归释放内存（析构函数辅助）
void BinaryTree::clear(treeNode* node)
{
    if (node) {
        clear(node->left);   // 递归释放左子树
        clear(node->right);  // 递归释放右子树
        delete node;         // 删除当前节点
    }
}

// 递归插入节点（二叉搜索树规则）
treeNode* BinaryTree::insertRecursive(treeNode* node, int val)
{
    if (!node) {
        return new treeNode(val);  // 创建新节点
    }
    if (val < node->val) {
        node->left = insertRecursive(node->left, val);  // 插入左子树
    } else if (val > node->val) {
        node->right = insertRecursive(node->right, val); // 插入右子树
    }
    return node;  // 返回当前节点指针
}

// 前序遍历（根 -> 左 -> 右）
void BinaryTree::preOrder(treeNode* node)
{
    if (node) {
        std::cout << node->val << " ";  // 访问根节点
        preOrder(node->left);            // 遍历左子树
        preOrder(node->right);           // 遍历右子树
    }
}

 // 中序遍历（左 -> 根 -> 右）
 void BinaryTree::inOrder(treeNode* node)
 {
    if (node) {
        inOrder(node->left);            // 遍历左子树
        std::cout << node->val << " ";  // 访问根节点
        inOrder(node->right);           // 遍历右子树
    }
}

// 后序遍历（左 -> 右 -> 根）
void BinaryTree::postOrder(treeNode* node)
{
    if (node) {
        postOrder(node->left);          // 遍历左子树
        postOrder(node->right);         // 遍历右子树
        std::cout << node->val << " ";  // 访问根节点
    }
}




// 插入新节点（外部接口）
void BinaryTree::insert(int val)
{
    root = insertRecursive(root, val);
}

// 遍历方法（外部接口）
void BinaryTree::printPreOrder()
{
    std::cout << "前序遍历: ";
    preOrder(root);
    std::cout << std::endl;
}

void BinaryTree::printInOrder()
{
    std::cout << "中序遍历: ";
    inOrder(root);
    std::cout << std::endl;
}

void BinaryTree::printPostOrder()
{
    std::cout << "后序遍历: ";
    postOrder(root);
    std::cout << std::endl;
}