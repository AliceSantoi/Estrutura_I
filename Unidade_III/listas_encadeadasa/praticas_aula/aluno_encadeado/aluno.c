#include "aluno.h"

struct aluno
{
    char nome[100];
    int matricula;
    float media;
};

struct no
{
    Aluno *aluno;
    NO *prox;
};

NO *adiciona_aluno(NO *lista, int matricula, char *nome, float media)
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("erro ao alocar memoria");
        exit(1);
    }

    aluno->matricula = matricula;
    aluno->media = media;
    strcpy(aluno->nome, nome);

    NO *novo = (NO *)malloc(sizeof(NO));
    if (novo == NULL)
    {
        printf("erro");
        exit(1);
    }

    novo->aluno = aluno;
    novo->prox = lista;

    return novo;
}

NO *adiciona_aluno_ordenado(NO *lista, int matricula, char *nome, float media)
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("erro ao alocar memoria");
        exit(1);
    }

    aluno->matricula = matricula;
    aluno->media = media;
    strcpy(aluno->nome, nome);

    NO *novo = (NO *)malloc(sizeof(NO));
    if (novo == NULL)
    {
        printf("ERRO");
        exit(1);
    }
    novo->aluno = aluno;
    if (lista == NULL)
    {
        novo->prox = NULL;
        return novo;
    }
    if (matricula < lista->aluno->matricula)
    {
        novo->prox = lista;
        return novo;
    }
    NO *aux = lista;
    NO *ant;
    while (aux != NULL && aux->aluno->matricula < matricula)
    {
        ant = aux;
        aux = aux->prox;
    }
    ant->prox = novo;
    novo->prox = aux;
    return lista;
}

void imprime_alunos(NO *lista)
{
    NO *count;
    for (count = lista; count != NULL; count = count->prox)
    {
        printf("Matricula: %d\tNome: %s\tMedia: %.1f\n", count->aluno->matricula, count->aluno->nome, count->aluno->media);
    }
}

NO *remove_aluno(NO *lista, int matricula)
{
    NO *count = lista;
    NO *aux = NULL;

    while (count->aluno->matricula != matricula)
    {
        if (count == NULL)
        {
            return lista;
        }

        aux = count;
        count = count->prox;
    }

    if (aux == NULL)
    {
        lista = lista->prox;
    }
    else
    {
        aux->prox = count->prox;
    }

    free(count);
    return lista;
}
