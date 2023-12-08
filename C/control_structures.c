#include <stdio.h>

int main(void)
{
    int grade = 0;

    printf("Enter you grade: ");
    scanf("%d", &grade);

    if (grade >= 50)
    {
        printf("pass");
    }
    else
    {
        printf("failed");
    }
}