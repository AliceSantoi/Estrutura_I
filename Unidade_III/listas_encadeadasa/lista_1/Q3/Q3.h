#ifndef Q3_h
#define Q3_h
#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

Lista *insere_inicio(Lista *lista, float num);

Lista *concatena(Lista *lista1, Lista *lista2);

void imprime_lista(Lista *lista);

#endif