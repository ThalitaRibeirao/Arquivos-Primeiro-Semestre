# include <stdio.h>
int main () {
    char x = 1;
    int n, i, z = 1;

    /* Recebe um número n */

    printf ("\n Digite um numero n: ");
    scanf ("%i", &n);

    /* Imprime um triangulo de n linhas */

    printf ("\n");
    for (i=1 ; i <=n ; i++) {
        for (x = 1; x <= i ; x ++) {
            printf ("%i ", z);
            z ++;
        }
        printf ("\n");
    }
    return 0;
};