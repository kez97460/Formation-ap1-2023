#include "segfault.h"

void scanfClassic()
{
    int n;
    printf("Entrer n :");
    scanf(" %d", n); // scanf prend un int* en argument, pas un int
    printf("n = %d", n);
}

// undefined behavior
void tableauFoireux()
{
    int tab[3] = {1, 2, 3};
    for (int i = 0; i <= 3; i++) // < et pas <=
    {
        printf("tab[%d] = %d \n", i, tab[i]);
    }
}

// segfault ralentie si on met le printf. Parce que printf est lent as fuck.
// Fun fact : avec gdb, en lancant recursionInfinie(0), vous pouvez voir au bout de combien de fois ca segfault.
void recursionInfinie(unsigned int n)
{
    // printf("%d \n", n);
    recursionInfinie(n+1);
}

void uninitialisedVar()
{
    float* x_ptr; // pour ne pas segfault : x_ptr = (float*) malloc(sizeof(float));
    printf("Entrer x : ");
    scanf(" %f", x_ptr);
    printf("x = %.2f\n", *x_ptr);
}