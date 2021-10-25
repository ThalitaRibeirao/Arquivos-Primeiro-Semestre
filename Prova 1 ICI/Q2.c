/* Nome: Thalita Alves da Silva | N USP: 12567349 */

# include <stdio.h>
int main () {
    int n, i;
    long fatorial = 1, soma = 0;

    /* Capta um numero do usuario */

    printf ("\n Digite um numero positivo: ");
    scanf ("%d", &n);

    /* Verifica se o numero e valido */

    if (n <0) {
        printf ("\n Digite o numero novamente!");
        return main ();
    }

    /* Se o numero for valido, calcula a equacao */

    else {

        /* Calcula o fatorial de n, se n < 30 */

        if (n <30) {
            for (i = 1; i <= n; i++) {
                fatorial *= i;
            } 
            printf ("\n O fatorial do numero %d e igual a %ld", n, fatorial);
        }

        /* Soma os numeros de -5 a n, se n >= 30 */

        if (n>= 30) {
            for (i = -5; i <= n ; i++) {
                soma += i;
                printf ("\n A soma do intervalo de inteiros [-5, %d] e igual a %ld", n, soma);
            }
        }
    }
    return 0;
}