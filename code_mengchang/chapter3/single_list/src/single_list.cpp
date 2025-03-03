#include "single_list.h"

#include <iostream>

namespace HelloAlgo {

SingleList::SingleList() {
    m_listHead = std::make_shared<SingleListNode>();
    m_listHead->value = 0;
    m_listHead->next = nullptr;
}

SingleList::~SingleList() {
    m_listHead = nullptr;
}

std::shared_ptr<SingleListNode> SingleList::createNode()
{
    try {
        return std::make_shared<SingleListNode>();
    } catch (std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
        return nullptr;
    } catch (...) {
        std::cerr << "Unknown exception occurred." << std::endl;
        return nullptr;
    }
}

int SingleList::addNode(int value)
{
    std::shared_ptr<SingleListNode> node = createNode();
    if (node == nullptr) {
        return -1;
    }
    node->value = value;
    node->next = m_listHead->next;
    m_listHead->next = node;
    return 0;
}

int SingleList::removeNode(int value)
{
    std::shared_ptr<SingleListNode> node = m_listHead;
    while (node->next != nullptr) {
        if (node->next->value == value) {
            node->next = node->next->next;
            return 0;
        }
        node = node->next;
    }
    return -1;
}

int SingleList::setNode(int oldValue, int newValue)
{
    std::shared_ptr<SingleListNode> node = m_listHead;
    while (node->next != nullptr) {
        if (node->next->value == oldValue) {
            node->next->value = newValue;
            return 0;
        }
        node = node->next;
    }
    return -1;
}

std::shared_ptr<SingleListNode> SingleList::searchNode(int value)
{
    std::shared_ptr<SingleListNode> node = m_listHead;
    while (node->next != nullptr) {
        if (node->next->value == value) {
            return node->next;
        }
        node = node->next;
    }
    return nullptr;
}

void SingleList::print()
{
    std::shared_ptr<SingleListNode> node = m_listHead;
    while (node->next != nullptr) {
        std::cout << node->next->value << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

}
