/* Nome: Thalita Alves da Silva   N USP: 12567349 */

#include <stdio.h>

float funcao ();

int main () {

    int n;

    /* Recebe o valor de N*/

    printf ("\n Digite um numero: ");
    scanf ("%d", &n);

    /* Imprime o resultado */

    printf ("\n N = %f", (funcao (n)));

    return 0;
}

float funcao (int numero) {
    int i;
    float resultado = 0;

    /* Calcula o valor de N */

    for (i = 1; i <= numero; i++) {

        if ((i%2) == 0) {
            resultado -= (2.0 * i) /((2.0 * i) - 1);
        }
        else {
            resultado += (2.0 * i)/((2.0 * i) - 1);
        }

    }
    return resultado;
}