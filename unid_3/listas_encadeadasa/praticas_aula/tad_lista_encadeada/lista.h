#include <stdio.h>
#include <stdlib.h>
typedef struct no No;

No *insere_int(No *lista, int numero);
void imprime_lista(No *lista);
void libera_lista(No* lista);
No* busca_int(No* lista, int numero);
No* remove_int(No*lista, int numero);
