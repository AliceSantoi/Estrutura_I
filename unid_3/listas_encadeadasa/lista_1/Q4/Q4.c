#include "Q4.h"

struct lista
{
    int num;
    Lista *prox;
};

Lista *insere_lista(Lista *lista, int num)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if (novo == NULL)
    {
        printf("erro ao alocar.");
        exit(1);
    }

    novo->num = num;
    novo->prox = lista;

    return novo;
}

Lista *retira_ocorrencias(Lista *lista, int num)
{
    while (retira_n(&lista, num));
    return lista;
}

int retira_n(Lista **lista, int num)
{
    if (*lista == NULL)
        return 0;
    Lista *aux = *lista;
    if ((*lista)->num == num)
    {
        (*lista) = (*lista)->prox;
        free(aux);
        return 1;
    }

    Lista *ant = NULL;
    while (aux != NULL && aux->num != num)
    {
        ant = aux;
        aux = aux->prox;
    }

    if(aux == NULL){
        return 0;
    }

    ant->prox = aux->prox;
    free(aux);

    return 1;
}

void imprime_lista(Lista *lista)
{
    Lista *count;
    for (count = lista; count != NULL; count = count->prox)
    {
        printf("-> %d\n", count->num);
    }
}
