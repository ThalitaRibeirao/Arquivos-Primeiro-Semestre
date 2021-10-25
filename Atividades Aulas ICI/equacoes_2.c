#include <stdio.h>
int main () {
    double fatorial = 1, divisao = 0, divisao_fatorial = 0, divisao_alternada = 0, fatorial2 = 1, fatorial3 = 1, divisao_k, divisao_i = 0, fatorial_impar =1, divisao_impar;
    int n, i = 1, par, q = 1, j = 1, f = 1, k, i2 = 1, i3 = 1;

    /*Capta os numeros usados nas equacoes */

    printf ("\n Digite um numero n: ");
    scanf ("%i", &n);
    printf ("\n Digite um numero k (maior que n): ");
    scanf ("%i", &k);
    printf (" \n---------------------------\n");
    
    /* Confere se o numero n é positivo ou se k é maior que n */
    
    if ((n<=0) || (k<= n)) {
        printf ("Digite um numero valido");
        return main ();
    }

    for (i = 1; i <= n; i++) {

        /* Calcula o fatorial de n */

        fatorial *= i;

        /* Calcula (1/n) */

        divisao += (1/(double)(i));

        /* Calcula (1/n!) */

        divisao_fatorial += (1/(fatorial));

        /* Calcula (n/n!) */

        divisao_i += ((double)(i))/fatorial;

        /* Calcula se o número é par */

        par =((i)%2);

        /* Se o numero for ímpar, equivale a (1/n); se for par, a (-1/n) */
        
        if (par == 0) {
            divisao_alternada -= (1/(double)(i));
        }
        else  {
            divisao_alternada += (1/(double)(i));
        }
    }

    /* Calcula o fatorial de (2*n - 1) */

    while (q <= (2*n)-1) {
        for (j = 1; j <= q; j++) {
        fatorial_impar *= j;
        }
        /* Calcula (n/(2*n+1)!) */
        divisao_impar += ((double)f)/fatorial_impar;
        q += 2;
        f++;
    }

    /* Calcula (k!) */

    for (i2 = 1; i2 <= k; i2++) {
        fatorial2 *= i2;
    }

    /* Calcula ((k-n)!) */

    for (i3 = 1; i3 <= (k-n); i3++) {
        fatorial3 *= i3;
    }

    /* Calcula (n!/(k!*(k-n)!)) */
    divisao_k = (fatorial) / ((fatorial2)* (fatorial3));

    /* Imprime todos os resultados */

    printf ("O valor de n! e igual a %.0lf\n", fatorial);
    printf ("A soma de 1/n para todos os numeros naturais menores que n e igual a %.2lf\n", divisao);
    printf ("A divisao 1/n! para todos os numeros naturais menores que n e igual a %.2lf\n", divisao_fatorial);
    printf ("A soma da divisao alternada de 1/n para todos os numeros naturais menores que n e igual a %.2lf\n", divisao_alternada);
    printf ("A soma de n! dividido por k!(k-n)! e igual a %.2lf\n", divisao_k);
    printf ("A soma de n/n! para todos os numeros naturais menores que n e igual a %.2lf\n", divisao_i);
    printf ("A soma de n/(2n-1)! para todos os numeros naturais menores que n e igual a %.2lf\n", divisao_impar);
    return 0;
}