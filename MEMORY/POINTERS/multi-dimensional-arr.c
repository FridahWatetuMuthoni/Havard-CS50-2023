#include <stdio.h>

int main(void)
{
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int arr_len_1 = sizeof(arr) / sizeof(arr[0]);
    int arr_len_2 = sizeof(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < arr_len_1; i++)
    {
        for (int j = 0; j < arr_len_2; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
    return 0;
}