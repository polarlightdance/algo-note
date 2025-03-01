#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::stack<int> l_stack;

    for(int i = 0; i < 10; i++) {
        // === 入栈 ===
        l_stack.push(i); // 入栈
    }

    std::cout << "栈内元素为 " << l_stack.size() << "个"<< std::endl;  // 返回栈内元素的个数

    while(!l_stack.empty()) {  // 检测栈内是否为空，空为真
        // === 出栈 ===
        std::cout << l_stack.top() << std::endl;  // 取得栈顶元素
        l_stack.pop();  // 移除栈顶元素,出栈
    }

    return 0;
}