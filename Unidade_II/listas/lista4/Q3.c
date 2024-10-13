int soma(int arr[], int n)
{
    int soma = 0;               // c1 1
    for (int i = 0; i < n; i++) // c2 n
    {
        soma += arr[i];
    }
    return soma;
}

// c1(1) + c2(n)
// O(n);