# queue
 - 队列是一种先进先出的数据结构.先进先出（FIFO）：最先插入的元素最先被移除。  
 - 容器适配器：std::queue 是一个适配器，它基于其他容器（如 std::deque 或 std::list）实现。默认情况下，std::queue 使用 std::deque 作为底层容器。你也可以指定其他容器（如 std::list）作为底层容器。  
    ```cpp
    std::queue<int, std::list<int>> myQueue;
    ```

```cpp
    // 头文件
    #include<queue>
    // 定义初始化
    queue<int> q;
```
## 方法函数

|  代码  |  含义  |
|:--------|:--------:|
|  q.front() | 返回队首元素 O(1) |
|  q.back() | 返回队尾元素 |
|  q.push(element) | 尾部添加一个元素element 进队 O(1) |
|  q.pop() | 删除第一个元素 出队O(1) |
|  q.size() | 返回队列中元素个数，返回值类型unsigned int O(1) |
|  q.empty() | 判断是否为空，队列为空，返回true O(1)  |

