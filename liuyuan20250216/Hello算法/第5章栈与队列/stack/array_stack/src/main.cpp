#include "common.h"

int main()
{
    arrayStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "栈的大小: " << stack.size() << std::endl;
    std::cout << "栈顶元素: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "弹出一个元素后, 栈顶元素: " << stack.top() << std::endl;

    std::vector<int> arr = stack.toVector();
    std::cout << "栈中元素为: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}