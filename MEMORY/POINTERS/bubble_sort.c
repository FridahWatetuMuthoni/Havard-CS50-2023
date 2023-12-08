#include <stdio.h>

void bubble_sort(int *arr, int size)
{
    int index = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = index; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        index++;
    }
}

int main(void)
{
    int arr[] = {2, 4, 5, 7, 0, 1, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    return 0;
}