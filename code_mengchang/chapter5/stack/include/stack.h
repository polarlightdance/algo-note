#ifndef __STACK_H__
#define __STACK_H__

namespace HelloAlgo {
class LinkListStackInner;

class Stack {
public:
    Stack() = default;
    virtual ~Stack() = default;

    virtual void push(int value) = 0;
    virtual int pop() = 0;
    virtual int peek() = 0;

    virtual int size() = 0;
    virtual bool isEmpty() = 0;
    virtual void print() = 0;
    virtual void clear() = 0;
};
};


#endif