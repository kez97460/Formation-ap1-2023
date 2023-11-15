#include "Matrice.h"

int** lireMatrice(char* filename)
{
    FILE* fichier = fopen(filename, "r");
    if(fichier == NULL) // pas nécessaire en examen, mais une bonne pratique 
        return NULL;

    int** matrice;
    int nb_liges, nb_colonnes;
    fscanf(fichier, "%d %d", nb_liges, nb_colonnes);
}