#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // How to convert the strings to intergers
    if (argc > 2)
    {
        for (int i = 1; i < argc; i++)
        {
            // converting the strings to numbers
            printf("%d\n", atoi(argv[i]));
        }
    }
    else
    {
        printf("Not enough arguements");
    }
    return 0;
}