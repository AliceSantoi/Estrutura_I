#include "fila.h"

int main(void){

    int valor;
    Fila* fila = cria_fila();

    fila_insere(fila, 10);
    fila_insere(fila, 20);
    fila_insere(fila, 30);
    fila_imprime(fila);

    fila_remove(fila);
    fila_imprime(fila);




}