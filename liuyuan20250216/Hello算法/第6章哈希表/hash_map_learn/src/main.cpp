#include "hashMap.h"

int main()
{
    std::unordered_map<std::string, int> myHashMap;

    myHashMap["orange"] = 1;  // 直接赋值插入
    myHashMap.insert({"apple", 2});  // 使用insert方法插入
    myHashMap.emplace("banana", 3);  // 使用emplace方法插入; 高效插入（C++11）
    myHashMap.emplace("strawberry", 4);  // 使用emplace方法插入; 高效插入（C++11）
    myHashMap.emplace("watermelon", 5);  // 使用emplace方法插入; 高效插入（C++11）

    if(myHashMap.empty()) {  // 判断是否为空
        std::cout << "----- myHashMap is empty!! -----"<< std::endl;  // 获取元素数量
    }
    else {
        std::cout << "------ myHashMapis not empty!! -----" << std::endl;
        std::cout << "myHashMap size is : "<< myHashMap.size() << std::endl;
    }

    getHash(myHashMap); // 遍历哈希表

    std::cout << "apple 出现的次数：" << myHashMap["apple"] << std::endl;
    std::string key = "greap";
    // findHash(myHashMap, key);
    auto it = myHashMap.find(key);  // 查找元素
    if (it !=myHashMap.end()) {
        std::cout << key << "出现的次数：" << it->second << std::endl;
    }
    else {
        std::cout << key << "未出现" << std::endl;
    }

    myHashMap.erase("apple"); // 删除元素

    getHash(myHashMap); // 遍历哈希表
    myHashMap.clear(); // 清空所有元素
    if(myHashMap.empty()) {  // 判断是否为空
        std::cout << "----- myHashMap is empty!! -----"<< std::endl;  // 获取元素数量
        std::cout << "myHashMap size is : "<< myHashMap.size() << std::endl;
    }
    else {
        std::cout << "------ myHashMapis not empty!! -----" << std::endl;
        std::cout << "myHashMap size is : "<< myHashMap.size() << std::endl;
    }

    return 0;
}