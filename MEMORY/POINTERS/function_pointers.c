#include <stdio.h>

// A program is given a chuck of memory when it starts its execution from RAM
//  instructions/ code is executed sequentially unless there are function calls

int add(int a, int b)
{
    return a + b;
}

void hello()
{
    printf("Hello World\n");
}

void print_hello(char *str)
{
    printf("Hello %s\n", str);
}

int main(void)
{
    int add_result;
    // creating a pointer that points to a function
    int (*p)(int, int);
    p = add; // you can either use add or &add
    add_result = p(2, 3);
    printf("%d\n", add_result);

    void (*hel)();
    hel = hello;
    hel();

    void (*p_hello)(char *);
    char *name = "anna";
    p_hello = print_hello;
    p_hello(name);
    return 0;
}