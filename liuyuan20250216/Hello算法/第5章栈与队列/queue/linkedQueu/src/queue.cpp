#include "queue.h"

/* 获取队列的长度 */
int linkedListQueue::size()
{
    return queSize;
}

/* 判断队列是否为空 */
bool linkedListQueue::isEmpty()
{
    return queSize == 0;
}

/* 入队 */
void linkedListQueue::push(int num)
{
    // 在尾节点后添加 num
    listNode *node = new listNode(num);
    // 如果队列为空，则令头、尾节点都指向该节点
    if (front == nullptr) {
        front = node;
        rear = node;
    }
    // 如果队列不为空，则将该节点添加到尾节点后
    else {
        rear->next = node;
        rear = node;
    }
    queSize++;
}

/* 访问队首元素 */
int linkedListQueue::peek()
{
    if (size() == 0)
        throw std::out_of_range("队列为空");
    return front->val;
}

/* 出队 */
int linkedListQueue::pop()
{
    int num = peek();
    // 删除头节点
    listNode *tmp = front;
    front = front->next;
    // 释放内存
    delete tmp;
    queSize--;
    return num;
}

/* 将链表转化为 Vector 并返回 */
std::vector<int> linkedListQueue::toVector()
{
    listNode *node = front;
    std::vector<int> res(size());
    for (int i = 0; i < res.size(); i++) {
        res[i] = node->val;
        node = node->next;
    }
    return res;
}