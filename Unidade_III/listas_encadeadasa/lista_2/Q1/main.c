#include "ex_1.h"

int main(void)
{

    Lista *lista = NULL;
    Lista *lista_f = NULL;

    lista = inserir_no_inicio(lista, 5);
    lista = inserir_no_inicio(lista, 6);
    lista = inserir_no_inicio(lista, 7);
    lista = inserir_no_inicio(lista, 8);
    lista = inserir_no_inicio(lista, 9);

    printf("====Exibe no inicio====\n");
    exibir_lista(lista);

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
}