#include "ex_1.h"

struct lista
{
    int num;
    Lista *prox;
};

Lista *inserir_no_inicio(Lista *lista, int num)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if (novo == NULL)
    {
        printf("erro ao alocar");
        exit(1);
    }

    novo->num = num;
    novo->prox = lista;
    lista = novo;

    return novo;
}

Lista *inserir_no_final(Lista *lista, int num)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if (novo == NULL)
    {
        printf("erro ao alocar.");
        exit(1);
    }

    novo->num = num,
    novo->prox = NULL;

    if (lista == NULL)
    {
        return novo;
    }

    Lista *aux = lista;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    aux->prox = novo;
    return lista;
}

void remove_primeiro(Lista* lista){
    if(lista == NULL){
        printf("lista vazia!");
        return;
    }

    
}

void exibir_lista(Lista *lista)
{
    Lista *count = lista;
    while (count != NULL)
    {
        printf("-> %d\n", count->num);
        count = count->prox;
    }
}

