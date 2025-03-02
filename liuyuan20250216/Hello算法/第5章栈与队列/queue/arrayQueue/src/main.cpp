#include "arrayQueue.h"

int main()
{
    arrayQueue myQueue(5);  //指定队列的容量（即队列可以存储的最大元素数量）
    std::vector<int> elements;

    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    
    elements = myQueue.toVector();
    // 打印队列中的元素
    std::cout << "队列中的元素: ";
    for (int num : elements) {
        std::cout << num << " ";
    }

    // 访问队首元素
    std::cout << "队首元素: " << myQueue.peek() << std::endl;

    // 出队操作
    std::cout << "出队元素: " << myQueue.pop() << std::endl;

    std::cout << "队列中的元素: ";
    for (int num : elements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    return 0;
}
