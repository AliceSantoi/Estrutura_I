#include "pilha.h"

int main()
{

    Pilha *pilha = pilha_cria();
    int i;
    float num;

    for (i = 0; i < 5; i++)
    {
        printf("=> ");
        scanf("%f", &num);
        pilha_push(pilha, num);
    }

    while(!pilha_vazia(pilha)){
        printf("%f",pilha_pop(pilha));
    }



    return 0;
}