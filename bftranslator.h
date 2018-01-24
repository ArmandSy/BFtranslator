#include <stdlib.h>
#include <stdio.h>
#include "string.h"

typedef struct couple
{
	int x;
	int y;
} couple;

void textToBF(char* texte); // prend en entrée un texte et renvoie dans un fichier sa traduction en BF

char* asciiToBF(int x); // prend en entrée un entier et renvoie le code en BF permettant d'afficher ce caractère

couple* decomposition(int X); // permet de décomposer une boucle 

