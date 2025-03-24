#ifndef __STACK_INNER__H__
#define __STACK_INNER__H__

#include "stack.h"

#include <memory>

namespace HelloAlgo {
class ListNode {
public:
    ListNode() = default;
    ListNode(int value, ListNode* next): m_value(value), m_next(next) {}

    int m_value;
    ListNode *m_next;
};

class LinkListStackInner : public Stack {
private:
    std::shared_ptr<ListNode> m_stackTop;
    int m_stackSize;

public:
    LinkListStackInner();
    ~LinkListStackInner();

    void push(int value) final;
    int pop() final;
    int peek() final;
    bool isEmpty() final;
    int size() final;
    void clear() final;
    void print() final;
};

};

#endif

