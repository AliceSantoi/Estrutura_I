#ifndef EX_1
#define EX_1
#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;
Lista *inserir_no_inicio(Lista *lista, int num);
Lista *inserir_no_final(Lista *lista, int num);
void exibir_lista(Lista *lista);
void remove_primeiro(Lista **lista);

#endif