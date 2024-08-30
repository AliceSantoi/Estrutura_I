#ifdef ALUNO_H
#define ALUNO_H

#endif

typedef struct aluno Aluno;

Aluno *criar_aluno(int matricula, char nome[], float media);

void salvarAlunoEmArquivo(char *nome_arquivo, Aluno *aluno);

void exibirAlunos(char *nome_arquivo);

void limpa(Aluno* aluno);