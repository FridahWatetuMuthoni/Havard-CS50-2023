#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    printf("Num1 Before: %d\n", num1);
    printf("Num2 Before: %d\n", num2);
    swap(&num1, &num2);
    printf("Num1 After: %d\n", num1);
    printf("Num2 After: %d\n", num2);

    return 0;
}