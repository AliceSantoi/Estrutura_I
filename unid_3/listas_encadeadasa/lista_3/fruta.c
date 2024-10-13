#include "fruta.h"

struct fruta
{
    char nome[50];
    float v_kg;
};

struct no
{
    Fruta *fruta;
    NO *ant;
    NO *prox;
};

NO *cria_no(char *nome, float valor)
{
    NO *novo_no = (NO *)malloc(sizeof(NO));
    novo_no->fruta = (Fruta *)malloc(sizeof(Fruta));
    if (!novo_no || !novo_no->fruta)
    {
        printf("erro ao alocar");
        exit(1);
    }

    novo_no->fruta->v_kg = valor;
    strcpy(novo_no->fruta->nome, nome);
    novo_no->prox = NULL;
    novo_no->ant = NULL;

    return novo_no;
}

NO* insere_no_inicio(NO *lista, char *nome, float valor)
{
    NO *nova_fruta = cria_no(nome, valor);
    if (!lista)
    {
        lista = nova_fruta;
    }
    else
    {
        nova_fruta->prox = lista;
        lista->ant = nova_fruta;
    }

    return nova_fruta;
}

void imprime_fruta(NO *lista)
{
    if (!lista)
    {
        printf("lista vazia!");
        exit(1);
    }
    NO *count;
    for (count = lista; count != NULL; count = count->prox)
    {
        printf("Nome: %s\nValor: %.1f\n", count->fruta->nome, count->fruta->v_kg);
    }
}


