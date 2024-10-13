int comprimento(char *s)
{
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}

void copia(char *dest, char *orig)
{
    for (int i = 0; orig[i] != '\0'; i++)
    {
        dest[i] = orig[i];
        dest[i] = '\0';
    }
}

void concatena(char *dest, char *orig)
{
    int i = 0; /*indice usado na cadeia destino, inicializado com zero*/
    int j;     /*indice usado na cadeia origem*/
    /*acha o final da cadeia destino*/
    while (dest[i] != '\0')
    {
        i++;
    }
    for (j = 0; orig[j] != '\0'; j++)
    { // copia elementos da origem para o final destino
        dest[i] = orig[j];
        i++;
    }
    dest[i] = '\0'; // fecha a cadeia de edestino.j
}