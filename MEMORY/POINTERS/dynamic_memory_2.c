#include <stdio.h>
#include <stdlib.h>

/*
We use the heap for dynamic memory allocation
We have three functions for memory allocation in C:
malloc() -> malloc(size of memory) -> malloc(sizeof(int) * 4)
calloc() -> calloc(how many items/elements, size of the data-type) -> calloc(3, sizeof(int))
//realloc is used to change the size of an already allocated chuck of memory
realloc(pointer to the memory we want to change, the size of the new size of memory we want)
realloc(*ptr, sizeof(int)*20)
free()
size_t size -> size_t is a data type that stores only positive itergers
size_t is unsigned int
*/

int main(void)
{
    int a = 10; // this variable is stored at the stack

    // to get memory stored at the heap we use malloc, calloc or realloc
    int *p = (int *)malloc(sizeof(int));

    // asking for space of an array of 20 items from the heap
    int *arr = (int *)malloc(sizeof(int) * 20);
    // when memory is not allocated malloc returns null so we have to check the value of the pointer before using it
    if (arr == NULL)
    {
        return 1;
    }

    // To clear the memory once you are done with it
    free(p);
    free(arr);
    return 0;
}