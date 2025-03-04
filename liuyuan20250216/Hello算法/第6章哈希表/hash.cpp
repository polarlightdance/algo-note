#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> scores;

    // 插入元素
    scores["Alice"] = 90;
    scores.emplace("Bob", 85);
    scores.insert({"Charlie", 95});

    // 删除元素
    scores.erase("Bob");

    // 访问元素（安全方式）
    if (scores.count("Alice") > 0) {  // 统计键是否存在（返回 0 或 1）
        std::cout << "Alice 的分数: " << scores.at("Alice") << std::endl;  // 输出 90
    }

    // 遍历哈希表
    std::cout << "所有分数：" << std::endl;
    for (const auto& pair : scores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}