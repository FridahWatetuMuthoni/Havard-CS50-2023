#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("Memory: %p\n", p);
    printf("Value: %d\n", *p);
    char *greetings = "Hello World";
    printf("%s\n", greetings);
    return 0;
}

// 10:19:00