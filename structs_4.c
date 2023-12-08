#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// using this -> is like using * and . at the same time in structs

typedef struct
{
    char *name;
    char *id;
    int age;
} Student;

void print_student(Student *student)
{
    printf("Name: %s\n", student->name);
    printf("ID: %s\n", student->id);
    printf("Age: %d\n", student->age);
}

Student *create_student(char *name, char *id, int age)
{
    Student *student;
    if (name == NULL || id == NULL || age < 0)
    {
        return NULL;
    }

    student = malloc(sizeof(Student));
    if (student == NULL)
    {
        return NULL;
    }

    int name_len = strlen(name) + 1;
    student->name = malloc(sizeof(char) * name_len);
    if (student->name == NULL)
    {
        free(student);
        return NULL;
    }

    int id_len = strlen(id) + 1;
    student->id = malloc(sizeof(char) * id_len);
    if (student->id == NULL)
    {
        free(student);
        free(student->name);
        return NULL;
    }

    strcpy(student->name, name);
    strcpy(student->id, id);
    student->age = age;

    return student;
}

void free_student(Student *student)
{
    free(student->name);
    free(student->id);
    free(student);
}
int main(void)
{
    char *name = "Fridah";
    char *id = "0123456789";
    int age = 28;
    Student *student = create_student(name, id, age);
    print_student(student);
    free_student(student);

    return 0;
}