#include "Q3.h"

struct lista
{
    float num;
    Lista *prox;
};

Lista *insere_inicio(Lista *lista, float num)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if(novo == NULL){
        printf("erro aos alocar.");
        exit(1);
    }

    novo->num = num;
    novo->prox = lista;
    lista = novo;

    return novo;
}

Lista *concatena(Lista *lista1, Lista *lista2)
{
    Lista *aux = lista1;
    
    if (lista1 == NULL)
    {
        return lista2;
    }

    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    aux->prox = lista2;

    return lista1;
}

void imprime_lista(Lista *lista)
{
    Lista *count;
    for (count = lista; count != NULL; count = count->prox)
    {
        printf("-> %.2f\n", count->num);
    }
}