#include "Q1.h"

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
void remove_primeiro_inicio(Lista **lista)
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

void remove_primeiro_final(Lista **lista)
{
    //[9] -> [8] -> [7] -> [6] -> [5] -> NULL

    if ((*lista) == NULL)
    {
        printf("Lista vazia");
        return;
    }

    if ((*lista)->prox == NULL)
    {
        free(*lista);
        *lista = NULL;
    }

    Lista *aux = *lista;
    Lista *ant = NULL;
    // terminar remover no no final

    while (aux->prox != NULL)
    {
        ant = aux;
        aux = aux->prox;
    }

    ant->prox = NULL;
    free(aux);
}

void buscar(Lista **lista, int valor)
{
    Lista *aux = (*lista);
    Lista *ant = NULL;
    while (aux && aux->num != valor)
    {
        aux = aux->prox;
    }
    if (aux)
    {
        ant = aux;
        printf("Valor encontrado.");
        return;
    }

    printf("valor nao encontrado.");
    return;
}

Lista *remover_valor(Lista *lista, int valor)
{
    if (lista == NULL)
    {
        return lista;
    }

    Lista *aux = lista;
    Lista *ant = NULL;

    // checar se o valor é o primeiro do No
    if (lista->num == valor)
    {
        lista = lista->prox;
        free(aux);
        return lista;
    }

    // se não, procurar o valor na lista
    while (aux != NULL && aux->num != valor)
    {
        ant = aux;
        aux = aux->prox;
    }

    if (aux)
    {
        ant->prox = aux->prox;
        free(aux);
    }

    return lista;
}

Lista *inserir_apos(Lista *lista, int valor, int novo_valor)
{
    if (lista == NULL)
    {
        return lista;
    }

    Lista *aux = lista;

    while (aux != NULL && aux->num != valor)
    {
        aux = aux->prox;
    }

    if (aux != NULL)
    {
        Lista *novo_no = (Lista *)malloc(sizeof(Lista));
        novo_no->num = novo_valor;
        novo_no->prox = aux->prox;
        aux->prox = novo_no;
    }

    return lista;
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

void menu(){

    char opcao;

    printf("[1] - Inserir no inicio.");
    printf("[2] - Inserir no final.");
    printf("[3] - Exibir lista.");
    printf("[4] - Remover primeiro.");
    


    switch (opcao)
    {
    case '1':
        printf("");
        break;
    
    default:
        break;
    }




}