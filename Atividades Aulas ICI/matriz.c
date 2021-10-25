#include <stdio.h>
int main () {
    int matriz [4][4];
    int contador1, contador2, i;
    
    /* Recebe uma matriz 4x4 */

    printf ("\n Digite 16 numeros \n");
    for (contador1 =0; contador1 <4; contador1++){
        for (contador2 = 0; contador2<4; contador2++) {
            scanf ("%d", &(matriz [contador1][contador2]));
        };
    };

    /* Imprime a diagonal principal  da matriz*/

    printf ("\n A diagonal principal dessa matriz equivale a ");
    for (i=0; i<4; i++){
        printf ("%d ", matriz [i][i]);
    };
    return 0;
}