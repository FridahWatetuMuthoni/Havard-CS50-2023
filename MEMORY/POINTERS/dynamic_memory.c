#include <stdio.h>

/*
The application memory is divided in 4 Segments
1. Code(Text)-> Source Code
2. Static/Global -> used to store global or static variables that can be accessed anywhere in the program during its liifecyle
3. Stack -> used for function calls and their local variables
4. Heap -> free store, where you can request memory at runtime
*/

int total; // a global variable that is stored at the global/static section of the memory

// in this program the stack will have 3 call stacks for square(), square_of_sum() and main()
// the stack frame space allocation happens during runtime

int square(int x)
{
    return x * x;
}

int square_of_sum(int x, int y)
{
    int z = square(x + y);
    return z;
}

int main(void)
{
    int a = 4, b = 8;
    total = square_of_sum(a, b);
    printf("Output: %d\n", total);
    return 0;
}