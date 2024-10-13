#include "pilha.h"

int main(void)
{

    Pilha *pilha = cria_pilha();
    int i;
    for (i = 0; i < 10; i++)
    {
        insere_elemento(pilha, i + 0);
    }
    while (!pilha_vazia(pilha))
    {
        printf("%d ", pilha_pop(pilha));
    }
    printf("\n");
    pilha_libera(pilha);
}