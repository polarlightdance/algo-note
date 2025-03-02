#include "linkedStack.h"

/* 获取栈的长度 */
int linkedList_stack::size()
{
    return stackSize;
}
/* 判断栈是否为空 */
bool linkedList_stack::isEmpty()
{
    /*
    if (size() == 0) {
        return true;
    } else {
        return false;
    }
    */
   //return size() == 0; // 判断栈是否为空
    return stackTop == nullptr;  // stackTop 为空时，栈一定为空  直接判断栈顶指针是否为空
}

/* 入栈 */
void linkedList_stack::push(int num)
{
    linkNode *node = new linkNode(num);
    node->next = stackTop;  // 新节点的next指向栈顶
    stackTop = node;  // 栈顶指针指向新节点
    stackSize++;  // 栈的大小加1
}

/* 访问栈顶元素 */
int linkedList_stack::top()
{
    if (isEmpty()) {
        // throw std::out_of_range("栈为空");
        std::cout << "=== 栈为空 ===" <<std::endl;
        return -1; 
    }
    return stackTop->val;
}

/* 出栈 */
int linkedList_stack::pop()
{
    int num = top();
    linkNode *tmp = stackTop;
    stackTop = stackTop->next;
    // 释放内存
    delete tmp;
    stackSize--;

    return num;
}

/* 将 List 转化为 Array 并返回 (方便用户查看栈中的所有元素，或者将栈的内容以数组的形式传递给其他函数或模块进行处理)*/
std::vector<int> linkedList_stack::toVector()
{
    linkNode *node = stackTop; // 从栈顶开始遍历
    std::vector<int> res(size());  // 创建与栈大小相同的数组
    for (int i = res.size() - 1; i >= 0; i--) {  // 将栈中的元素按顺序存储到 vector 中
        res[i] = node->val; // 将栈中元素存入数组
        node = node->next;   // 移动到下一个节点
    }

    return res;  // 返回数组
}