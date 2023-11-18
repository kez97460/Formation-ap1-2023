/* Include le .h associé au début */
#include "intArray.h"

void printIntArray(intArray arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.elements[i]);
    }
    printf("\n");
}

intArray initIntArray(int size, int value)
{
    intArray res;
    res.length = size;
    res.elements = (int*) malloc(size * sizeof(int));
    
    for (int i = 0; i < res.length; i++)
    {
        res.elements[i] = value;
    }
    
    return res;
}