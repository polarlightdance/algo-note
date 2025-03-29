#include "queue.h"

#include <iostream>

namespace HelloAlgo {

Queue::Queue()
{
    m_size = 0;
    m_front = std::make_shared<QueueNode>(0, nullptr);
    m_back = m_front.get();
}

void Queue::clear()
{
    QueueNode *temp = nullptr;
    while (m_front->m_next) {
        temp = m_front->m_next;
        m_front->m_next = temp->m_next;
        free(temp);
    }
    m_front = nullptr;
}

bool Queue::isEmpty()
{
    return m_size ? false : true;
}

void Queue::enqueue(int data)
{
    QueueNode* node = new QueueNode(data, m_back);
    m_back = node;
    ++m_size;
}

int Queue::dequeue()
{
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
        return -1;
    }
    QueueNode *dequeueNode = m_front->m_next;
    m_front->m_next = dequeueNode->m_next;
    if (m_front->m_next == nullptr) {
        m_back = m_front.get();
    }
    int data = dequeueNode->m_data;
    free(dequeueNode);
    --m_size;
    return data;
}

int Queue::size()
{
    return m_size;
}

void Queue::print()
{
    for (QueueNode *temp = m_front->m_next; temp != nullptr; temp = temp->m_next) {
        std::cout << temp->m_data << " ";
    }
    std::cout << std::endl;
}

Queue::~Queue()
{
    clear();
}

};
