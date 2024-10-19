#include "Q2.h"

struct no
{
    int num;
    No *prox;
};

struct lista
{
    No *inicio;
    No *fim;
};

Lista *criar_lista()
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if (novo != NULL)
    {
        novo->inicio = NULL;
        novo->fim = NULL;
    }

    return novo;
}

Lista* 
