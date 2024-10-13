#ifndef ALUNO_H
#define ALUNO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno Aluno;
typedef struct no NO;
NO *adiciona_aluno(NO *lista, int matricula, char *nome, float media);
void imprime_alunos(NO* lista);
NO* remove_aluno(NO* lista, int matricula);
NO* adiciona_aluno_ordenado(NO* lista, int matricula, char*
nome, float media);




#endif