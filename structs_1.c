#include <stdio.h>
#include <string.h>

/*
Student:
    -name(string)
    -id(string)
    -age(int)
    -grades(int array)
*/

struct Student
{
    char name[50];
    char id[10];
    int age;
    int grades[5];
};

int main(void)
{
    struct Student kevin;
    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "012345678");
    kevin.age = 10;
    for (int i = 0; i < 5; i++)
    {
        kevin.grades[i] = i + 1;
    }

    printf("Age: %s\n", kevin.name);
    printf("Age: %s\n", kevin.id);
    printf("Age: %d\n", kevin.age);
    printf("Grades = [");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", kevin.grades[i]);
    }
    printf("]\n");
    return 0;
}