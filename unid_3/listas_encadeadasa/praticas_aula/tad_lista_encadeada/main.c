#include "lista.h"

int main(void){

    No* lista = NULL;
    No* busca;
    No* remove;


    lista = insere_int(lista,1);
    lista = insere_int(lista,2);
    lista = insere_int(lista,3);
    lista = insere_int(lista,4);
    lista = insere_int(lista,5);
    lista = insere_int(lista,6);
    lista = insere_int(lista,7);

    busca = busca_int(lista,3);
    remove = remove_int(lista,3);
    remove = remove_int(lista,4);
    remove = remove_int(lista,5);

    imprime_lista(lista);
    libera_lista(lista);





}