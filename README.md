# Formation-ap1-2023

Formation sur le cours d'algorithmique et programmation 1 fait en novembre 2023.

Le support de présentation est le fichier [Algo-prog-1.pdf](Algo-prog-1.pdf)

## Outils utilisés

Le support a été fait avec [Marp](https://marp.app/).

## Code

Le code lié à la présentation se trouve dans le dossier `code`. 

Il ne constitue pas une application à part entière, mais contient des fonctions qui peuvent être testées librement. Les librairies incluses sont :
- [Une librairie correspondant à l'exercice 1 du sujet EI22](./code/include/ex1_EI22/)
- [Une librairie qui implémente les listes chaînées](./code/include/Lists/)
- [Une librairie qui contient des exemples de code qui segfault et d'undefined behavior](./code/include/segfault/) 

Des routines de test se trouvent dans [`main.c`](./code/src/main.c)

Pour la compilation, ouvrir un terminal dans le dossier `code` et taper : 
```sh
make # pour compiler
make clean # pour supprimer les fichiers créés par la compilation
make run # pour compiler puis executer l'application générée
```

## Guide et exemples de Makefile

Un guide de l'écriture de `Makefile` est dans [Guide-makefile.pdf](Guide-makefile.pdf)

Des exemples de projets avec Makefile intégrés sont dans le dossier [exemples-Makefile](./exemples-Makefile/)

