#include "arrayQueue.h"

/* 获取队列的容量 */
int arrayQueue::capacity()
{
    return queCapacity;
}

/* 获取队列的长度 */
int arrayQueue::size()
{
    return queSize;
}

/* 判断队列是否为空 */
bool arrayQueue::isEmpty()
{
    return size() == 0;
}

/* 入队 */
void arrayQueue::push(int num)
{
    if (queSize == queCapacity) {
        std::cout << "队列已满" << std::endl;
        return;
    }
    // 计算队尾指针，指向队尾索引 + 1
    // 通过取余操作实现 rear 越过数组尾部后回到头部
    int rear = (front + queSize) % queCapacity;
    // 将 num 添加至队尾
    nums[rear] = num;
    queSize++;
}

/* 出队 */
int arrayQueue::pop()
{
    int num = peek();
    // 队首指针向后移动一位，若越过尾部，则返回到数组头部
    front = (front + 1) % queCapacity;
    queSize--;
    return num;
}

/* 访问队首元素 */
int arrayQueue::peek()
{
    if (isEmpty())
        throw std::out_of_range("队列为空");
    return nums[front];
}

/* 将数组转化为 Vector 并返回 */
std::vector<int> arrayQueue::toVector()
{
    // 仅转换有效长度范围内的列表元素
    std::vector<int> arr(queSize);
    for (int i = 0, j = front; i < queSize; i++, j++) {
        arr[i] = nums[j % queCapacity];
    }
    return arr;
}