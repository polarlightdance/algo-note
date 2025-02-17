#include "head.h"

int main()
{
    int a =50;
    int b = 10;

    printf("a =  %d, b = %d\n", a, b);
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", sub(a, b));
    printf("a * b = %d\n", mult(a, b));
    printf("a / b = %d\n", div(a, b));

    return 0;
}