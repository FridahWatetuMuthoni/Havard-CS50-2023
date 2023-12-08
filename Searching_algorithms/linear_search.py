numbers = [1, 2, 3, 5, 7, 8, 9, 12, 16, 18, 20]

# Binary Search Algorithm


def linear_search(value):
    for i in numbers:
        if (i == value):
            print('found')
            return 1
    print('Not Found')
    return 0


linear_search(200)
