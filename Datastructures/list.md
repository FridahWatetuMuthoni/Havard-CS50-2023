# LIST

List is a collection of objects of the same type. eg
list of words, numbers etc.

List Operations:
-> can store a given number of elements of a given data type
-> Write / modify element at a position
-> Read element at a particular position

# Dynamic List that can grow as per one's needs

operations:
-> empty list has a size of 0
-> insert
-> remove
-> count
-> Read/modify element at a particular position
-> specify data type

# Dynamic Array Implementation

1. Empty List Implementation
   int end = -1; -> if the list is empty the end is -1 but if there are elements
   in the list end marks the end of the list or the last index of the last element in the list.

2. INSERT AN ELEMENT
   if the position of insertation is not given, insert element at the
   end of the array.When we want to insert an element at a particular position
   we need to also shift the rest of the elements towards the right
   insert(2) -> inserts 4 at the end of the list
   insert(3) -> inserts 3 at the end of the list
   insert(4, 2) -> inserts 4 at index 2

3. REMOVING AN ELEMENT
   When we remove an element from the end of the list, we just remove it. But if we want to remove an element at a particular position in the list we need to shift the elements on its right to the left to fill in that positin

4. Elements Count
   The number elements is going to be n + 1. n is the last index in the array

5. Array Creation:
   Define a max size of the array you create, and when the array is full, create a new larger array with twice the size of the first array and copy the elements of the previous array to the new array then free the old array.

# Time and Space Complexity

1. Accessing an element in an array(read/write) -> O(1);
2. Inserting an element:-> O(n)
   -> Inserting an element at a particular position in a list O(n)
   -> Inserting an element at the end of the list -> O(1)
3. Removing an element:-> O(n)
   -> removing an element at the end of the list -> O(1)
   -> removing an element at a particular position in a list O(n)
4. Adding an element at the end of the list -> O(n)

# List Problems:

poor implemetation which lead to memory wastage
