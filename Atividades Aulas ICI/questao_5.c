#include <stdio.h>

/* Função que retorna a quantidade de numeros pares em um vetor */

int par (int *p) {
    int i, quantidade = 0;
    for (i=0; i<15; i++) {
        if ((*p)%2 == 0) {
            quantidade++;
        }
        p++;
    }
    return quantidade;
}

void main () {
    int lista [15], *q, i;

    for (i = 0; i <15; i++) {
        printf ("\nDigite o numero %d do vetor: ", (i+1));
        scanf ("%d", &(lista[i]));
    }

    q = &(lista);

    printf ("\nA quantidade de numeros pares e igual a %d", (par (q)));
}