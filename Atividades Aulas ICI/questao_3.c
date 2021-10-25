#include <stdio.h>

/* Separa os elementos pares dos elementos impares de um vetor */

void funcao (int vetor[30], int *p, int *q) {
    int i;
    for (i = 0; i < 30; i++) {
        if ((vetor [i])%2 == 0) {
            *p = vetor [i];
            p++;
        }
        else {
            *q = vetor [i];
            q++;
        }
    }
}

int main () {
    int lista [30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int *p, *q, pares [30], impares [30], i;
    p = &(pares);
    q = &(impares);
    
    funcao (lista, p, q);
    return 0; 
}