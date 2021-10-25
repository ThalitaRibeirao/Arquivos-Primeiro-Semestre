# include <stdio.h>
int main () {
    int i, n, soma = 0, soma_impares =0, soma_alternada = 0, par;

    /* Capta um numero do usuario */

    printf ("Digite qual o valor de n: ");
    scanf ("%d", &n);
        
    /* Calcula a soma de todos os numeros menores que n*/

    for (i=1; i<= n; i++) {
        soma += i;
    }

    /* Calcula a soma de todos os impares menores que n*/

    for (i=1; i<=n; i+=2) {
        soma_impares += i;
    }
    
    /* Calcula soma alternada de impares e pares menores que n
        ex.: 1 - 2 + 3 - 4
        */
    
    for (i=0; i<=n; i++) {
        par = (i%2);
        if (par==0) {
            soma_alternada -= i;
        }
        else {
            soma_alternada += i;
        }
    }

    /* Imprime os resultaods */

    printf ("A soma de todos os numeros menores ou iguais a n e igual a %d\n", soma);
    printf ("A soma de todos os impares menores ou iguais a n e igual a %d\n", soma_impares);
    printf ("A soma alternada de todos os numeros menores ou iguais a n e igual a %d\n", soma_alternada);
    return 0;
}