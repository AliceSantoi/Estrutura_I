#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    int matricula;
    char nome[20];
    float media;
};

Aluno *criar_aluno(int matricula, char nome[], float media)
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("erro ao alocar.");
    }

    aluno->matricula = matricula;
    strcpy(aluno->nome, nome);
    aluno->media = media;

    return aluno;
}

void salvarAlunoEmArquivo(char *nome_arquivo, Aluno *aluno)
{
    FILE *arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL)
    {
        printf("erro ao abrir arquivo.");
    }
    fprintf(arquivo, "%s\t%d\t%f", aluno->nome, aluno->matricula, aluno->media);
    fclose(arquivo);
}

void exibirAlunos(char *nome_arquivo)
{
    FILE *arquivo;
    Aluno *aluno;
    int cont = 1;
    arquivo = fopen(nome_arquivo, "r");
    while (fscanf(arquivo, "%[^\t]\t%d\t%f\t", aluno->nome, &aluno->matricula, &aluno->media) != EOF)
    {
        printf("Aluno %d: %s\t%d\t%.1f\n", cont, aluno->nome, aluno->matricula, aluno->media);
        cont++;
    }
    fclose(arquivo);
}

void limpa(Aluno *aluno)
{
    free(aluno);
}
