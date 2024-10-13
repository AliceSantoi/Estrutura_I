#include "pilha.h"
#define MAX 10

struct pilha
{
    int num;
    int vet[MAX];
};

Pilha *cria_pilha(void)
{
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    if (pilha == NULL)
    {
        printf("erro ao alocar");
        exit(1);
    }

    pilha->num = 0;
    return pilha;
}

void insere_elemento(Pilha *p, int num)
{
    if (p->num == MAX)
    {
        printf("Capacidade maxima atingida.");
        exit(1);
    }

    p->vet[MAX - 1] = num;
    p->num++;
}

int pilha_vazia(Pilha *p)
{
    return (p->num == 0);
}

int pilha_pop(Pilha *p)
{
    int v;
    if (pilha_vazia(p))
    {
        printf("pilha vazia.\n");
        exit(1);
    }

    v = p->vet[p->num - 1];
    p->num--;
    return v;
}

void pilha_libera(Pilha *p)
{
    free(p);
}
