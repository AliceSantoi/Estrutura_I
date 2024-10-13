#include "disciplina.h"

struct disciplina
{
    char nome[100];
    int codigo;
};

Disciplina *cria_disciplina(char nome[], int codigo)
{
    Disciplina *disciplina = (Disciplina *)malloc(sizeof(Disciplina));
    if (disciplina == NULL)
    {
        printf("Sem espaco na memoria.");
        exit(1);
    }

    // inicializa as variaveis com os valores passados por parametro
    disciplina->codigo = codigo;
    strcpy(disciplina->nome, nome);

    return disciplina;
}

// imprime as disciplinas cadastradas
void imprime_disciplina(Disciplina *disciplina)
{
    enfeite();
    printf("Disciplina: %s\n", disciplina->nome);
    printf("Codigo da disciplina: %i", disciplina->codigo);
    enfeite();
}

void enfeite()
{
    printf("\n==============================\n");
}

void exclui_disciplina(Disciplina *disciplina)
{
    free(disciplina);
}
