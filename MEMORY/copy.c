#include <stdio.h>
#include <ctype.h>

char *copy(char *str, char *str2)
{
    int index = 0;
    while (*str)
    {
        str2[index] = *str;
        index++;
        str++;
    }
    str2[index] = '\0';
    return str2;
}

int main(void)
{
    char *str_1 = "hello world!";
    char *str_2;
    copy(str_1, str_2);
    str_2[0] = toupper(str_2[0]);
    printf("Str_1: %s\n", str_1);
    printf("Str_2: %s\n", str_2);
    return 0;
}