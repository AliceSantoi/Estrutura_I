#include "fila.h"

struct fila
{
    Lista *inicio;
    Lista *fim;
};

Fila *cria_fila(void)
{
    Fila *fila = (Fila *)malloc(sizeof(Fila));
    if (fila == NULL)
    {
        printf("erro ao alocar!");
        exit(1);
    }

    fila->inicio = NULL;

    fila->fim = NULL;
    return fila;
}

void fila_insere(Fila *fila, float num)
{
    Lista *novo_no = (Lista *)malloc(sizeof(Lista));
    if (novo_no == NULL)
    {
        printf("erro ao alocar!");
        exit(1);
    }

    novo_no->info = num;
    novo_no->prox = NULL;
    if (fila->fim != NULL)
    {
        fila->fim->prox = novo_no;
    }
    else
    {
        fila->inicio = novo_no;
    }
    fila->fim = novo_no;
}

float fila_retira(Fila *fila)
{
    if (fila->inicio == NULL)
    {
        printf("fila vazia!");
        exit(1);
    }
    float elemento = fila->inicio->info;
    fila->inicio = fila->inicio->prox;
    if (fila->inicio == NULL)
    {
        fila->fim = NULL;
    }
    return elemento;
}

void fila_imprime(Fila *fila)
{
    Lista *count;
    for (count = fila->inicio; count != NULL; count = count->prox){
    printf(" %.2f \t", count->info);
    }
}
