#include <stdio.h>

void exchange(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 20;
    int b = 30;
    printf("A Before: %d\n", a);
    printf("B Before: %d\n", b);
    exchange(&a, &b);
    printf("A After: %d\n", a);
    printf("B After: %d\n", b);
    return 0;
}