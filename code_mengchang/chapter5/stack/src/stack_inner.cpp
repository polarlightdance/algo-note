#include "statck_inner.h"

#include <iostream>

namespace HelloAlgo {

LinkListStackInner::LinkListStackInner()
{
    m_stackTop = std::make_shared<ListNode>();
    m_stackTop->m_value = 0;
    m_stackTop->m_next = nullptr;

    m_stackSize = 0;
}

void LinkListStackInner::push(int value)
{
    m_stackTop->m_next = new ListNode(value, m_stackTop->m_next);
    m_stackSize++;
}

int LinkListStackInner::pop()
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

int LinkListStackInner::peek()
{
    if (isEmpty()) {
        return -1;
    }

    return m_stackTop->m_next->m_value;
}

int LinkListStackInner::size()
{
    return m_stackSize;
}

bool LinkListStackInner::isEmpty()
{
    return m_stackSize == 0;
}

void LinkListStackInner::print()
{
    for (auto temp = m_stackTop->m_next; temp != nullptr; temp = temp->m_next) {
        std::cout << temp->m_value << " ";
    }
    std::cout << std::endl;
}

void LinkListStackInner::clear()
{
    while (m_stackTop->m_next != nullptr) {
        auto temp = m_stackTop->m_next;
        m_stackTop->m_next = temp->m_next;
        delete temp;
    }

    m_stackSize = 0;
}

LinkListStackInner::~LinkListStackInner()
{
    clear();
}

};
