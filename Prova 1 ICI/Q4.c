/* Nome: Thalita Alves da Silva | N USP: 12567349 */

#include <stdio.h>
#include <math.h>
int main () {
    float matriz [100][100];
    float numeros [10000];
    float raiz;
    int i= 0, j =0, h = 0, n;

    /* Recebe uma matriz do usuario */

    printf ("\n Digite o tamanho n da matriz quadrada: " );
    scanf ("%d", &n);
    do {
        printf ("\n Digite o numero %d da matriz: ", (i+1));
        scanf ("%f", &(numeros[i]));
        i++;
    }
    while (i < (n*n));

    /* Coloca os valores na matriz */ 

    for (i=0; i< (n*n); i++) {
        for (h = 0; h <n; h++) {
            for (j = 0; j <n ; j++) {
                matriz [h][j] = numeros [i];
                }
            }
        }
        
    /* Transpoe a matriz */
    
    for (h=0; h<n; h++) {
        for (j=0; j<n; j++) {
            matriz[h][j] = matriz[j][h];
        }
    }
    
    /* Imprime a matriz */

    printf ("\n A matriz transposta e igual a \n");
    for (h = 0; h < n; h++){
        for (j= 0; j<n; j++) {
            printf ("%.2f ", (matriz [h][j]));
        }
        printf ("\n");
    }
    
    return 0;
}