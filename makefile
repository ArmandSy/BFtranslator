all: PROJET

bftranslator.o: bftranslator.c bftranslator.h 
	gcc -c -Wall -g -ggdb bftranslator.c
main.o: main.c
	gcc -c -Wall -g -ggdb main.c
PROJET: bftranslator.o main.o 
	gcc -o PROJET main.o bftranslator.o
EXECUTION: 
	./PROJET
