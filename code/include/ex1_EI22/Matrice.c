#include "Matrice.h"

Matrice lireMatrice(char* filename)
{
    // ouverture fichier
    FILE* fichier = fopen(filename, "r");
    if(fichier == NULL) // pas nécessaire en examen, mais une bonne pratique 
    {
        printf("ERREUR : Fichier %s n'existe pas.\n", filename);
        Matrice res;
        res.values = NULL;
        res.nb_lines = 0;
        res.nb_cols = 0;
        return res;
    }

    // init tableau des valeurs
    int nb_lignes, nb_colonnes;
    fscanf(fichier, " %d %d", &nb_lignes, &nb_colonnes);
    int** values = (int**) malloc(nb_lignes * sizeof(int*));
    for (int i = 0; i < nb_lignes; i++)
    {
        values[i] = (int*) malloc(nb_colonnes * sizeof(int));
    }

    // recuperation valeurs 
    for (int i = 0; i < nb_lignes; i++)
    {
        for (int j = 0; j < nb_colonnes; j++)
        {
            fscanf(fichier, " %d", &values[i][j]);
        }
    }
    
    // fermeture fichier
    fclose(fichier);

    Matrice res;
    res.values = values;
    res.nb_lines = nb_lignes;
    res.nb_cols = nb_colonnes;
    return res;
}

Vecteur MatriceToVect(Matrice matrice)
{
    Vecteur vect_res;
    vect_res.nb_elements = matrice.nb_cols * matrice.nb_lines;

    vect_res.values = (int*) malloc(vect_res.nb_elements * sizeof(int));

    for (int i = 0; i < matrice.nb_lines; i++)
    {
        for (int j = 0; j < matrice.nb_cols; j++)
        {
            vect_res.values[i * matrice.nb_cols + j] = matrice.values[i][j];
        }
    }
    
    return vect_res;
}

Matrice VectToMatrice(Vecteur vect, int nb_lignes, int nb_colonnes)
{
    Matrice mat_res;

    if (nb_lignes * nb_colonnes != vect.nb_elements)
    {
        printf("ERREUR : Les tailles spécifiées ne correspondent pas à la taille du vecteur.\n");
        mat_res.nb_cols = 0;
        mat_res.nb_lines = 0;
        mat_res.values = NULL;
        return mat_res;
    }

    mat_res.nb_lines = nb_lignes;
    mat_res.nb_cols = nb_colonnes;
    mat_res.values = (int**) malloc(nb_colonnes * nb_lignes * sizeof(int));
    for (int i = 0; i < nb_lignes; i++)
    {
        mat_res.values[i] = (int*) malloc(nb_colonnes * sizeof(int));
    }

    for (int i = 0; i < mat_res.nb_lines; i++)
    {
        for (int j = 0; j < mat_res.nb_cols; j++)
        {
            mat_res.values[i][j] = vect.values[i * mat_res.nb_cols + j];
        }
    }

    return mat_res;
}   

void printMatrice(Matrice m)
{
    for (int i = 0; i < m.nb_lines; i++)
    {
        for (int j = 0; j < m.nb_cols; j++)
        {
            printf("%d ", m.values[i][j]);
        }
        printf("\n");
    }
}

void printVect(Vecteur v)
{
    for (int i = 0; i < v.nb_elements; i++)
    {
        printf("%d ", v.values[i]);
    }
    printf("\n");
}