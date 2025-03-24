#include "stack.h"

#include <memory>

int main()
{
    std::shared_ptr<HelloAlgo::Stack> stack = std::dynamic_pointer_cast(std::make_shared<HelloAlgo::LinkListStackInner>());
    stack->push(1);

    stack->print();

    return 0;
}

