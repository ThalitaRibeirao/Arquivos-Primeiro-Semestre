#include <stdio.h>

/* Função que calcula a soma da diagonal principal com a diagonal secundaria */

void diagonal (int matriz [6][6], int *p, int *q) {
    int i, j, soma_1 = 0, soma_2 = 0;
    for (i=0; i<6; i++) {
        soma_1 += matriz [i][i];
    }
    *p = soma_1;

    for (i=0; i <6; i++) {
        for (j = 5; j>=0 ; j--) {
            soma_2 = matriz [j][i];
        }
    }
    *q = soma_2;
}

void main () {
    int matriz [6][6], i, j;
    int diagonal_principal, diagonal_secundaria, *p, *s;
    p = &diagonal_principal;
    s = &diagonal_secundaria;

    for (i = 0; i<6; i++) {
        for (j = 0; j<6; j++) {
            printf ("\n Digite um numero: ");
            scanf ("%d", matriz[i][j]);
        }
    } 
    diagonal (matriz, p, s);
    printf ("\n A soma da diagonal principal e a diagonal secundaria eh, respectivamente, %d e %d", diagonal_principal, diagonal_secundaria);

}