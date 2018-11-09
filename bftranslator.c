#include "bftranslator.h"

couple* decomposition(int X)
{
	couple* Couple = calloc(1,sizeof(couple*));
	Couple->x = X/10; //le nombre d'initialisation du compteur
	Couple->y = X%10; // le nombre de fois où faudra faire ++ avant l'affichage
	return Couple;
}

void textToBF(char* texte)
{
	int i = 0;
	int k = 0;
	int j = 0;
	FILE* fichier;
	fichier = fopen("BF.txt","wb");
	while(texte[i] != '\0')
	fwrite(">", sizeof(char), 1, fichier);
	{
		couple* Couple = decomposition(texte[i]);
		for(k = 0; k<Couple->x; k++)
		{
			fwrite("+", sizeof(char), 1, fichier);
		}
			fwrite("[<++++++++++>-]<", sizeof(char), 16, fichier);
		for(j = 0; j<Couple->y; j++)
		{
			fwrite("+", sizeof(char), 1, fichier);
		}
		fwrite(".>>", sizeof(char), 3, fichier); // le +'>' pour incrémenter le pointeur de cellule en BF
		i++;
	}
	fclose(fichier);
}
