#include "aluno.h"

struct livro
{
    int id;
    char titulo[100];
    float preco;
};

struct no
{
    Livro *livro;
    No *prox;
};

void adiciona_livro(No **lista, int id, char *titulo, float preco)
{
    Livro *novo_livro = (Livro *)malloc(sizeof(Livro));
    if (novo_livro == NULL)
    {
        printf("erro");
        exit(1);
    }

    novo_livro->id = id;
    novo_livro->preco = preco;
    strcpy(novo_livro->titulo, titulo);

    No *novo = (No *)malloc(sizeof(No));
    novo->livro = novo_livro;
    novo->prox = *lista;
    *lista = novo;
}

void imprime(No *lista)
{
    No *count;
    for (count = lista; count != NULL; count = count->prox)
    {
        printf("Nome: %s\nPreco: %f\nID: %d\n", count->livro->titulo, count->livro->preco, count->livro->id);
    }
}

void libera_lista(No **lista, int id)
{
    No *aux = *lista;
    No *ant;

    while (aux != NULL)
    {
        ant = aux;
        aux = aux->prox;
        free(ant->livro);
        free(ant);
    }
}

void remove_livro(No** lista, int id){
    
}