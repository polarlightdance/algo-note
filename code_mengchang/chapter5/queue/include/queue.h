#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <memory>

namespace HelloAlgo {

class QueueNode {

public:
    int m_data;
    QueueNode *m_next;

    QueueNode(int data, QueueNode *front) {
        m_data = data;
        if (front) {
            front->m_next = this;
        }
        m_next = nullptr;
    }
};

class Queue {
public:
    Queue();
    ~Queue();

    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    int size();
    void print();
    void clear();

private:
    int m_size;
    std::shared_ptr<QueueNode> m_front;
    QueueNode* m_back;
};

};

#endif