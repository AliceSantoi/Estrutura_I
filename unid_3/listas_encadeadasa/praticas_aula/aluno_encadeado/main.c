#include "aluno.h"

int main(void){

NO* lista = NULL;
NO* remove;
lista = adiciona_aluno(lista,100,"alice",8.0);
lista = adiciona_aluno(lista,101,"ameinda",5.0);
lista = adiciona_aluno(lista,102,"zunzumbalandia",10.0);
imprime_alunos(lista);
printf("=========================\n");

remove = remove_aluno(lista,100);


imprime_alunos(lista);



}