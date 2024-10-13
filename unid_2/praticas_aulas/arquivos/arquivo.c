#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE *pont_arq;
    int r;
    char text_str[51];

    // abrindo arquivo para gravação
    pont_arq = fopen("arquivo.txt", "w");

    // testando se o arquivo vai abrir da forma correta
    if (pont_arq == NULL)
    {
        printf("Erro ao abrir");
        exit(1);
    }
    // gravando string no arquivo
    r = fputs("Programando em C.", pont_arq);
    if (r == EOF)
    {
        printf("Erro ao tentar gravar os dados");
        exit(1);
    }

    // fechano o arquivo
    fclose(pont_arq);

    printf("\n---- Leitura dos dados gravados no arquivo ----");
    pont_arq = fopen("arquivo2.txt", "r");

    system("pause");

    return 0;
}