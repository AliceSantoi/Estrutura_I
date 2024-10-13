/*Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6.*/


#include<stdio.h>
#include<stdlib.h>

void gabarito(char* g,int num);
void respostas(char *r,char* g,int num);

int main(){

    int numero;
    char *g,*r;;

    printf("numero de questoes: ");
    scanf("%d",&numero);

    g  = (char*)malloc(numero * sizeof(char));
    r = (char*)malloc(numero * sizeof(char));

    gabarito(g,numero);
    respostas(r,g,numero);


    return 0;
}

void gabarito(char* g,int num ){
    printf("Gabarito:\n");
    //laço que preenche o gabarito
    for(int index = 0;index < num;index++){
        printf("Questao %d: ",index + 1);
        scanf(" %c",&g[index]);
    }

}

void respostas(char *r,char* g,int num){
    int nota = 0;
    printf("Respostas:\n");
    //laço para percorrer os 10 alunos
    for(int count = 0; count < 10;count++){
        printf("Aluno %d:\n",count + 1);
        
        //laço para percorrer as n questões e armazenar as respostas dos 10 alunos
        for(int index = 0; index < num;index++){
            printf("Q1: ");
            scanf(" %c",&r[index]);

            //condição que armazena nota caso esteja igual ao gabarito
           
            if(r[index] == g[index]){
                nota+=10;
            }    
        }
    printf("Nota: %d",nota);
    }
}





