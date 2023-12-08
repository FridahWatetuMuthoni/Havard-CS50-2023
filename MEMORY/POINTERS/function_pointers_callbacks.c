#include <stdio.h>

void print_hello()
{
    printf("Hello\n");
}

void callback(void (*ptr)())
{
    ptr();
}

int main(void)
{
    callback(print_hello);
    return 0;
}