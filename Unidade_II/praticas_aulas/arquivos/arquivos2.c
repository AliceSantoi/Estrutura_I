#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo;
    char txt_arq[50];
    int idade;

    arquivo = fopen("arquivo2.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir");
    }

    // escrevendo no arquivo
    fprintf(arquivo, "Maria\t18\n");
    fclose(arquivo);

    // lendo o que foi escrito

    arquivo = fopen("arquivo2.txt", "r");

    fscanf(arquivo, "%s\t%d", txt_arq, &idade);
    printf("Texto no arquivo:\nNome:%s\nIdade: %d\n", txt_arq, idade);

    fclose(arquivo);
}