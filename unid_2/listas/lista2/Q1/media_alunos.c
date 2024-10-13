#include <stdio.h>
#include <stdlib.h>

FILE *abre_arquivo(char *nome, char *modo);

int main(void)
{
    char nome[20];
    float nota1, nota2, nota3, media;

    FILE *arquivoEntrada, *arquivoSaida;
    arquivoEntrada = abre_arquivo("entrada_q3.txt", "r");
    arquivoSaida = abre_arquivo("saida_q3.txt", "w");

    while (!feof(arquivoEntrada))
    {
        fscanf(arquivoEntrada, "%20[^\t]\t%f\t%f\t%f", nome, &nota1, &nota2, &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7)
        {
            fprintf(arquivoSaida, "%s\t%.1f\tAprovado", nome, media);
        }
        else
        {
            fprintf(arquivoSaida, "%s\t%.1f\tReprovado", nome, media);
        }
    }
}

FILE *abre_arquivo(char *nome, char *modo)
{
    FILE *arquivo = fopen(nome, modo);
    if (arquivo == NULL)
    {
        printf("Erro ao abrir.");
        exit(1);
    }
    else
    {
        printf("Arquivo aberto.");
    }

    return arquivo;
}