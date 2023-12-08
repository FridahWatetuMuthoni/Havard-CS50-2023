#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("text.txt", "r");
    if (file == NULL)
    {
        return 1;
    }
    char *str = malloc(sizeof(char) * 1024);
    if (str == NULL)
    {
        return 1;
    }
    fgets(str, 1024, file);
    printf("%s\n", str);
    fclose(file);
    free(str);
    return 0;
}