#include <stdio.h>

int _strlen(char *str)
{
    int len = 0;

    while (*str)
    {
        str++;
        len++;
    }
    return len;
}

int _strlen_2(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main(void)
{
    char *str = "Hello World";

    int len_1 = _strlen(str);
    int len_2 = _strlen_2(str);
    printf("_strlen: %d\n", len_1);
    printf("_strlen2: %d\n", len_2);
    return 0;
}