/*Implemente um programa em C que solicite ao usu´ario o n´umero de linhas e colunas de uma matriz e,
em seguida, aloque dinamicamente mem´oria para armazenar essa matriz. Pe¸ca ao usu´ario que insira
os elementos da matriz e, por fim, imprima a matriz na forma original e transposta*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas;

    printf("Informe as linhas e colunas, respectivamente:\n");
    scanf("%d%d", &linhas, &colunas);
    
    //alocação dz matriz 
    int **matriz = (int**)malloc(linhas*sizeof(int));
        for(int count = 0; count < linhas;count++){
            matriz[count] = (int*)malloc(colunas*sizeof(int));
        }

    //preenchimento da matriz 
    printf("Insira os elementos da matriz:\n ");
        for(int linha = 0;linha < linhas;linha++){
            for(int coluna = 0;coluna < colunas;coluna++){
                scanf("%d",&matriz[linha][coluna]);
            }
        }
    //impressão matriz original
    printf("Matriz original:\n");
        for(int linha = 0;linha < linhas;linha++){
            for(int coluna = 0;coluna < colunas;coluna++){
                printf("%d",matriz[linha][coluna]);
            }
            printf("\n");
        }

    //impressão matriz transposta
    printf("Matriz transposta:\n");
    for(int linha = 0;linha < linhas;linha++){
            for(int coluna = 0;coluna < colunas;coluna++){
                printf("%d",matriz[coluna][linha]);
            }
            printf("\n");
        }

    //liberar cada vetor que foi alocado
    for(int i = 0;i < linhas;i++){
        free(matriz[linhas]);
    }

    free(matriz);
    return 0;
}