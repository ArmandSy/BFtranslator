#include "bftranslator.h"



void textToBF(char* texte)
{
	int i = 0;
	FILE* fichier;
	fichier = fopen("BF.txt","wb");
	while(texte[i] != '\0')
	{
		fwrite(asciiToBF(charToASCII(texte[i]))+'>', sizeof(100*char), 1, fichier); // le +'>' pour incrémenter le pointeur de cellule en BF
		i++;
	}
	fclose(fichier);
}



int charToASCII(char a)  // prend en entrée un caractère et renvoie son code ASCII
{
		return (int)a;
}


couple* decomposition(int X)
{
	couple* Couple = calloc(1,sizeof(couple*));
	Couple->x = X/10; //le nombre d'initialisation du compteur
	Couple->y = X%10; // le nombre de fois où faudra faire ++ avant l'affichage
	return Couple;
}

char* asciiToBF(int X) // prend en entrée un entier et renvoie le code en BF permettant d'afficher ce caractère
{
	char chaine[100] = "";
	char chaine1[15] = "";
	char chaine2[15] = "";
	couple* Couple = decomposition(X);

	while(Couple->x != 0) //On fait une chaîne pour l'initialisation du compteur
	{
		strcat(chaine1,"+");
		Couple->x = Couple->x - 1;
	}
	while(Couple->y != 0) //On fait une chaine pour l'initialisation de la correction
	{
		strcat(chaine2,"+");
		Couple->y = Couple->y - 1;
	}
	//On les inclue dans le code general
	sprintf(chaine, ">%s[<++++++++++>-]<%s.", chaine1, chaine2);
	return chaine;
}

