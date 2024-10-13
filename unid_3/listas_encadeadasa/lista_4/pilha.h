#define PILHA_H
#ifdef PILHA_H

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct pilha Pilha;

Pilha *pilha_cria(void);
void pilha_push(Pilha *p, float v);
float pilha_pop(Pilha *p);
int pilha_vazia(Pilha *p);
void pilha_libera(Pilha *p);

#endif