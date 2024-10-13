#include "pilha_encadeada.h"

struct lista
{
    int info;
    struct lista *prox;
};

struct pilha
{
    Lista *pilha;
};

Pilha *pilha_cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->pilha = NULL;
    return p;
}

void pilha_push(Pilha *p, int v)
{
    Lista *n = (Lista *)malloc(sizeof(Lista));
    n->info = v;
    n->prox = p->pilha;
    p->pilha = n;
}

int pilha_pop(Pilha *p)
{
    Lista *t;
    int v;
    if (pilha_vazia(p))
    {
        printf("pilha vazia.\n");
        exit(1);
    }
    t = p->pilha;
    v = t->info;
    p->pilha = t->prox;
    free(p);
    return v;
}

int pilha_vazia(Pilha *p)
{
    return (p->pilha == NULL);
}

void libera_pilha(Pilha *p)
{
    Lista *count = p->pilha;
    Lista *t;
    while (count != NULL)
    {
        t = count->prox;
        free(count);
        count = t;
    }
    free(p);
}

//falta arrumar o imprima 
void imprime_pilha(Pilha *p)
{
    Pilha *count;
    for (count = p->pilha; count != NULL; count = count->pilha)
    {
        printf("%d ", count->pilha);
    }
}