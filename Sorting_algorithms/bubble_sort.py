# CS50-> 8:6:00
# BUBBLESORT
""" 
Bubble sort is looking two pairs of numbers that are next 
to each other abd swaping them over and over again
untill the whole list is sorted
"""

# Bubblesort runtime n^2


def bubble_sort(list):
    for i in range(len(list)):
        for j in range(i+1, len(list)):
            if (list[i] > list[j]):
                temp = list[i]
                list[i] = list[j]
                list[j] = temp
        print(list)


numbers = [4, 9, 3, 6, 2]

bubble_sort(numbers)
