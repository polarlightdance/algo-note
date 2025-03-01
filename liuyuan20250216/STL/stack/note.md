# stack
1. 栈为数据结构的一种，是STL中实现的一个先进后出，后进先出的容器。
    ```cpp
    //头文件需要添加
    #include<stack>

    //声明
    stack<int> s;
    stack<string> s;
    stack<node> s;//node是结构体类型
    ```

2. 方法函数
  |  代码  |  含义  |
  |:--------|:--------|
  |  s.push(ele) |  元素ele入栈，增加元素 O(1)  |
  |  s.pop() |  移除栈顶元素 O(1)  |
  |  s.top() |  取得栈顶元素（但不删除） O(1)  |
  |  s.empty() |  检测栈内是否为空，空为真 O(1)  |
  |  s.size() |  返回栈内元素的个数 O(1)  |

3. 栈遍历
    - 栈只能对栈顶元素进行操作，如果想要进行遍历，只能将栈中元素一个个取出来存在数组中
    ```cpp
    stack<int> st;
    for (int i = 0; i < 10; ++i) st.push(i);
    while (!st.empty()) {
        int tp = st.top(); // 栈顶元素
        st.pop();
    }
    ```
    - 数组模拟栈进行遍历
    通过一个数组对栈进行模拟，一个存放下标的变量top模拟指向栈顶的指针。
    ***特点： 比STL的stack速度更快，遍历元素方便***
    ```cpp
    int s[100]; // 栈 从左至右为栈底到栈顶
    int tt = -1; // tt 代表栈顶指针,初始栈内无元素，tt为-1

    for(int i = 0; i <= 5; ++i) {
        //入栈 
        s[++tt] = i;
    }
    // 出栈
    int top_element = s[tt--]; 

    //入栈操作示意
    //  0  1  2  3  4  5  
    //                tt
    //出栈后示意
    //  0  1  2  3  4 
    //              tt
    ```