#include "single_list.h"

int main()
{
    HelloAlgo::SingleList list;
    list.addNode(1);
    list.print();

    list.setNode(1, 2);
    list.print();

    list.removeNode(2);
    list.print();
    list.searchNode(2);

    return 0;
}