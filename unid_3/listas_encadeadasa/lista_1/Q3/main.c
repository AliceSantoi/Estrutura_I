#include "Q3.h"

int main()
{
    Lista *l = NULL;
    l = insere_inicio(l, 5.0);
    l = insere_inicio(l, 3.0);
    l = insere_inicio(l, 4.0);

    imprime_lista(l);
    printf("\n");

    Lista *l1 = NULL;

    Lista *concatenada = concatena(l, l1);
    imprime_lista(concatenada);
    printf("\n");
}