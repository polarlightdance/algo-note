#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include <iostream>
#include <vector>

struct linkNode
{
    int val;
    linkNode *next;

    linkNode(int x) : val(x), next(nullptr) {}  // 构造函数
};

class linkedList_stack {
    public:
    linkedList_stack() {
        stackTop = nullptr;
        stackSize = 0;
    }

    ~linkedList_stack() {
        // 遍历链表删除节点，释放内存
        while (stackTop != nullptr) {
            linkNode *tmp = stackTop;
            stackTop = stackTop->next;
            delete tmp;
        }
    }

    /* 获取栈的长度 */
    int size();
    /* 判断栈是否为空 */
    bool isEmpty();
    /* 入栈 */
    void push(int num);
    /* 访问栈顶元素 */
    int top();
    /* 出栈 */
    int pop();
    /* 将 List 转化为 Array 并返回 */
    std::vector<int> toVector();

    private:
    linkNode *stackTop; // 将头节点作为栈顶
    int stackSize;  // 栈的大小
};

#endif