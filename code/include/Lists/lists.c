#include "Lists.h"

void push(List* list_ptr, float data)
{
    Node* new = malloc(sizeof(Node));
    new->data = data;
    new->next = *list_ptr; // suivant : la tête actuelle

    *list_ptr = new; // On remplace la tête par le nouvel élément
}

float pop(List* list_ptr)
{
    if (*(list_ptr) == NULL)
    {
        printf("WARNING : trying to remove an element from an empty list \n");
        return 0;
    }
    

    float res = (*list_ptr)->data;
    (*list_ptr) = (*list_ptr)->next;
    return res;
}

int lengthList(List list)
{
    int i = 0;
    while (list != NULL)
    {
        list = list->next;
        i++;
    }
    return i;
}

void printList(List list)
{
    while (list != NULL)
    {
        printf("%.2f ", list->data);
        list = list->next;
    }
    printf("\n");
}