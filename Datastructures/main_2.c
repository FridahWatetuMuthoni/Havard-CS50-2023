#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int size;
    int *arr;
} Array;

void free_mem(Array *arr)
{
    free(arr->arr);
    free(arr);
}

int main(void)
{
    Array *arr_ptr;
    arr_ptr = malloc(sizeof(Array));
    if (arr_ptr == NULL)
    {
        return 1;
    }

    arr_ptr->size = 20;

    arr_ptr->arr = malloc(sizeof(int) * arr_ptr->size);
    if (arr_ptr->arr == NULL)
    {
        free(arr_ptr);
        return 1;
    }

    for (int i = 0; i < arr_ptr->size; i++)
    {
        arr_ptr->arr[i] = i + 1;
    }

    printf("Array Size: %d\n", arr_ptr->size);
    printf("Grades: ");
    for (int i = 0; i < arr_ptr->size; i++)
    {
        printf("%d ", arr_ptr->arr[i]);
    }
    printf("\n");

    free_mem(arr_ptr);

    return 0;
}