#include <stdio.h>

// Arrays are stored consecutively in memory
//  for an array of 5 interger values takes up 20 bytes
//  addresses tooks like this: 200 204 208 212 2016
//  The variable name of an array  stores the pointer to the first value of the array
int main(void)
{
    int arr[5];
    // array assignment
    int value = 1;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = value;
        value++;
    }

    // array printing
    int arr_size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < arr_size; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    int nums[] = {2, 4, 5, 8, 1};
    printf("%d\n", nums);
    printf("%d\n", &nums[0]);
    printf("%d\n", nums[0]);
    printf("%d\n", *nums);
    return 0;
}