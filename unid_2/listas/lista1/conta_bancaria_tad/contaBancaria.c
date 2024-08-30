#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contaBancaria.h"

struct ContaBancaria
{
    char titular[20]; // nome da pessoa
    int numero;       // numero da conta
    float saldo;      // saldo da conta
};

ContaB *cria_conta(char *titular, int numero, float saldo)
{
    ContaB *dados = (ContaB *)malloc(sizeof(ContaB));
    if (dados == NULL)
    {
        printf("Sem memoria.");
        exit(1);
    }

    // inicializa conta
    dados->numero = numero;
    dados->saldo = saldo;
    strcpy(dados->titular, titular);

    return dados;
}

void deposita(ContaB *conta, float dinheiro)
{
    conta->saldo = conta->saldo + dinheiro;
    printf("Valor atualizado: %.1f\n", conta->saldo);
}

void sacar(ContaB *conta, float valor)
{
    if (conta->saldo >= valor)
    {
        conta->saldo = conta->saldo - valor;
        printf("Valor sacado com sucesso!\n");
    }
    else
    {
        printf("Saldo insuficiente!\n");
    }
}

void transfere(ContaB *conta, ContaB *conta2, float valor)
{
    if (conta->saldo >= valor)
    {
        conta2->saldo = conta->saldo - valor;
        printf("Transferencia aprovada: \nValor transferido para %s: %.1f", conta2->titular, conta->saldo - valor);
    }
    else
    {
        printf("Saldo insuficiente");
    }
}
