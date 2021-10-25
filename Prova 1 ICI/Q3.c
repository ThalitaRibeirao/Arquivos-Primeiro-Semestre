/* Nome: Thalita Alves da Silva | N USP: 12567349 */ 

#include <stdio.h> 
#include <math.h> 
int main () {
    int a, b, c, delta;
    float x1, x2, raiz;

    /* Capta os coeficiente da equacao do usuario */

    printf ("\n Digite o coeficiente a da equacao: ");
    scanf ("%d", &a);
    printf ("\n Digite o coeficiente b da equacao: ");
    scanf ("%d", &b);
    printf ("\n Digite o coeficiente c da equacao: ");
    scanf ("%d", &c);

    /* Calcula o delta da equacao */
    
    delta = (b*b) - (4*a*c);

    /* Verifica se o conjunto tem solucao */

    if (delta <0 ){
        printf ("\n A equacao nao tem solucao no plano dos reais");
    }

    /* Se o conjunto possui solucao, calcula-a */

    else {
        raiz = sqrt (delta);
        x1 = (-b+raiz) / (a*2);
        x2 = (-b-raiz) / (a*2);
        printf ("As raizes da equacao e igual a %.2f e %.2f", x1, x2);
    }
    return 0;
}