#include "queue.h"

#include <iostream>

int main()
{
    HelloAlgo::Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    std::cout << "Queue size: " << queue.size() << std::endl;

    std::cout << "Dequeue: " << queue.dequeue() << std::endl;
    std::cout << "Dequeue: " << queue.dequeue() << std::endl;

    std::cout << "Queue size: " << queue.size() << std::endl;

    queue.print();

    return 0;
}