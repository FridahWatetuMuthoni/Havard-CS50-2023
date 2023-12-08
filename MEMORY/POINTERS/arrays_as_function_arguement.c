#include <stdio.h>

int increment(int arr[], int len)
{
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        total += arr[i];
    }
    return total;
}

int sum_of_elements(int *arr, int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}

void double_elements(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int total = increment(arr, arr_len);
    printf("Total: %d\n", total);
    int total2 = sum_of_elements(arr, arr_len);
    printf("Total: %d\n", total2);
    double_elements(arr, arr_len);

    for (int i = 0; i < arr_len; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}