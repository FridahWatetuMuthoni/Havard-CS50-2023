numbers = [1, 2, 3, 5, 7, 8, 9, 12, 16, 18, 20]


def binary_search(value):
    start = 0
    end = len(numbers) - 1

    while (start <= end):
        middle = (start + end) // 2
        if (numbers[middle] == value):
            return True
        elif (numbers[middle] < value):
            start = middle + 1
        elif (numbers[middle] > value):
            end = middle - 1
    return False


def binary_search_recurssion(list, value):
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
    return binary_search_recurssion(list[start:end+1], value)


print(binary_search_recurssion(numbers, 50))
