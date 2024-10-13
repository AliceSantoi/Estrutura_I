#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    char nome[20];
    struct no *proxima_fruta;

} No;

No *adiciona_fruta_circular(No *lista, char *nome_fruta)
{
    No *nova_fruta = (No *)malloc(sizeof(No));
    if (nova_fruta == NULL)
    {
        printf("Nao foi possivel alocar");
    }

    strcpy(nova_fruta->nome, nome_fruta);
    nova_fruta->proxima_fruta = lista;

    if (lista == NULL)
    {
        lista->proxima_fruta = nome_fruta;
        return nome_fruta;
    }
    // conectando o ultimo elemento com o inicio
    No *aux = lista;
    No *ant = nova_fruta;
    while (aux != nova_fruta)
    {
        ant = aux;
        aux = aux->proxima_fruta;
    }

    ant->proxima_fruta = nova_fruta;
    return nova_fruta;
}

void imprime_lista(No *lista)
{
    No *count;
    for (count = lista; count != NULL; count = count->proxima_fruta)
    {
        printf("%s -> ", count->nome);
    }
}

int main()
{
    No *lista = NULL;

    lista = adiciona_fruta_circular(lista, "uva");
    lista = adiciona_fruta_circular(lista, "abacate");
    lista = adiciona_fruta_circular(lista, "morango");

    imprime_lista(lista);

    return 0;
}