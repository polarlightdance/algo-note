#include "stack.h"

void use_stack::pushStack(int num, std::stack<int>& i_stack)
{
    for(int i = 0; i < num; i++) {
        i_stack.push(i);  // 入栈
    }
}

void use_stack::getStack(std::stack<int>& i_stack)
{
    while(!i_stack.empty()) {
        std::cout << i_stack.top() << " ";
        i_stack.pop();  // 移除栈顶元素,出栈
    }
    std::cout <<std::endl;
}

void use_stack::getSize(std::stack<int>& i_stack)
{
    stack_size = i_stack.size();
    std::cout << "stack size is: " << stack_size << std::endl;
}