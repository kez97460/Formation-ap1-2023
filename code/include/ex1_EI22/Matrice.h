#ifndef MATRICE_H
#define MATRICE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Matrice
{
    int** values;
    int nb_lines;
    int nb_cols;
} Matrice;

typedef struct Vecteur
{
    int* values;
    int nb_elements;
} Vecteur;

Matrice lireMatrice(char* filename);
Vecteur MatriceToVect(Matrice matrice);
Matrice VectToMatrice(Vecteur vect, int nb_lignes, int nb_colonnes);
void printMatrice(Matrice m);
void printVect(Vecteur v);


#endif /* MATRICE_H */
