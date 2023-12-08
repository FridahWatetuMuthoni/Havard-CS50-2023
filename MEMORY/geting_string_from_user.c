#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char *str = malloc(sizeof(char) * 1024);
    if (str == NULL)
    {
        return 1;
    }
    printf("Enter your name: ");
    scanf("%s", str);
    printf("%s\n", str);
    free(str);
    return 0;
}