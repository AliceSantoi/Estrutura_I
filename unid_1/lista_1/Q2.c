#include<stdio.h>

int main(){
    int x, *p;
    x = 100;
    p = x;///p armazena endereço de momória e não valores
    printf("Valor de p = %p\n Valor de *p = %d", p, *p);
}

/*a) Será exibida uma mensagem de advertencia
b)Porque p é um ponteiro para inteiro e ponteiro armazenam apenas endereços, não valores
c) Ao compilar o programa a execução será mal sucedida
d) para compilar sem advertencias é preciso que p = &x
e) apos essa alteração a compilação ocorrerá sem advertencias
*/

