int soma_numeros(int n)
{
    int soma = 0;//c1 1
    for (int i = 1; i <= n; i++)//c2 (n - 1)
    {
        soma += i;//c3 (n - 1)
    }
    return soma;//c4 1
}

//t(n) = (n - 1)(c2 + c3) + c1 + c4
//t(n) = (n - 1)a + b
//t(n) = an -a + b
//t(n) = an 
//t(n) = n
//O(n)
