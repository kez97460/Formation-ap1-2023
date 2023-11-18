application : main.o intArray.o
	gcc main.o intArray.o -o application

# On vérifie l'existence du .h avant de compiler le main
main.o : main.c intArray.h
	gcc -c main.c

# On vérifie l'existence du .h avant de compiler la librairie
intArray : intArray.c intArray.h
	gcc -c intArray.c