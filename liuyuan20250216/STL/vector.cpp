#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printfVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void printfIterator(vector<int> v)
{
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){  //vi.end()指向尾元素地址的下一个地址
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    cout << "Hello, World!" << endl;
    vector<int> v;                  //定义了一个名为v的一维数组,数组存储int类型数据
    vector<int> v1(5, 1);           // v[0] 到 v[5 - 1]所有的元素初始值均为1
    vector<int> v2{1, 2, 3, 4, 5};  //数组v2中有五个元素，数组长度就为5
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);  //插入元素
    }

    printfVector(v);
    cout << "************" << endl;
    //printfVector(v1);
    printfIterator(v1);
    cout << "************" << endl;
    printfVector(v2);
    cout << "************" << endl;
    cout << v2.front() << endl;
    cout << "************" << endl;
    cout << v2.back() << endl;
    cout << "************" << endl;
    cout << v2.at(3) << endl;
    cout << "************" << endl;
    cout << v2.size() << endl;
    cout << "************" << endl;
    if (v2.empty() == false) { // 为空返回真，反之返回假
        cout << "v2 not empty" << endl;
    }
    v2.push_back(6);
    printfVector(v2);

    vector<string> v4{"liu", "yuan"};
    for (const string str : v4) {
        cout << str <<endl;
    }

    vector<char> v5{'l', 'i', 'u'};
    for (char str : v5) {
        cout << str <<endl;
    }

    return 0;
}