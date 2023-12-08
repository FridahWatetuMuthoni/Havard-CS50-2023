#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int number;
    struct Node *next;
} Node;

int main(int argc, char *argv[])
{
    // creating the starting point of the linked list
    Node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        Node *new_node = malloc(sizeof(Node));
        if (new_node == NULL)
        {
            return 1;
        }
        // adding data to the node
        new_node->number = number;
        new_node->next = NULL;

        // adding a node at the start of the linked list
        new_node->next = list;
        list = new_node;
    }

    Node *current = list;
    while (current != NULL)
    {
        printf("%d->", current->number);
        current = current->next;
    }
    printf("\n");

    current = list;
    while (current != NULL)
    {
        Node *next = current->next;
        free(current);
        current = next;
    }
    return 0;
}