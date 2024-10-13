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
//p.s: como a questão não pediu retorno, usei um ponteiro de ponteiro para alterar o valor real dentro da lista
void remove_primeiro(Lista **lista)
{
    //[9] -> [8] -> [7] -> [6] -> [5] -> NULL

    if ((*lista) == NULL)
    {
        printf("Lista vazia");
        return;
    }

    Lista *aux = *lista;

    *lista = (*lista)->prox;
    free(aux);
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
