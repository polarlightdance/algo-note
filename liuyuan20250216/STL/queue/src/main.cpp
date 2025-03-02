#include "common.h"

int main()
{
    std::queue<int> myQueue;

    // 向队列中添加元素
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // 访问队首元素
    std::cout << "队首元素: " << myQueue.front() << std::endl;

    // 访问队尾元素
    std::cout << "队尾元素: " << myQueue.back() << std::endl;

    // 打印队列大小
    std::cout << "队列大小: " << myQueue.size() << std::endl;

    // 移除队首元素
    myQueue.pop();
    std::cout << "移除队首元素后，新的队首元素: " << myQueue.front() << std::endl;

    // 检查队列是否为空
    if (myQueue.empty()) {
        std::cout << "队列为空" << std::endl;
    } else {
        std::cout << "队列不为空" << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
