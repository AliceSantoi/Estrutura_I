#include "Q1.h"

int main(void)
{

    Lista *lista = NULL;

    lista = inserir_no_inicio(lista, 1);
    lista = inserir_no_inicio(lista, 2);
    lista = inserir_no_inicio(lista, 3);
    lista = inserir_no_inicio(lista, 4);
    lista = inserir_no_inicio(lista, 5);

    printf("====Exibe no inicio====\n");
    exibir_lista(lista);

    Lista *lista_f = NULL;

    lista_f = inserir_no_final(lista_f, 1);
    lista_f = inserir_no_final(lista_f, 2);
    lista_f = inserir_no_final(lista_f, 3);
    lista_f = inserir_no_final(lista_f, 4);
    lista_f = inserir_no_final(lista_f, 5);
    printf("====Exibe no final====\n");
    exibir_lista(lista_f);

    printf("===Remove o primeiro no da lista===\n");
    printf("===Lista que insere no inicio===\n");
    remove_primeiro_inicio(&lista);
    exibir_lista(lista);

    printf("===Remove o primeiro no da lista===\n");
    printf("===Lista que insere no final===\n");
    remove_primeiro_final(&lista_f);
    exibir_lista(lista_f);

    printf("===Buscar valor===\n");
    buscar(&lista, 4);

    Lista *remove = remover_valor(lista, 2);

    printf("\n===Remover valor===\n");
    exibir_lista(remove);

    Lista *inserir = inserir_apos(lista_f, 4, 5);

    printf("\n===Inserir apos===\n");
    exibir_lista(inserir);
}