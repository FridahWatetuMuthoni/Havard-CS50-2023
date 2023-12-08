#include <stdio.h>

/*
argc is the number of commandline arguements
argc also includes the program itsself
char *argv[] -> an array of strings, the arguements themselves
*/

int main(int argc, char *argv[])
{
    printf("argc: %d\n", argc);
    printf("Program name: %s\n", argv[0]);

    if (argc > 2)
    {
        for (int i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}