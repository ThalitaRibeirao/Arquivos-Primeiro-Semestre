# include <stdio.h>
int main () {
    int x, y, z;

    /* Capta tres numeros inteiros */

    printf ("Qual o valor de x?: \n");
    scanf ("%d", &x);
    printf ("Qual o valor de y?: \n");
    scanf ("%d", &y);
    printf ("Qual o valor de z?: \n");
    scanf ("%d", &z);

    /* Verifica e imprime qual o maior numero */

    if ((x>y) && (x > z)){
        printf ("O maior valor entre %d, %d e %d e igual a %d.\n", x, y, z, x);
    }
    if ((y>x) && (y>z)){
        printf ("O maior valor entre %d, %d e %d e igual a %d.\n", x, y, z, y);
    }
    if ((z>x) && (z>y)){
        printf ("O maior valor entre %d, %d e %d e igual a  %d.\n", x, y, z, z);
    }
    if ((x==y) || (x==z) || (z==y)) {
        printf ("Ha dois numeros iguais, digite novamente.\n");
        return main ();
    }
    return 0;
}