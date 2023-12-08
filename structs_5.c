#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int *arr;
} Data;

int main(void)
{
    Data x;
    Data y;

    x.arr = malloc(sizeof(int) * 5);
    y.arr = malloc(sizeof(int) * 5);

    if (x.arr == NULL)
    {
        return 1;
    }

    if (y.arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        x.arr[i] = i + 1;
        y.arr[i] = i + 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("X: %d, Y: %d\n", x.arr[i], y.arr[i]);
    }

    free(x.arr);
    free(y.arr);
    return 0;
}