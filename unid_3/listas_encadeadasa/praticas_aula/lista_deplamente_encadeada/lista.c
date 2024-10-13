#include "lista.h"

struct lista2
{
    int info;
    struct lista2 *ant;
    struct lista2 *prox;
};

Lista2 *lst2(Lista2 *l, int v)
{
    Lista2 *novo = (Lista2 *)malloc(sizeof(Lista2));
    if (novo == NULL)
    {
        printf("erro");
    }

    novo->info = v;
    novo->prox = l;
    novo->ant = NULL;

    if (l != NULL)
    {
        l->ant = novo;
    }

    return novo;
}

Lista2 *busca_lista(Lista2 *l, int v)
{
    Lista2 *p;
    for (p = l; p != NULL; p = p->prox)
    {
        if (p->info == v)
        {
            return p;
        }
        return NULL;
    }
}

Lista2 *remove_lista(Lista2 *l, int v)
{
    Lista2 *p = busca_lista(l, v);

    if (p == NULL)
    {
        return l; // não achou o elemento
    }

    // retira o elemento do encadeamento
    if (l == p)
    {
        l = p->prox;
    }
    else
    {
        p->ant->prox = p->prox;
    }

    if (p->prox != NULL)
    {
        p->prox->ant = p->ant;
    }

    free(p);
    return l;
}

void imprime_lista(Lista2 *lista)
{
    Lista2 *count;
    for (count = lista; count != NULL; count = count->prox)
    {
        printf("%d ", count->info);
    }
}