#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;



int main()
{

     // 无初始值
    vector<int> arr1;
    // 有初始值
    vector<int> arr2{5, 6, 7, 8};
    cout << "Hello, world!" << endl;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.insert(arr1.begin() + 3, 7);  // 在索引1+3位置插入7
    arr1.erase(arr1.begin() + 2);  // 删除索引2位置的元素
    cout << "size: " << arr1.size() << endl;

    for (int str : arr1) {
        cout << str <<endl;
    }
    cout << "111111111111111" << endl;
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());  // 将arr2的元素插入到arr1的末尾
    for (int str : arr1) {
        cout << str <<endl;
    }

    cout << "222222222222222222" << endl;
    vector<int> arr3{4, 9, 10, 2, 11, 3, 5, 7, 8, 6, 1};
    sort(arr3.begin(), arr3.end());
    for (int str : arr3) {
        cout << str <<endl;
    }

    return 0;
}