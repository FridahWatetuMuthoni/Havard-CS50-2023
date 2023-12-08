# RECURSSION

"""
Recursion is the ability for a function to call itself 
"""


def factorial(n):
    if (n == 0 or n == 1):
        return 1
    return n * factorial(n - 1)


print(factorial(5))

"""
Recursion for Binary Search
"""


def binary_search(list, value):
    if (len(list) == 0):
        return False
    start = 0
    end = len(list) - 1
    middle = (start + end) // 2

    if (list[middle] == value):
        return True
    elif (list[middle] > value):
        end = middle - 1
    elif (list[middle] < value):
        start = middle + 1
    return binary_search(list[start:end + 1], value)


numbers = [1, 2, 3, 5, 7, 8, 9, 12, 16, 18, 20]
print(binary_search(numbers, 20))

# Iterating a list using recurssion
i = 0
while (i < len(numbers)):
    print(numbers[i])
    i += 1


def iterate_list(list, index=0, sum=0):
    if (index == len(list)):
        return sum
    sum += list[index]
    index += 1
    return iterate_list(list, index, sum)


print(iterate_list(numbers))
