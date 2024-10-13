#include <stdio.h>
#include "contaBancaria.h"

int main()
{
    ContaB *recebeConta = cria_conta("Alice", 2000, 1000.0);
    ContaB *recebeContaII = cria_conta("Maria", 2000, 0);
    deposita(recebeConta, 3000);
    sacar(recebeConta, 1000);
    transfere(recebeConta, recebeContaII, 3000);
}