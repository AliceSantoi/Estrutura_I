#ifndef Q4_H
#define Q4_H 
#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

Lista *insere_lista(Lista *lista, int num);
void imprime_lista(Lista *lista);
Lista *retira_ocorrencias(Lista *lista, int num);
int retira_n(Lista **lista, int num);

#endif