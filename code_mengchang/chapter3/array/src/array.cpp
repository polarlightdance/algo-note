#include "array.h"

#include <iostream>

namespace HelloAlgo {

Array::Array() : m_size(0), m_capacity(INITIAL_CAPACITY)
{
    m_data = std::shared_ptr<int[]>(new int[INITIAL_CAPACITY]);
}

void Array::print()
{
    for (int i = 0; i < m_size; ++i) {
        std::cout << m_data[i] << " ";
    }
    std::cout << std::endl;
}

void Array::insert(int index, int value)
{
    if (index < 0 || index > m_size) {
        std::cout << "index out of range" << std::endl;
        return;
    }
    if (m_size == m_capacity) {
        expand();
    }
    for (int i = m_size; i > index; --i) {
        m_data[i] = m_data[i - 1];
    }
    m_data[index] = value;
    ++m_size;
    std::cout << "insert " << value << " at " << index << std::endl;
}

void Array::remove(int index)
{
    if (index < 0 || index >= m_size) {
        std::cout << "index out of range" << std::endl;
        return;
    }
    for (int i = index; i < m_size - 1; ++i) {
        m_data[i] = m_data[i + 1];
    }
    --m_size;
    std::cout << "remove " << m_data[index] << " at " << index << std::endl;
    shrink();
}

int Array::get(int index)
{
    if (index < 0 || index >= m_size) {
        std::cout << "index out of range" << std::endl;
        return -1;
    }
    return m_data[index];
}

int Array::size()
{
    return m_size;
}

int Array::capacity()
{
    return m_capacity;
}

void Array::resize(int newCapacity)
{
    if (newCapacity < m_size) {
        std::cout << "new capacity must be greater than size" << std::endl;
        return;
    }
    m_capacity = newCapacity;
    std::shared_ptr<int[]> newData = std::shared_ptr<int[]>(new int[m_capacity]);
    for (int i = 0; i < m_size; ++i) {
        newData[i] = m_data[i];
    }
    m_data = newData;
    std::cout << "resize " << m_capacity << std::endl;
}

void Array::expand()
{
    if (m_size == m_capacity) {
        resize(m_capacity * 2);
    }
}

void Array::shrink()
{
    if (m_size * 4 <= m_capacity) {
        resize(m_capacity / 2);
    }
    std::cout << "shrink " << m_capacity << std::endl;
}

void Array::clear()
{
    m_size = 0;
    std::cout << "clear" << std::endl;
}

}
