#include "aluno.h"

int main(void)
{

    Aluno *aluno1 = criar_aluno(123, "alice", 7);
    Aluno *aluno2 = criar_aluno(456, "carol", 9);

    salvarAlunoEmArquivo("cadastro.txt", aluno1);
    exibirAlunos("cadastro.txt");

    salvarAlunoEmArquivo("cadastro.txt", aluno2);
    exibirAlunos("cadastro.txt");

    limpa(aluno1);
    limpa(aluno2);
}