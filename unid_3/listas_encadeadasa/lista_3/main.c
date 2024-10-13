#include "fruta.h"

int main(void){

    NO* lista = NULL;
    int opcao;
    char nome[20];
    float preco;

    do{
        printf("1 - Cadastrar fruta\n");
        printf("2 - Exibir lista de frutas\n");
        printf("3 - Sair\n");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o nome da fruta:");
            scanf(" %[^\n]",nome);
            printf("Digite o valor por kg:");
            scanf("%f",&preco);
            lista = insere_no_inicio(lista,nome,preco);
        break;
        
        case 2:
            imprime_fruta(lista);

        break;

        default:
            printf("opcao invalida");
            break;
        }

    }while(opcao != 3);
    





}