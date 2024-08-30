// Algoritmo A
void algoritmo_a(int n)
{
    for (int i = 0; i < n; i++) // c1 n
    {
        for (int j = 0; j < n; j++) // c2 n²
        {
            printf("%d, %d\n", i, j); // c3 n²
        }
    }
}

// t(n) = (n²)(c2 + c3) + c1;
// t(n) = n²a + c1 -> elimina as constantes de soma
// t(n) = n²a -> elimina as constantes multiplicativas
// t(n) = n²
// O(n²)

// Algoritmo B
void algoritmo_b(int n)
{
    for (int i = 0; i < n; i++) // c1 n
    {
        printf("%d\n", i);
    }
    for (int j = 0; j < n; j++) // c2 n
    {
        printf("%d\n", j);
    }
}

// t(n) = (n)(c1 + c2)
// t(n) = (n)(a)
// t(n) = na
// t(n) = n
// O(n)

/*Determine a complexidade de tempo de cada algoritmo e identifique qual ´e o mais eficiente
em termos de complexidade. Justifique sua resposta.

O algoritmo B é mais eficiente que o A, pois funciona em tempo linear*/
