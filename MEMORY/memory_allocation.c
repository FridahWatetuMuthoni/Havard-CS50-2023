#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // malloc -> used for memory allocation
    // free -> is used to free memory that is not in use anymore

    char *str = malloc(sizeof(char) * 10);
    if (str == NULL)
    {
        return 1;
    }
    char *str1 = "Hello";
    strcpy(str, str1);
    printf("String: %s\n", str);

    int *arr = malloc(sizeof(int) * 3);
    arr[0] = 20;
    arr[1] = 30;
    arr[2] = 60;

    for (int i = 0; i < 3; i++)
    {
        printf("array[i]: %d\n", arr[i]);
    }
    free(arr);
    free(str);
    return 0;
}