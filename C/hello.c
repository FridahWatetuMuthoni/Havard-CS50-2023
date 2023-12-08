#include <stdio.h> //this is a header file that include most input and output functions

// This is a function that does not return anything
void just_hello()
{
    // the printf function is a functin from the <stdio.h> header file which we use to output results to the terminal
    printf("Hello World two\n");
}

// The main function is where all the code is executed from top to bottom
int main(void)
{
    printf("Hello World one\n");
    just_hello();
    return 0;
}