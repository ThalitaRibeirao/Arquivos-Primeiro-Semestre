/* Nome: Thalita Alves da Silva   N USP: 12567349 */
#include <stdio.h>
#include <stdbool.h>

int funcao ();

int main () {

    /* Declara os vetores e os respectivos ponteiros */

    int vetor_1 [500], *p, vetor_2 [500], *q;

    p = vetor_1;
    q = vetor_2;

    /* Chama a funcao e verifica se os vetores sao iguais */

    if (funcao (p, q)) {
        printf ("\n Os vetores sao iguais. ");
    }

    else {
        printf ("\n Os vetores sao diferentes");
    }
    return 0;
}

/* Funcao que analisa a igualdade*/

int funcao (int *p, int *q) {

    int i;
    bool k = true;

    for (i = 0; i< 500; i++) {
        if (*p != *q) {
            k = false;
        }
        p++;
        q++;
    }
    
    if (k) {
        return 1;
    }
    else {
        return 0;
    }
}

