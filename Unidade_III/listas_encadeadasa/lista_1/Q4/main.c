#include "Q4.h"

int main(void){

    Lista* lista = NULL;

    lista = insere_lista(lista,4);
    lista = insere_lista(lista,5);
    lista = insere_lista(lista,6);
    lista = insere_lista(lista,6);
    lista = insere_lista(lista,8);

    imprime_lista(lista);

    lista = retira_ocorrencias(lista,4);
    printf("\n\n\n");
    imprime_lista(lista);

    








}