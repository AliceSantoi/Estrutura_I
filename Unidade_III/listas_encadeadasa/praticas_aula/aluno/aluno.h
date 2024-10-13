#ifndef LIVRO_H
#define LIVRO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct no No;
typedef struct livro Livro;

void adiciona_livro(No **lista, int id, char *titulo, float preco);
void imprime(No *lista);


#endif