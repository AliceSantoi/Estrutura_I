#include "aluno.h"

struct aluno
{
    char nome[50];
    int matricula; // numero da matrícula do aluno
    Disciplina *disciplinas[10];
    int num_disciplinas;
};

Aluno *cria_aluno(char nome[], int matricula)
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));

    // inicializando as variaveis
    aluno->matricula = matricula;
    strcpy(aluno->nome, nome);
    aluno->num_disciplinas = 0;

    return aluno;
}

void matricula_disciplina(Aluno *aluno, Disciplina *disciplina)
{
    int i;
    // verifica duplicidade de disciplinas cadastradas
    for (i = 0; i < aluno->num_disciplinas; i++)
    {
        if (aluno->disciplinas[i] == disciplina)
        {
            printf("Aluno ja possui está discipliina cadastrada.");
            return;
        }
    }

    // verifica se o aluno ainda poderá cadastrar disciplinas
    if (aluno->num_disciplinas >= 10)
    {
        printf("Atingiu o numero máximo de disciplinas.");
        return;
    }

    // matricula aluno
    aluno->disciplinas[aluno->num_disciplinas] = disciplina;
    aluno->num_disciplinas++;
}

// Imprime aluno cadastrado e suas disciplinas
void imprime_aluno(Aluno *aluno)
{
    printf("Aluno(a): %s\n", aluno->nome);
    printf("Matricula do aluno(a): %d\n", aluno->matricula);
    printf("Numero de disciplinas cadastradas: %d\n", aluno->num_disciplinas);

    int i;
    for (i = 0; i < aluno->num_disciplinas; i++)
    {
        imprime_disciplina(aluno->disciplinas[i]);
    }
}

void exclui_aluno(Aluno *aluno)
{
    free(aluno);
}
