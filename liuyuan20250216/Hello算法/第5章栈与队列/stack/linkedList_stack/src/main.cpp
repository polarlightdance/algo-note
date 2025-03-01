#include "linkedStack.h"

int main()
{
    linkedList_stack stack;
    std::vector<int> my_stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    std::cout << "栈长度为： " << stack.size() << std::endl;
    std::cout << "栈顶元素为： " << stack.top() << std::endl;

    my_stack = stack.toVector();
    std::cout << "栈中元素: ";
    for (int num : my_stack) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    stack.pop();
    std::cout << "栈长度为： " << stack.size() << std::endl;
    std::cout << "出栈后，栈顶元素为： " << stack.top() << std::endl;

    std::cout << "栈中元素: ";
    for (int num : my_stack) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}