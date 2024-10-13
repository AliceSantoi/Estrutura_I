#include "Q1.h"

struct lista
{
    int info;
    Lista *prox;
};
// insere no inicio

Lista *insere_inicio(Lista *lista, int num)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));

    novo->info = num;
    novo->prox = lista;
    lista = novo;

    return novo;
}

void imprime_lista(Lista *lista)
{
    Lista *count;
    for (count = lista; count != NULL; count = count->prox)
    {
        printf("-> %d\n", count->info);
    }
}

int maiores(Lista *lista, int num)
{
    Lista *index = lista;
    int count;
    while (index != NULL)
    {
        if (index->info > num)
        {
            count++;
        }

        index = index->prox;
    }

    return count;
}

// implementação da questão 2
Lista *ultimo(Lista *lista)
{
    if (lista == NULL)
    {
        return NULL;
    }

    while (lista->prox != NULL)
    {
        lista = lista->prox;
    }

    return lista;
}



void imprime_ultimoNo(Lista *ultimo)
{
    if (ultimo != NULL){
        printf("ultimo no: %d",ultimo->info);
    }
}

void limpa_lista(Lista *lista)
{
    Lista *p = lista;
    while (p != NULL)
    {
        Lista *l = p->prox;
        free(p);
        p = l;
    }
}