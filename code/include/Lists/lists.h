#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    float data;
    struct Node* next;
} Node;

typedef Node* List;

/* push et pop : structure de pile */

// Ajout d'un noeud en début de liste
void push(List* list_ptr, float data);
// Renvoie le 1er élément et le supprime
float pop(List* list_ptr);

int lengthList(List list);
void printList(List list);


#endif /* LISTS_H */
