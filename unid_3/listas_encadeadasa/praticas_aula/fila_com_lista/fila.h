#define FILA_H
#ifdef FILA_H
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct fila Fila;

Fila *cria_fila(void);

void fila_insere(Fila *fila, float num);

float fila_retira(Fila *fila);

void fila_imprime(Fila *fila);

#endif