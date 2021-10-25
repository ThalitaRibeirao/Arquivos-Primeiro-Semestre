/* Nome: Thalita Alves da Silva | N USP: 12567349 */ 

#include <stdio.h>

 int main () {
    int i;
    long fatorial= 1;
    float x, total = 1, potencia;

    /* Recebe um numero do usuario */ 

    printf ("\n Digite um numero x: ");
    scanf ("%f", &x);

    /* Acrescenta o proprio x ao total  */
    
    total += x;
    potencia = x;
    
    /* Acrescenta x^n/n! ao total  */

    for (i = 2; i <= x; i++) {

        /* Calcula o fatorial de n  */

        fatorial *= i;

        /* Calcula x^n */

        potencia *= x;

        /* Divide os dois valores  */

        total += (potencia/((float) fatorial));
        
    }

    printf ("\n O valor de e^x do numero %f e igual a %.2f", x, total);
    return 0;

 }