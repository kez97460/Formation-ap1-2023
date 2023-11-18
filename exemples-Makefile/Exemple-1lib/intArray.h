/* Include guard : à copier/coller au début */
#ifndef INTARRAY_H
#define INTARRAY_H

/* Includes */
#include <stdio.h>
#include <stdlib.h>

/* Structs / typedefs */
typedef struct intArray
{
    int* elements;
    int length;
} intArray;

/* Déclarations de fonctions */
void printIntArray(intArray arr);
intArray initIntArray(int size, int value);

#endif /* Include guard : à copier coller à la fin */
