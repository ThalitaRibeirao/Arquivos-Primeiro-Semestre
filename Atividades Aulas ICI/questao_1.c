#include <stdio.h>

/* Calcula o volume ocupado por uma esfera */

float volume (float raio) {
    float resultado;
    resultado = raio * raio * raio * 4.13 * (4/3.0);
    return resultado;
}

int main () {
    float esfera, r;
    printf ("\nDigite o raio da esfera ");
    scanf ("%f", &r);
    esfera = volume (r);
    printf ("\nO volume da esfera e igual a %.3f", esfera);
    return 0;
}