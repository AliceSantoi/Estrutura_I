#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;

Pilha *cria_pilha(void);

void insere_elemento(Pilha *p, int num);

int pilha_vazia(Pilha *p);

int pilha_pop(Pilha *p);

void pilha_libera(Pilha *p);
