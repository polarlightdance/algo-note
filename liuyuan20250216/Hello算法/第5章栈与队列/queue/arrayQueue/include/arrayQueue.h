#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <iostream>
#include <queue>

/* 基于环形数组实现的队列 */
class arrayQueue {
  private:
    int *nums;       // 用于存储队列元素的数组
    int front;       // 队首指针，指向队首元素
    int queSize;     // 队列长度
    int queCapacity; // 队列容量

  public:
    /* 构造函数 */
    arrayQueue(int capacity) {
        // 初始化数组
        nums = new int[capacity];
        queCapacity = capacity;
        front = queSize = 0;  // 初始时队首指针和队列长度都为 0
    }

    ~arrayQueue() {
        delete[] nums;  // 释放动态分配的数组内存
    }

    /* 获取队列的容量 */
    int capacity();
    /* 获取队列的长度 */
    int size();
    /* 判断队列是否为空 */
    bool isEmpty();
    /* 入队 */
    void push(int num);
    /* 出队 */
    int pop();
    /* 访问队首元素 */
    int peek();
    /* 将数组转化为 Vector 并返回 */
    std::vector<int> toVector();
};
#endif // COMMON_H