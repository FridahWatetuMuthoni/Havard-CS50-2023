# DATA STRUCTURES

# Abstract Data Types

1. Queue(real life queue)
   Properties: 1. FIFO -> first in, first out
   Queue Operations:

   1. enqueue -> adding something to a queue
   2. Dequeue -> removing something from a queue

2. Stacks:(emails, broswers history, sweaters in a stack)
   Properties:

   1. LIFO -> last in, first out
      Stacks Operations;
      1.push -> putting something to the top of the stack
      2.pop -> removing somthing from the top of the stack

3. Linked List:
   a linked list is a chuck of data that connects to the other chuck using a pointer so that we can get the next location of the next data chuck
   NULL indicates an empty pointer
   To create a linked list we need a starting pointer that starts the train of all the other linked list nodes
   the starting node in a linkedlist points to the next node in the linked list
   the the next until we get to the end to the null pointer
   Example:
   [start] -> [data | pointer] -> [data | pointer] -> [data | pointer]-> [data | NULL]

   {The downsides of using a linkedlist instead of an Array}

   1. in the linked least we are using more than twice the memory
   2. Accessing data goes from O(1) to O(n)

4. Trees Data Structures
   Trees are two dimentional( width and height)
   Tree grow downwards
   Types of Trees:
   1. Binary Search Trees (O(log n))
      @ Right values are always bigger
