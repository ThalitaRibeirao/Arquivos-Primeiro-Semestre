#include <stdio.h>
#include <stdbool.h>

int uniao (); 

/* Declara dois vetores de 10 posicoes*/

int main () {
    int vetor_1 [10], vetor_2 [10], vetor_3 [20], i;
    for (i = 0; i <) {
        
    }
    return 0;
}

/* Realiza a uniao dos dois vetores */

int uniao (int lista_1[10], int lista_2[10]) {
    int resultado[20], i, j, k, w = 0;

    for (i = 0; i < 10; i++) {
        k = true;
        for (j = 0; j < 10; j++) {
            if (lista_1 [i] == lista_2[j]) {
                k = false;
            }
        }
        if (k) {
            resultado [k] = lista_1 [w];
            w++;
        }
    }
}
