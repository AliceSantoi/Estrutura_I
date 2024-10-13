void selection_sort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
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

/*Qual ´e a complexidade de tempo desse algoritmo? Existem algoritmos de ordena¸c˜ao mais
eficientes? Se sim, cite um exemplo
    No melhor caso, a complexidade do selection_sort é de O(n^2) mas o melhor ainda é o quick sort, com complexidade de tempo O(n log(n))

*/