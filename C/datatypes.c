#include <stdio.h>

int distance(int speed, int time)
{
    printf("Speed: %d, Time: %d\n", speed, time);
    int distance = speed * time;
    return distance;
}

int main(void)
{
    // Calculating Distance
    int speed = 20;
    int time = 7;
    int dis = distance(speed, time);
    printf("Distance: %d\n", dis);

    // integers
    int num = 10;

    // decimal numbers
    // The difference between floats and doubles is that double have a higher precision than floats
    float num1 = 1.2;
    double num2 = 1.3142;

    // strings
    char hello[] = "Hello World";

    // charaters (letters, numbers, symbols etc)
    char alpha = 'A';
}