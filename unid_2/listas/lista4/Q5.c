void selection_sort(int arr[], int n)
{
    int i, j, min_idx;//c1 1
    for (i = 0; i < n - 1; i++)//c2 n
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)//c3 n * n
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
Pergunta : Qual  ́e a complexidade de tempo desse algoritmo ? Existem algoritmos de ordena ̧c ̃ao mais
                                                                 eficientes
           ? Se sim, cite um exemplo.2