#include "lista.h"

struct no
{
    int numero;
    struct no *proximo;
};

No *insere_int(No *lista, int numero)
{
    No *novo_numero = (No *)malloc(sizeof(No));
    if (novo_numero == NULL)
    {
        printf("erro ao alocar ");
        exit(1);
    }

    novo_numero->numero = numero;
    novo_numero->proximo = lista;

    return novo_numero;
}

void imprime_lista(No *lista)
{
    No *count;
    for (count = lista; count != NULL; count = count->proximo)
    {
        printf("%d ", count->numero);
    }
}

void libera_lista(No *lista)
{
    No *count = lista;
    No *aux;
    while (count != NULL)
    {
        aux = count->proximo;
        free(count);
        count = aux;
    }
}

No *busca_int(No *lista, int numero)
{
    No *count;
    for (count = lista; count != NULL; count = count->proximo)
    {
        if (count->numero == numero)
        {
            printf("Valor %d encontrado!\n", count->numero);
            return count;
        }
    }

    printf("numero nao encontrado");

    return NULL;
}

No* remove_int(No*lista, int numero){
    No* count = lista;
    No* aux = NULL;
    while(count->numero!=numero){
        if(count==NULL){
            return lista;
        }

        aux = count;
        count=count->proximo;

    }   

    if(aux == NULL){
        lista = lista->proximo;
    }else{
        aux->proximo = count->proximo;//elemento esta no meio ou no final da lista
        
    }
    free(count);
    return lista;

}