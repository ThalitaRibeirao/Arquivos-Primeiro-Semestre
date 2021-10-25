#include <stdio.h>
#include <string.h>
int main () {
    char nome [100];
    int i, tamanho;

    /* Recebe um nome*/

    printf("\n Digite um nome: ");
    gets (nome);

    /* Imprime o nome ao contrário*/
    
    tamanho = strlen(nome);
    printf ("O nome %s ao contrario e ", nome);
    for (i = tamanho; i >= 0; i--) {
        printf ("%c", nome [i]);
    }
    printf ("\n");
    return 0;
}