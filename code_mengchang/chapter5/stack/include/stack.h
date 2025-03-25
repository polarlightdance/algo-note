#ifndef __STACK_INNER__H__
#define __STACK_INNER__H__

#include <memory>

namespace HelloAlgo {
class ListNode {
public:
    ListNode() = default;
    ListNode(int value, ListNode* next): m_value(value), m_next(next) {}

    int m_value;
    ListNode *m_next;
};

class LinkListStack {
private:
    std::shared_ptr<ListNode> m_stackTop;
    int m_stackSize;

public:
    LinkListStack();
    ~LinkListStack();

    void push(int value);
    int pop();
    int peek();
    bool isEmpty();
    int size();
    void clear();
    void print();
};

};

#endif

