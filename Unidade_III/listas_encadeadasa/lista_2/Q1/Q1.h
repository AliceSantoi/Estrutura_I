#ifndef Q1_H
#define Q1_H
#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;
Lista *inserir_no_inicio(Lista *lista, int num);
Lista *inserir_no_final(Lista *lista, int num);
void exibir_lista(Lista *lista);
void remove_primeiro_inicio(Lista **lista);
void remove_primeiro_final(Lista **lista);
void buscar(Lista **lista, int valor);
Lista *remover_valor(Lista *lista, int valor);
Lista *inserir_apos(Lista *lista, int valor, int novo_valor);

#endif