#include "intArray.h"
#include <stdio.h> // déjà inclus pas intArray donc inutile mais ne casse rien

int main()
{
    intArray arr = initIntArray(5, -1);
    arr.elements[2] = 10;
    printIntArray(arr);
    return 0;
}
