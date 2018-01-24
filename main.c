#include "bftranslator.h"

int main()
{

	//printf("%d et %d", decomposition('z')->x, decomposition('z')->y); OK
	char* texte = "J'ai reussi a coder un brainfuck translator en C mwahaha";
	textToBF(texte);
	return 0;
}