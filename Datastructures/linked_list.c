#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char *str;
    unsigned int len;
    struct Node *next;
} Node;

Node *add_node(Node **head, const char *str)
{
    Node *new_node;
    char *string_dup;
    int len;

    new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL)
    {
        return NULL;
    }

    string_dup = strdup(str);
    if (string_dup == NULL)
    {
        free(new_node);
        return NULL;
    }

    len = strlen(str);

    new_node->str = string_dup;
    new_node->len = len;
    new_node->next = *head;

    *head = new_node;

    return (new_node);
}

void print_nodes(Node *head)
{

    while (head != NULL)
    {
        printf("String: %s\n", head->str);
        printf("String Length: %d\n", head->len);
        head = head->next;
    }
}

void free_nodes(Node *head)
{
    Node *current;

    if (head == NULL)
    {
        return;
    }
    while (head != NULL)
    {
        current = head->next;
        free(head->str);
        free(head);
        head = current;
    }
}

int main(void)
{
    Node *head = NULL;

    add_node(&head, "John");
    add_node(&head, "Anna");
    add_node(&head, "Apple");
    add_node(&head, "Fridah");
    add_node(&head, "Emily");
    add_node(&head, "Jane");
    add_node(&head, "Mary");
    add_node(&head, "alexander");
    print_nodes(head);
    free_nodes(head);
    return 0;
}