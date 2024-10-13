#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct disciplina Disciplina;

Disciplina *cria_disciplina(char nome[], int codigo);

void imprime_disciplina(Disciplina *disciplina);

// traços para separar as informações (e enfeitar)
void enfeite();

void exclui_disciplina(Disciplina *disciplina);
