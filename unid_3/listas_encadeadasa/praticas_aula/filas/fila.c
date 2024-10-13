#include "fila.h"

struct fila
{
    int inicio;
    int fim;
    int numero_elementos;
    int qnt_max[MAX];
};

Fila *cria_fila(void)
{
    Fila *fila = (Fila *)malloc(sizeof(Fila));
    fila->inicio = 0;
    fila->fim = 0;
    fila->numero_elementos = 0;
    return fila;
}

void fila_insere(Fila *fila, int valor)
{
    if (fila_cheia(fila))
    {
        printf("capacidade maxima alcançada!");
        exit(1);
    }
    fila->qnt_max[fila->fim] = valor;
    fila->fim = incrementa(fila->fim);
    fila->numero_elementos++;
}

int fila_remove(Fila *fila)
{
    if (fila_vazia(fila))
    {
        printf("fila vazia.");
        exit(1);
    }
    int elemento = fila->qnt_max[fila->inicio];
    fila->inicio = incrementa(fila->inicio);
    fila->numero_elementos--;
    return elemento;
}

int fila_vazia(Fila *fila)
{
    return (fila->inicio == fila->numero_elementos);
}

int fila_cheia(Fila *fila)
{
    return (fila->numero_elementos == MAX);
}

void libera_fila(Fila *fila)
{
    free(fila);
}

void fila_imprime(Fila *fila)
{
    int index;
    printf("Fila: \" ");
    for (index = fila->inicio; index < fila->numero_elementos; index = incrementa(index))
    {
        printf("%d ", fila->qnt_max[index]);
    }
    printf("\"\n");
}

int incrementa(int i)
{
    return (i + 1 % MAX);
}