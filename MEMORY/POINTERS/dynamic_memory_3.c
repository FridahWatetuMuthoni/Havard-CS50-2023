#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = malloc(sizeof(int) * n);
    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    // printing the values in the array
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}