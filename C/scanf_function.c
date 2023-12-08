#include <stdio.h>

int main(void)
{
    int speed = 0;
    int time = 0;

    printf("Speed: ");
    scanf("%d", &speed);
    printf("Time: ");
    scanf("%d", &time);

    int distance = speed * time;
    printf("Distance: %d\n", distance);

    char charater = 'd';
    printf("Enter a charater: ");
    scanf("%c", &charater);
    printf("The charater Entered: %c\n", charater);
    // charaters are also int values and you can print them if you change the identifer when printing them
    printf("The charater Entered: %d\n", charater);

    return 0;
}