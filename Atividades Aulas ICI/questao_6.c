#include <stdio.h>

/* Função que retorna a soma dos elementos de uma matriz */

int soma (int matriz [5][5]) {
    int i, j, total=0;
    for (i = 0; i <5; i++) {
        for (j = 0; j<5; j++) {
            total += matriz[i][j];
            printf ("%d ", total);

        }
    }
    
    return total;
}

int main () {
    int matriz [5][5], i, j;
    for (i = 0; i <5; i ++) {
        for (j=0; j <5; j++) {
            printf ("\n Digite um numero: ");
            scanf ("%d", &(matriz [i][j])); 
        }
    }
    printf ("\n A soma total dos elementos dessa matriz e igual a %d", (soma (matriz)));
    return 0;
}