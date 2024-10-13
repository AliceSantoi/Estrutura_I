#include "produto.h"

int main(void)
{

    Produto *produto[MAX];
    int tam = 0;
    FILE *arq = abre_arquivo("estoque.bin", "wb");
    FILE *arqR = abre_arquivo("estoque.bin", "rb");

    Produto *produto1 = cria_produto(101, "laranja", 8);
    adiciona_produto(produto, &tam, produto1);
    adicionarProdutoAoEstoque(arq, produto1);

    Produto *produto2 = cria_produto(102, "banana", 10);
    adiciona_produto(produto, &tam, produto2);
    adicionarProdutoAoEstoque(arq, produto2);

    Produto *produto3 = cria_produto(103, "caju", 20);
    adiciona_produto(produto, &tam, produto3);
    adicionarProdutoAoEstoque(arq, produto2);

    atualiza_qnt(produto1, 5, tam);

    exibe_estoque(arqR, produto1);
    exibe_estoque(arqR, produto2);
    exibe_estoque(arqR, produto3);

    remove_produto(produto, &tam, 103);

    for (int i = 0; i < tam; i++)
    {
        exibe_estoque(arqR, produto[i]);
    }
}