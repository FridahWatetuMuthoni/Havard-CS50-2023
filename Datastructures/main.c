#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(sizeof(int) * 3);

    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *temp = realloc(list, sizeof(int) * 4);

    if (temp == NULL)
    {
        free(list);
        return 1;
    }
    temp[3] = 10;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", list[i]);
    }

    free(temp);
    return 0;
}