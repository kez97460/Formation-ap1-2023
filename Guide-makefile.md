---
marp: true
theme: gaia
class: invert
paginate: true
footer: "AREM - 2023"
---
<!-- Pagination style -->
<style>
section::after {
  content: attr(data-marpit-pagination) '/' attr(data-marpit-pagination-total);
}
</style>

<!-- Title slide -->
<!--_footer: "Kézia MARCOU | AREM - 2023"-->

# Guide

## Ecriture d'un Makefile

![bg right w:15cm](images/arem_logo.webp)

--- 

### Setup - utilisation

Il faut mettre un fichier appelé `Makefile` (ou `makefile`) dans le dossier de votre projet.

Dans un terminal (ouvert dans le même dossier que le `Makefile`), vous pouvez alors utiliser la commande `make` pour l'éxécuter.

---

### Syntaxe de base

Un `Makefile` est constitué d'une série d'instructions de ce type :
```makefile
fichier_output : fichier_nécessaire
    commande
```

Attention : les indentations doivent être des **tabulations**. Cela ne fonctionne pas avec des espaces.

--- 
<!-- header: "Code dans un seul fichier"-->
### Exemple simple

```makefile
application : main.c
    gcc main.c -o application
```
Quand vous tapez make, si un fichier appelé `main.c` existe (dans le même dossier), la commande 
```
gcc main.c -o application
```
est éxécutée. Elle crée le fichier `application`.

--- 
<!--header: "Code avec librairies"-->

### Code avec librairies

Une librairie en C (ici `intArray`) contient 2 fichiers :
- `intArray.h` 
- `intArray.c`

Vous pouvez voir un exemple de comment le code d'une librairie est réparti entre le `.c` et le `.h` dans `exemple-Makefile/Exemple-1lib`.

--- 

### Compilation d'une librairie

Pour compiler un projet avec une libairie :
1. compiler la librairie en un `.o`
```gcc -c intArray.c```
2. compiler le main en un `.o`
```gcc -c main.c```
3. compiler les `.o` pour créer l'application
```gcc main.o intArray.o -o application```

--- 

### Makefile avec une librairie

Les makefiles s'éxécutent "de bas en haut". Explications plus détaillées : [internet](https://www.google.fr). Il faut donc écrire les commands dans l'ordre suivant :
```makefile
3.
2.
1.
```

Voir dans le dossier `exemple-Makefile/Exemple-1lib` pour le makefile complet.

--- 

### Makefiles avec un dossier contenant les librairies

ChatGPT est votre ami. 

En général une bonne idée est d'en copier un qui fonctionne.

