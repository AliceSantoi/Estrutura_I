#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void linha();

int main(){
    setlocale(LC_ALL,"portuguese");
    int numero;
    int indexF = 0,indexM = 0;

    printf("Digite o número de entrevistados: ");
    scanf("%d",&numero);

    char* v_secsu = (char*)malloc(numero * sizeof(char));
    char* v_opiniao = (char*)malloc(numero * sizeof(char));

    for(int count = 0; count < numero; count++){
        printf("Sexo do entrevistado (M/F): ");
            scanf("%s[^/n]",v_secsu + count);
        printf("Gostou do produto? (S/N): ");
            scanf("%s[^/n]",v_opiniao + count);
        linha();

            if(*(v_secsu + count) == 'f' || *(v_secsu + count) == 'F'){
                if(*(v_opiniao + count) == 's' || *(v_opiniao + count) == 'S'){
                    (indexF++)*100;

                }
                
            }else if(*(v_secsu + count) == 'm' || *(v_secsu + count) == 'M'){
                 if(*(v_opiniao + count) == 'n' || *(v_opiniao + count) == 'M'){
                    (indexM++)*100;
                }
            }

    }

    float perM,perF;
    perF = (indexF/100);
    perM = (indexM/100);

    printf("%f porcento das mulheres gostaram do produto\n",perF);
    printf("%f porcento dos homens não gostaram do produto",perM);





    return 0;
}


void linha(){
    printf("\n\n");
}
