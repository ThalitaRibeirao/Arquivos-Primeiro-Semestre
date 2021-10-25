#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int total_tentativas= 0, sorteado, tentativa, i;

    /* Sorteia um numero aleatorio */

    srand(time(NULL));
    sorteado = (rand () % 100);

    /* Inicia o jogo */
    
    for (total_tentativas = 0; ; total_tentativas++) {
        
        /* Pega a tentativa do usuario */

        printf ("\n \n ----- Adivinhe o numero que estou pensando (de 0 a 100) -----\n");
        scanf ("%d", &tentativa);

        /* Verifica se a tentativa esta no intervalo correto */

        if (tentativa > 100 || tentativa < 0) {
            printf ("\n Digite um numero valido! \n");
        }
            else {

                /* Encerra o jogo se o usuario acertar o numero sorteado */

                if (tentativa == sorteado) {
                    break;
                }
                /* Avisa se o numero sorteado e menor que a tentativa */

                if (tentativa > sorteado) {
                    printf ("\n O valor que eu estou pensando e menor!");}
                    
                /* Avisa se o numero sorteado e maior que a tentativa */

                if (tentativa < sorteado) {
                    printf ("\n O valor que eu estou pensando e maior!");
                }
            }
        
    }

    /* Mostra as estatisticas do jogo */
 
    printf ("\n \n -------- PARABENS! VOCE ACERTOU -------- \n");
    printf ("\n O numero que eu estava pensando era %d", sorteado);
    printf ("\n Total de tentativas: %d", total_tentativas);
    return 0;
}