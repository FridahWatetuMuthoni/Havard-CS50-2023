#include <stdio.h>

int main(void)
{
    int a = 1025;
    int *p = &a;
    char *str;
    printf("Address:%d, Value:%d \n", p, *p);
    str = (char *)p;
    printf("Address:%d, Value: %c\n", str, *str);

    // A void pointer is a generic pointer
    void *vp = p;
    printf("Address: %d\n", vp);
    return 0;
}