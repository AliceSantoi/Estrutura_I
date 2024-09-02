#include <stdio.h>

int busca_linear(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)//c1 n
    {
        if (arr[i] == x)//c2 1
        {
            return i;
        }
    }
    return -1;
}

/*Qual  ́e a complexidade de tempo desse algoritmo no pior caso? Como ela se compara com
a complexidade de tempo de uma busca binaria em um array ordenado?


t(n) = c1(n) + c2(1)
t(n) = c1(n) + b
t(n)= an + b
t(n) = O(n)
o pior caso da busca linear é 0(n), ou seja, o item procurado estaria na ultima posição do array

a busca binária em um array ordenado tem complexidade O(log n), que acaba sendo mais efetiva do que a linear
*/