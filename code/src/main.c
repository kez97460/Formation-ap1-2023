/*---Includes---*/
#include "Matrice.h"
#include <stdio.h>
#include "lists.h"
#include "segfault.h"

/*---Main---*/
int main()
{
    // Test matrices : ex1 EI22
    /* 
    Matrice mat_test = lireMatrice("matrice_test.txt");
    Vecteur vect_test = MatriceToVect(mat_test);
    Matrice mat2 = VectToMatrice(vect_test, mat_test.nb_lines, mat_test.nb_cols);

    printf("mat_test : \n");
    printMatrice(mat_test);
    printf("vect_test : \n");
    printVect(vect_test);
    printf("mat2 : \n");
    printMatrice(mat2); */

    // Test listes chaînées 
    
    List liste1 = NULL;
    push(&liste1, 1.1);
    push(&liste1, 2.2);
    push(&liste1, 3.3);
    printf("liste1 : ");
    printList(liste1);
    printf("Longueur : %d\n", lengthList(liste1));
    pop(&liste1);
    printf("Used pop()\nliste1 : ");
    printList(liste1);
    printf("Longueur : %d\n", lengthList(liste1));

    // Test de segfault
    // uninitialisedVar();
    
    // Test d'undefined behavior
    // tableauFoireux();

    // Test de segfault
    // recursionInfinie(0);

    return 0;
}
