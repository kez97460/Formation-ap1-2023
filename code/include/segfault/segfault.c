#include "segfault.h"

// commenté pour éviter les warnings.
/* void scanfClassic()
{
    int n;
    printf("Entrer n :");
    scanf("%d", n); // scanf prend un int* en argument, pas un int
    printf("n = %d", n);
} */

void tableauFoireux()
{
    int tab[3] = {1, 2, 3};
    for (int i = 0; i <= 3; i++) // < et pas <=
    {
        printf("tab[%d] = %d \n", i, tab[i]);
    }
}

void recursionInfinie()
{
    recursionInfinie();
}

// attention : undefined behavior
void shittyStrings()
{
    char str[1] = "f"; // devrait être de taille 5
    printf("%s\n", str);
}
