# 键值对的结构

C++ 中的关联容器（如 std::map 或 std::unordered_map）存储的元素类型是 std::pair<const Key, Value>，其中：
 - first：键（Key），类型为 const Key（不可修改）
 - second：值（Value），类型为 Value（可修改）

# 哈希表

1. 哈希表(hash table),又称散列表,它通过建立键key与值value之间的映射,实现高效的元素查询.具体而言,我们向哈希表中输入一个键key,则可以在O(1)时间内获取对应的值value. ***在哈希表中进行增删查改的时间复杂度都是O(1) ***  
2. 它在以下场景中非常有用：
    - 快速查找：如字典、缓存系统。
    - 去重统计：如统计单词频率。
    - 映射关系：如存储用户ID到用户信息的映射。

## 哈希表常用操作

- 哈希表的常见操作包括：初始化、查询操作、添加键值对和删除键值对等

- 头文件
    `#include <unordered_map>`
-  声明与初始化
    `std::unordered_map<std::string, int> myHashMap;`
- 插入元素

|  函数  |  作用  |  示例代码  |  说明  |
|:--------|:--------:|:--------:|:--------:|
|  operator[]  |  通过键插入/修改值（键不存在时自动插入默认值）  |  map["key"] = value;	若键不存在，会插入默认值（如 int 默认是 0）  |
|  insert()  |  插入键值对（若键已存在，则不覆盖）  |  map.insert({"key", value});  |  返回一个 pair<iterator, bool>，bool 表示是否插入成功  |
|  emplace()  |  原地构造键值对（高效插入）  |  map.emplace("key", value);  |  性能优于 insert，避免临时对象拷贝（C++11 特性）  |

    ```cpp
    myHashMap["orange"] = 1;  // 直接赋值插入
    myHashMap.insert({"apple", 2});  // 使用insert方法插入
    myHashMap.emplace("banana", 3);  // 使用emplace方法插入; 高效插入（C++11）
    ```

- 访问元素

|  函数  |  作用  |  示例代码  |  说明  |
|:--------|:--------:|:--------:|:--------:|
|  operator[]  |  通过键访问值（键不存在时自动插入默认值）  |  int val = map["key"];  |  慎用：若键不存在会隐式插入默认值，可能引发逻辑错误  |
|  at()  |  通过键访问值（键不存在时抛出异常）  |  int val = map.at("key");  |  安全访问，但需处理异常  |
|  find()  |  查找键是否存在，返回迭代器  |  auto it = map.find("key");  |  若未找到返回 end()  |
|  count()  |  统计键是否存在（返回 0 或 1）  |  if (map.count("key") > 0) { ... }  |  适合快速检查键是否存在  |

    ```cpp
    std::string key = "greap";
    auto it = myHashMap.find(greap);  // 查找元素
    if (it !=myHashMap.end()) {
        std::cout << "greap" << "出现的次数：" << it->second << std::endl;
    }
    else {
        std::cout << "greap" << "未出现" << std::endl;
    }
    /*
    it->first 和 it->second 的作用：
    it->first：获取当前迭代器 it 指向的元素的 键。
    it->second：获取当前迭代器 it 指向的元素的 值。
    */
    ```

- 删除元素

|  函数  |  作用  |  示例代码  |  说明  |
|:--------|:--------:|:--------:|:--------:|
|  erase()  |  删除指定键或迭代器指向的元素  |  map.erase("key");  |  返回删除的元素数量（0 或 1）  |
|  clear()  |  清空所有元素  |  map.clear();  |	哈希表变为空  |

    ```cpp
    myHashMap.erase("apple"); // 删除元素
    myHashMap.clear(); // 清空所有元素
    ```
- 遍历哈希表

|  函数  |  作用  |  示例代码  |  说明  |
|:--------|:--------:|:--------:|:--------:|
|  范围 for 循环  |  遍历所有键值对  |  for (const auto& pair : map) { ... }  |  pair.first 是键，pair.second 是值  |
|  迭代器  |  通过迭代器遍历  |  for (auto it = map.begin(); it != map.end(); ++it) { ... }  |   可配合 begin() 和 end() 使用  |

    ```cpp
    for(const auto& pair: myHashMap) {  // 遍历哈希表
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
    ```
- 其他操作

|  函数  |  作用  |  示例代码  |  说明  |
|:--------|:--------:|:--------:|:--------:|
|  ize()  |  返回元素数量  |  int num = map.size();  |	空表返回 0  |
|  empty()  |  检查哈希表是否为空  |  if (map.empty()) { ... }  |  等价于 size() == 0  |

 1. 判断是否为空
   `myHashMap.empty()`
 2. 获取元素数量
   `myHashMap.size(); `


## 哈希表的底层原理

 1. 哈希函数：将键转换为桶的索引（如对字符串计算哈希值）。（数组中的每个空位称为桶（bucket））
 2. 冲突解决：C++ 使用开链法（Separate Chaining），每个桶是一个链表，存储哈希冲突的键值对。

## 注意事项
 1. 键的唯一性：每个键只能对应一个值。
 2. 哈希函数质量：差的哈希函数会导致冲突增多，降低性能。
 3. 自定义键类型：若键为自定义类，需提供哈希函数和相等比较器（重载 operator==）。

 ## 适用场景
 1. 需要快速查找、插入和删除。
 2. 不关心元素顺序。
 3. 数据量较大且内存充足。


