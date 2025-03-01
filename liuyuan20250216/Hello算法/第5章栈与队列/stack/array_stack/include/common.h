#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <vector>

/* 基于数组实现的栈 */
class arrayStack{
    public:
      /* 获取栈的长度 */
      int size();
      /* 判断栈是否为空 */
      bool isEmpty();
  
      /* 入栈 */
      void push(int num);
  
      /* 出栈 */
      int pop();
  
      /* 访问栈顶元素 */
      int top();
  
      /* 返回 Vector */
      std::vector<int> toVector();
    private:
      std::vector<int> stack;
  };

#endif