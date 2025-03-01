#include "common.h"
#include "stack.h"

int main()
{
    use_stack my_stack;
    std::stack<int> my_stack_data;

    my_stack.pushStack(5, my_stack_data);
    my_stack.getSize(my_stack_data);
    my_stack.getStack(my_stack_data);
    
    return 0;
}