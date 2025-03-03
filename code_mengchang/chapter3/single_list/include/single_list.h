#ifndef __SINGLE_LIST_H__
#define __SINGLE_LIST_H__

#include <memory>

namespace HelloAlgo {

typedef struct SingleListNode {
    int value;
    std::shared_ptr<SingleListNode> next;
} SingleListNode;

class SingleList {

public:

    SingleList();
    ~SingleList();

    int addNode(int value);
    int removeNode(int value);
    int setNode(int oldValue, int newValue);
    std::shared_ptr<SingleListNode> searchNode(int value);

    void print();
protected:
    std::shared_ptr<SingleListNode> createNode();

private:
    std::shared_ptr<SingleListNode> m_listHead;
};

};

#endif