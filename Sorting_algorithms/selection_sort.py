# input => algorithm => output
"""
Types of Sorting

1. SELECTION SORT

THEORY:
We loop over the list and make note of the smallest number in the list
and put it n the first place and the element that was already in the 
first place is put back where the smallest number was (we basically swipe them)
We do this over and over again untill we are done

PSEUDOCODE:
For i from 0 to n - 1:
    Find the smallest number between numbers[i] to numbers[n - 1]
    Swap smallest number with numbers[i]
"""


# The runtime is n^2
def selection_sort(list):
    # i need a loop that loops thru all the numbers until i get the smallest number and swap
    # after swapping i need to change the starting point of the array to remove the already sorted part
    index = 0
    for i in range(index, len(list)):
        for j in range(i + 1, len(list)):
            smallest = list[index]
            if (smallest > list[j]):
                temp = list[index]
                list[index] = list[j]
                list[j] = temp
        print(list)
        index += 1
    return list


numbers = [4, 9, 3, 6, 2]

print(selection_sort(numbers))
