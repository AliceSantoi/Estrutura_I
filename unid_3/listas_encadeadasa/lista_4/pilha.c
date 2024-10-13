#include "pilha.h"

struct pilha
{
    int numero;
    float vet[MAX];
};

Pilha *pilha_cria(void)
{
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    if (pilha == NULL)
    {
        printf("erro ao alocar");
        exit(1);
    }

    pilha->numero = 0;
    return pilha;
}

void pilha_push(Pilha *p, float numero)
{
    if (p->numero == MAX)
    {
        printf("Capacidade máxima atingida.");
        return;
    }
    p->vet[MAX - 1] = numero;
    p->numero++;
}

int pilha_vazia(Pilha *p)
{
    return (p->numero == 0);
}

float pilha_pop(Pilha *p)
{
    float valor;
    if (pilha_vazia(p))
    {
        printf("Pilha vazia!");
    }

    valor = p->vet[p->numero - 1];
    p->numero--;
    return valor;
}