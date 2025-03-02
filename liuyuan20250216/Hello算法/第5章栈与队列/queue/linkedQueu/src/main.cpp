#include "queue.h"

int main()
{
    linkedListQueue  myQueue;
    std::vector<int> myVector;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);

    std::cout << "queue size is: " << myQueue.size() << std::endl;
    std::cout << "queue top val is: " << myQueue.peek()<< std::endl;
    myVector = myQueue.toVector();

    std::cout << "队列中的元素为: ";
    for(int data : myVector) {
        std::cout << data << " ";
    }
    std::cout << std::endl;

    myQueue.pop();
    std::cout << "queue size is: " << myQueue.size() << std::endl;
    std::cout << "queue top val is: " << myQueue.peek()<< std::endl;

    return 0;
}
