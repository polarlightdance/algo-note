#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <queue>

struct listNode{
  int val;
  listNode *next;
  listNode(int x) : val(x), next(nullptr) {}  // 构造函数
};

/* 基于链表实现的队列 */
class linkedListQueue {
  private:
    listNode *front, *rear; // 头节点 front ，尾节点 rear
    int queSize;

  public:
    linkedListQueue() {
        front = nullptr;
        rear = nullptr;
        queSize = 0;
    }

    ~linkedListQueue() {
        // 遍历链表删除节点，释放内存
        // freeMemoryLinkedList(front);
    }

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
    /* 将链表转化为 Vector 并返回 */
    std::vector<int> toVector();
};
#endif // COMMON_H