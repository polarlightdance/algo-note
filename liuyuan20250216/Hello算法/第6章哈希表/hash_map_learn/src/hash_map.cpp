#include "hashMap.h"

void findHash(std::unordered_map<std::string, int>& findData, std::string key)
{
    auto it = findData.find(key);
    if (it !=findData.end()) {
        std::cout << key << "出现的次数：" << it->second << std::endl;
    }
    else {
        std::cout << key << "未出现" << std::endl;
    }
}

void getHash(std::unordered_map<std::string, int>& findData)
{
    std::cout << "----- 遍历哈希表 -----"<< std::endl;
    for(const auto& pair: findData) {  // 遍历哈希表
        std::cout << pair.first << " : " << pair.second << "; ";
    }
    std::cout << std::endl;
}