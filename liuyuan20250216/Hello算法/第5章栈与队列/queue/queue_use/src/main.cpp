#include <iostream>
#include <queue>

int main()
{

    std::cout << "Hello, World!" << std::endl;
    
    std::queue<int> my_queue;

    for(int i = 1; i < 10; i++) {
        my_queue.push(i);
    }

    // 访问队尾元素
    std::cout << "队尾元素: " << my_queue.back() << std::endl;

    // 打印队列大小
    std::cout << "队列大小: " << my_queue.size() << std::endl;

    // 检查队列是否为空
    if (my_queue.empty()) {
        std::cout << "队列为空" << std::endl;
    } else {
        std::cout << "队列不为空" << std::endl;
    }

    while(!my_queue.empty()) {
        int val = my_queue.front();
        std::cout << val << " ";
        my_queue.pop();
    }
    std::cout << std::endl;

    return 0;
}
