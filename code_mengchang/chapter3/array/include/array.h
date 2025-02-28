#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <memory>

namespace HelloAlgo {

class Array {

public:

    Array();

    ~Array() = default;

    void print();

    void insert(int index, int value);

    void remove(int index);

    int get(int index);

    int size();

    int capacity();

    void resize(int newCapacity);

    void expand();

    void shrink();

    void clear();

private:

    static const int INITIAL_CAPACITY = 10;

    std::shared_ptr<int[]> m_data;

    int m_size;

    int m_capacity;
};

};

#endif