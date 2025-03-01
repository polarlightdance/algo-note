#ifndef STACK_H
#define STACK_H

#include "common.h"

class use_stack {
    public:
    void pushStack(int num, std::stack<int>& i_stack);
    void getStack(std::stack<int>& i_stac);
    void getSize(std::stack<int>& i_stac);

    private:
    std::stack<int> l_stack;
    int stack_size  = 0;
};

#endif