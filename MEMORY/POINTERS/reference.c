#include <stdio.h>

/*
Using pointers as function arguements
Call by reference
*/

void increment(int *a)
{
    *a = *a + 1;
}

int main(void)
{
    int a = 0;
    for (int i = 0; i < 5; i++)
    {
        increment(&a);
    }
    printf("The value of a after being called five times: %d\n", a);
    return 0;
}