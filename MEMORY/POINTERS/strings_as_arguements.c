#include <stdio.h>
#include <ctype.h>

// Strings is a group or an array of charaters
//  eg "John" = ['J','o','h','n']
// to store charater array the length of the string must be the number of charaters in the array plus one
// the plus one is used to store the '\0' null charater to indicate the end of the string
// arrays are always passed to functions by reference
// char *str = "hello"; -> this is store in the source code part of memory therefore it can not be modified once declared
// if you want to be able to modify a string declare it like this char str[] = "hello";

void print(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

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

void _strcopy(char *dest, char *src)
{
    int src_len = _strlen(src);

    for (int i = 0; i < src_len; i++)
    {
        dest[i] = src[i];
    }
    dest[src_len] = '\0';
}

int main(void)
{
    char *src = "hello world";
    char *dest;
    printf("The size of a pointer: %d\n", sizeof(dest));
    _strcopy(dest, src);
    dest[0] = toupper(dest[0]);
    printf("String Src:%s, Address: %p\n", src, src);
    printf("String Dest:%s, Address: %p\n", dest, dest);
    char *str = "Greetings People";
    print(str);
    return 0;
}