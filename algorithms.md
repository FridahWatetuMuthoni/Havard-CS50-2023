# ALGORITHMS

Abstraction is the oversimplicaton of something so that you dont focus on
the lower level implementation details but you focus on the higher level goal/process

An algorithm is a step by step process of solving something
logarithms -> binary search -> divide and conquer
linear -> linear search

# PSEUDOCODE

1. pick up the phone book
2. Open to the middle of the phonebook
3. look at the page
4. IF person is on page:
   call the person
5. Else IF the person is ealier in book:
   open to the middle of the left half of the book
   Go back to line 3
6. Else IF the person is later in book:
   open to middle of the right half of the book
   Go back to line 3
7. Else:
   Quit

# WAYS TO QUANTIFY

Omega -> Best case scenario
theta -> when the best case and the worst case scenario are the same
Big 0 -> Worst case scenario

## RUNTIME

1. constant -> O(1)
2. logarithmic -> O(log n) -> binary search(dividing data by 2 over and over again)
3. linear -> O(n) -> linear search
4. linear logarithmic -> O(n log n)
5. quadratic -> O(n^2)
6. Polynomial -> O(n^3)
7. factorial -> O(n!)
