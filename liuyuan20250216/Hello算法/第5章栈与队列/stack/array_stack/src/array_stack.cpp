#include "common.h"

/* 获取栈的长度 */
int arrayStack::size()
{
    return stack.size();
}

/* 判断栈是否为空 */
bool arrayStack::isEmpty()
{
    return stack.size() == 0;
}

/* 入栈 */
void arrayStack::push(int num)
{
    stack.push_back(num);
}

/* 访问栈顶元素 */
int arrayStack::top()  // // back()是std::vector的成员函数,用于返回容器中最后一个元素的引用.如果容器为空,调用back()会导致未定义行为
{
    if (isEmpty()) {
        std::cout << "=== 栈为空 ===" << std::endl;
        return -1; 
    }
    return stack.back();  // 返回容器中最后一个元素
}

/* 出栈 */
int arrayStack::pop()
{
    int num = top();
    stack.pop_back();  // 删除最后一个数据
    return num;
}

/* 返回 Vector */
std::vector<int> arrayStack::toVector()
{
    return stack;
}