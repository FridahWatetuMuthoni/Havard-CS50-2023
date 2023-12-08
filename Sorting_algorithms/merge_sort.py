"""
Merge Sort:

PSEUDOCODE:
if only one number:
    quite
Sort left half of the numbers
sort right half of the numbers
Then Merge sorted halves
"""

nums = [2, 4, 5, 7, 0, 1, 3, 6]


def split(list):
    middle = len(list) // 2
    right_half = list[0: middle]
    left_half = list[middle:]
    return right_half, left_half


def merge(half_one, half_two):
    half_one_length = len(half_one)
    half_two_length = len(half_two)
    j = 0
    i = 0
    merged_list = []
    while (i < half_one_length and j < half_two_length):
        if (half_one[i] <= half_two[j]):
            merged_list.append(half_one[i])
            i += 1
        else:
            merged_list.append(half_two[j])
            j += 1
    while (i < half_one_length):
        merged_list.append(half_one[i])
        i += 1
    while (j < half_two_length):
        merged_list.append[half_two[j]]
        j += 1
    return merged_list


def merge_sort(arr):
    if (len(arr) <= 1):
        return arr

    # Divide the list into two halfs
    left_half, right_half = split(arr)

    # Recursively sort the two halfs
    left = merge_sort(left_half)
    right = merge_sort(right_half)

    return merge(left_half, right_half)


print(merge_sort(nums))
