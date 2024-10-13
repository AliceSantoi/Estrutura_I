#define LISTA_H
#ifdef LISTA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct lista2 Lista2;
Lista2 *lst2(Lista2 *l, int v);
Lista2 *busca_lista(Lista2 *l, int v);
Lista2 *remove_lista(Lista2 *l, int v);
void imprime_lista(Lista2 *lista);


#endif