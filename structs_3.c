#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char id[10];
    int age;
    int grades[5];
} Student;

void print_student(Student student)
{
    printf("Age: %s\n", student.name);
    printf("Age: %s\n", student.id);
    printf("Age: %d\n", student.age);
    printf("Grades = [");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", student.grades[i]);
    }
    printf("]\n");
}

int main(void)
{
    Student kevin;
    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "012345678");
    kevin.age = 10;
    for (int i = 0; i < 5; i++)
    {
        kevin.grades[i] = i + 1;
    }
    print_student(kevin);
    return 0;
}