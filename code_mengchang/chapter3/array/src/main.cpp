#include "array.h"

int main()
{
    HelloAlgo::Array array;
    array.insert(0, 1);

    array.print();
    array.insert(1, 2);
    array.print();
    array.insert(2, 3);
    array.print();

    array.remove(1);
    array.print();

    return 0;
}