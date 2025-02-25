#include <iostream>
using namespace std;

/* 在数组的索引 index 处插入元素 num */
void insert(int *nums, int size, int num, int index) {
    // 把索引 index 以及之后的所有元素向后移动一位
    for (int i = size - 1; i > index; i--) {
        nums[i] = nums[i - 1];
    }
    // 将 num 赋给 index 处的元素
    nums[index] = num;
}

/* 删除索引 index 处的元素 */
void remove(int *nums, int size, int index) {
    // 把索引 index 之后的所有元素向前移动一位
    for (int i = index; i < size - 1; i++) {
        nums[i] = nums[i + 1];
    }
}

/* 在数组中查找指定元素 */
int findIdex(int *nums, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (nums[i] == target){
            cout << "got it !!!!! " << endl;
            return i;
        }
    }
    cout << "not found !!!!" << endl;

    return 0;
}

/* 扩展数组长度 */
int *extend(int *nums, int size, int enlarge) {
    // 初始化一个扩展长度后的数组
    int *res = new int[size + enlarge];
    // 将原数组中的所有元素复制到新数组
    for (int i = 0; i < size; i++) {
        res[i] = nums[i];
    }

    return res;
}

// 遍历数组
int getArry(int length, int *arr)
{
    for(int i = 0; i < length; ++i){
        cout << arr[i] << " " << endl;
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    // cout << length << " " << endl;
    findIdex(arr, length, 7);
    insert(arr, length, 6, 2);
    getArry(length, arr);
    cout << "*************** " << endl;
    remove(arr, length, 3);
    getArry(length, arr);

    cout << "====================" << endl;
    int enlarge = 5;
    int *new_nums = extend(arr, length, enlarge);

    if (new_nums == NULL) {
        return 1;  // 内存分配失败，退出程序
    }
    int length_now = length + enlarge;
    cout << length_now << " " << endl;

    // 释放新数组内存
    delete[] new_nums;

    return 0;
}

