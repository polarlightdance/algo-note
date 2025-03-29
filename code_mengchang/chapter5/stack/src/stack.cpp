#include "stack.h"

#include <iostream>

namespace HelloAlgo {

LinkListStack::LinkListStack()
{
    m_stackTop = std::make_shared<ListNode>();
    m_stackTop->m_value = 0;
    m_stackTop->m_next = nullptr;

    m_stackSize = 0;
}

void LinkListStack::push(int value)
{
    m_stackTop->m_next = new ListNode(value, m_stackTop->m_next);
    m_stackSize++;
}

int LinkListStack::pop()
{
    if (isEmpty()) {
        return -1;
    }

    auto temp = m_stackTop->m_next;
    m_stackTop->m_next = temp->m_next;
    int value = temp->m_value;
    delete temp;

    m_stackSize--;
    return value;
}

int LinkListStack::peek()
{
    if (isEmpty()) {
        return -1;
    }

    return m_stackTop->m_next->m_value;
}

int LinkListStack::size()
{
    return m_stackSize;
}

bool LinkListStack::isEmpty()
{
    return m_stackSize == 0;
}

void LinkListStack::print()
{
    for (auto temp = m_stackTop->m_next; temp != nullptr; temp = temp->m_next) {
        std::cout << temp->m_value << " ";
    }
    std::cout << std::endl;
}

void LinkListStack::clear()
{
    while (m_stackTop->m_next != nullptr) {
        auto temp = m_stackTop->m_next;
        m_stackTop->m_next = temp->m_next;
        delete temp;
    }

    m_stackSize = 0;
}

LinkListStack::~LinkListStack()
{
    clear();
}

};
