/* Nome: Thalita Alves da Silva    Numero USP: 12567349 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main ( ) {
    int i, j, n, m, valor, controle, h= 0;
    int vetor_1[10000], vetor_2[10000], vetor_interseccao[10000];
   /* Recebe o tamanho de dois vetores */

    printf ("\n Digite o tamanho do primeiro vetor: ");
    scanf ("%d", &n);

    printf ("\n Digite o tamanho do segundo vetor: ");
    scanf ("%d", &m);

    /* Cria um vetor aleatorio do tamanho declarado */

    srand(time(NULL));

    vetor_1[0] = rand () % 1000;

    for (i = 1; i < n; i++) {

        valor = rand () % 1000;
        vetor_1 [i] = valor;

        for (j = 0; j< i; j++) {
            if (valor == vetor_1[j]){
                i--;
            }
        }
    }
    
    vetor_2[0] = rand () % 1000;

    for (i = 1; i < m; i++) {

        valor = rand () % 1000;
        vetor_2[i] = valor;

        for (j = 0; j< i; j++) {
            if (valor == vetor_2[j]){
                i--;
            }
        }
    }

    printf ("\n \n  --------- Vetor 1 -------- \n \n");
    for (i = 0; i <n; i++) {
        printf ("%d ", vetor_1[i]);
    }

    printf ("\n \n  --------- Vetor 2 -------- \n \n");
    for (i = 0; i <m; i++) {
        printf ("%d ", vetor_2[i]);
    }

    /* Calcula o vetor interseccao entre os dois vetores*/

    for (i = 0; i<n ; i++) {
        for (j = 0; j < m; j++) {
            if (vetor_1[i] == vetor_2[j]) {
                vetor_interseccao [h] = vetor_1 [i];
                h++;
            }
        }
    }
    

    printf ("\n \n --------- Vetor Interseccao ---------- \n \n ");

    if (h == 0) {
        printf ("\n Nao houve interseccao entre os vetores ");
    }
    else {
        for (i =0; i<h; i++) {
            printf ("%d ", vetor_interseccao[i]);
        }
    }

  
    return 0;

}