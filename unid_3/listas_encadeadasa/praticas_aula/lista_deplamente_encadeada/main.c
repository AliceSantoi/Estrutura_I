#include "lista.h"

int main(void){

    Lista2* lista = NULL;

    lista = lst2(lista,3);
    lista = lst2(lista,4);
    lista = lst2(lista,5);
    lista = lst2(lista,6);
    lista = lst2(lista,7);

    imprime_lista(lista);
    printf("\n===============\n");
    lista = remove_lista(lista, 3);
    printf("\n===============\n");
    imprime_lista(lista);







}