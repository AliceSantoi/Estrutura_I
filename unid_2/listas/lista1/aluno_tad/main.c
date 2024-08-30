#include "aluno.h"

int main(void)
{

    Disciplina *matematica = cria_disciplina("Matematica", 4001);
    Disciplina *ingles = cria_disciplina("Ingles", 4002);
    Disciplina *historia = cria_disciplina("Historia", 4003);

    imprime_disciplina(matematica);
    imprime_disciplina(ingles);
    imprime_disciplina(historia);

    Aluno *aluno1 = cria_aluno("Alice", 01);
    Aluno *aluno2 = cria_aluno("Caroline", 02);

    matricula_disciplina(aluno1, matematica);
    matricula_disciplina(aluno1, ingles);
    matricula_disciplina(aluno1, historia);
    matricula_disciplina(aluno2, historia);

    imprime_aluno(aluno1);
    imprime_aluno(aluno2);

    exclui_disciplina(matematica);
    exclui_disciplina(ingles);
    exclui_disciplina(historia);

    exclui_aluno(aluno1);
    exclui_aluno(aluno2);
}