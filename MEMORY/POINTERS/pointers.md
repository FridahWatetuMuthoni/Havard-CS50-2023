# POINTERS

## POINTERS

Pointers are variables that store the addresses of other variables
*p; -> as a unary, its used as a dereference
int *p = &n; -> before a varaible name, its used to declare a pointer
\*p = 10; -> used to modify the value stored at a certain address
int n = 20; &n -> returns the address of in integer n

## RAMDOM ACCESS MEMORY(RAM)

Each byte in the ram has an address
Each byte in the RAM is addressable
The memory used in running programs in computers is from the RAM
int -> 4 bytes
char -> 1 byte
float -> 4 bytes
pointer -> 8 bytes
double -> 8 bytes

## The application memory

HEAP -> programs free store
|
STACK -> intializes a stack frame for every function call and it also stores the local variables until the function is done executing
|
STATIC/GLOBAL
|
SOURCE CODE

# Global Variables

Global variables are variables that are declared outside of functions
and can be modified from anywhere in the program

# Local Variables

All the local variables are stored in the stack
We can not access variables outside of stack frames
call stacks are fixed in size , therefore if a function recursively calls
itsself or another function there is stack overflow and when that happens
the program crashes
