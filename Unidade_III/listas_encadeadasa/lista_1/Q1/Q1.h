#ifndef Q1_H
#define Q1_H

#include <stdio.h>
#include <stdlib.h>
#define MAX 2

typedef struct lista Lista;
Lista* insere_inicio(Lista* lista, int num);
void imprime_lista(Lista* lista);
int maiores(Lista *lista, int num);
void limpa_lista(Lista* lista);
Lista *ultimo(Lista *lista);
void imprime_ultimoNo(Lista *ultimo);


#endif

