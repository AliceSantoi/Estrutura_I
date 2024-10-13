/*1. Escreva um programa em C que solicite ao usuário o tamanho de um vetor e, em seguida, aloque
dinamicamente memória para armazenar esse vetor. Depois disso, peça ao usuário que insira os
elementos do vetor e, por fim, imprima os elementos na ordem inversa.*/
#include<stdio.h>
#include<stdlib.h>

void preenche(int* vetor,int numero);
void imprimeInverso(int* vetor,int numero);

int main(){

    int numero;

    printf("Insira o tamanho do vetor: ");
    scanf("%d",&numero);

    int* vetor = (int*)malloc(numero * (sizeof(int)));

    preenche(vetor,numero);
    imprimeInverso(vetor,numero);

    return 0;
}

void preenche(int* vetor,int numero){
    for(int i = 0; i < numero;i++){
        printf("Insira o termo [%d]: ",i);
        scanf("%d",&vetor[i]);
    }
}

void imprimeInverso(int* vetor,int numero){
    for(int i = numero; i >= 0 ;i--){
        printf("[%d]: %d\n",i,vetor[i]);
    }
}
