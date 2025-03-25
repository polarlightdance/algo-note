#include "stack.h"

#include <memory>

int main()
{
    std::shared_ptr<HelloAlgo::LinkListStack> stack = std::make_shared<HelloAlgo::LinkListStack>();
    stack->push(1);

    stack->print();

    return 0;
}

