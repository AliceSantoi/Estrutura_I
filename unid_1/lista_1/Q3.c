
#include <stdio.h>

    int main(void) {
    int a, b, c, d;//as variáveis serão inicializad￼as;
    int *p1;//será criado um ponteiro de inteiro para p1;
    int *p2 = &a;//outro ponteiro de inteiro será inicializado, esse armazena o endereço da variável a 
    int *p3 = &c;//e esse outro ponteiro de inteiro armazenara o endereço de c
    p1 = p2;//p1 recebe o endereço que p2;
    *p2 = 10;//Agora o ponteiro está atribuindo um valor para a variável a
    b = 20;
    int **pp;//um ponteiro para ponteiro de inteiro é criado
    pp = &p1;//pp recebe o endereço do ponteiro p
    *p3 = **pp;//o valor armazenado no endereço para qual p3 está apontando (c), receberá o valor armazenado no endereço de p1,
    //ou seja, pp = (endereço de p1 = (endereço de p2 = (endereço de a = 10))) -> p3 = o valor contido em a, logo, c tambem receberá esse valor,
    //ja que *p3 altera o valor do endereço que armazena. Resumo: c = 10
    int *p4 = &d;//mais um ponteiro para inteiro, esse armazena o endereço de d
    *p4 = b + (*p1)++;//*p4(o mesmo que acessar a variável d) = b(20) + (*p1(o mesmo que acessar o volor de a)) + 1
    //resultado: *p4 = 31
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);

    //a = 11; b = 20; c = 10; d = 30
return 0;
}




