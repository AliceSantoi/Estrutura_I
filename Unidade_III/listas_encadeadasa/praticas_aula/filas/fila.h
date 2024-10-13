#define FILA_H
#ifdef FILA_H

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct fila Fila;

Fila *cria_fila(void);

void fila_insere(Fila* fila, int valor);

int fila_remove(Fila* fila);

int fila_vazia(Fila* fila);

int fila_cheia(Fila* fila);

void libera_fila(Fila* fila);

void fila_imprime(Fila* fila);

int incrementa(int i);


#endif