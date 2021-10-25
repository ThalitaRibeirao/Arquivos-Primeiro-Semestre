#include <stdio.h>
#include <string.h>
int main () {
    char nome[100];
    int tamanho, x, y, qtd_A = 0, qtd_E = 0, qtd_I = 0, qtd_O = 0, qtd_U = 0;
    
    /* Recebe um nome */

    printf ("\n Digite um nome: ");
    gets (nome);

    /* Verifica o tamanho do nome */
    
    tamanho = strlen(nome);

    /* Imprime o nome na mesma quantidade de vezes que seu tamanho */

    for (x = 1; x<= tamanho; x++) {
        printf ("%s\n", nome);
    };
    return 0;
}