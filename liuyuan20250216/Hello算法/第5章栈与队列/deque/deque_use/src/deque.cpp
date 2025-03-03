#include "deque.h"

int main()
{
    deque<int> myDeque;

    myDeque.push_back(10);  // 队尾插入
    myDeque.push_back(20);
    myDeque.push_back(30);

    myDeque.push_front(9);  // 队首插入
    cout << "myDeque size is: " << myDeque.size() << endl;

    cout << "myDeque data is: ";
    for(int data : myDeque)
    {
        cout << data << " ";
    }
    cout << endl;

    myDeque.pop_front(); // 队首删除
    myDeque.pop_back();  // 队尾删除

    cout << "after pop myDeque data is: ";
    for(int data : myDeque)
    {
        cout << data << " ";
    }
    cout << endl;

    if (myDeque.empty()) {
        cout << "myDeque is empty" << endl;
    } else {
        cout << "myDeque is not empty" << endl;
    }

    cout << "myDeque size is: " << myDeque.size() << endl;

    return 0;
}