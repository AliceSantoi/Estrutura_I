#include "Q1.h"

int main(void)
{
    Lista *lista = NULL;

    //como receber pelo teclado
    lista = insere_inicio(lista, 3);
    lista = insere_inicio(lista, 4);
    lista = insere_inicio(lista, 5);
    lista = insere_inicio(lista, 6);

    int tamanho = maiores(lista, MAX);

    printf("====Listas encadeada====\n");
    imprime_lista(lista);

    printf("Elementos maiores que %d: %d\n", MAX, tamanho);

    Lista *ultimoNo = ultimo(lista);
    //imprime_ultimoNo(ultimoNo);

    limpa_lista(lista);
}