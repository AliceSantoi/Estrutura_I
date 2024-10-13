#define FRUTA_H
#ifdef FRUTA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fruta Fruta;
typedef struct no NO;
NO *cria_no(char *nome, float valor);
NO* insere_no_inicio(NO *lista, char *nome, float valor);
void imprime_fruta(NO *lista);



#endif