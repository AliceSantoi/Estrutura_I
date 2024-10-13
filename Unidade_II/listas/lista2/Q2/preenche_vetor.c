#include <stdio.h>
#include <stdlib.h>

FILE *abreArquivo(char *nomeArquivo, char *modo);
void maiorMenor(FILE *nomeEntrada, FILE *nomeSaida, int vetor[], int tamanho);
void media(FILE *nomeEntrada, FILE *nomeSaida, int vetor[], int tamanho);

int main()
{

    FILE *arquivoEntrada, *arquivoSaida;
    int num[10];
    arquivoEntrada = abreArquivo("entrada_q2.txt", "r");
    arquivoSaida = abreArquivo("saida_q2.txt", "w");
    maiorMenor(arquivoEntrada, arquivoSaida, num, 10);
    media(arquivoEntrada, arquivoSaida, num, 10);

    return 0;
}

FILE *abreArquivo(char *nomeArquivo, char *modo)
{
    FILE *arquivo = fopen(nomeArquivo, modo);
    if (arquivo == NULL)
    {
        printf("Não foi possível abrir!");
        exit(1);
    }

    return arquivo;
}

void maiorMenor(FILE *nomeEntrada, FILE *nomeSaida, int vetor[], int tamanho)
{

    int i, maior, menor;
    fscanf(nomeEntrada, "%d", &vetor[0]);
    maior = menor = vetor[0];
    for (i = 1; i < tamanho; i++)
    {
        if (fscanf(nomeEntrada, "%d", &vetor[i]) != 1)
        {
            break;
        }

        else if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    fprintf(nomeSaida, "maior:%d\nmenor:%d\n", maior, menor);

    fclose(nomeEntrada);
}

void media(FILE *nomeEntrada, FILE *nomeSaida, int vetor[], int tamanho)
{
    int i;
    float media = 0;
    for (i = 0; i < tamanho; i++)
    {
        fscanf(nomeEntrada, "%d", &vetor[i]);
        media += vetor[i];
    }

    fprintf(nomeSaida, "media dos elementos: %.1f", media / 3);
    fclose(nomeSaida);
}
