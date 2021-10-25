#include <stdio.h>
void main ()
{
    int num[100]; 
    int count = 0, i =0, j=0, totalnums, maximo, minimo, soma =0;
    float media = 0;

    /* Recebe um vetor */

    do {
        printf ("\n Entre com um numero (-999 p/ terminar): ");
        scanf ("%d", &num[count]);
        count++;} 

    /* Verifica se o usuario ja declarou todo o vetor */

    while (num[count-1] != -999);
    
    /* Calcula o tamanho do vetor */ 
   
    totalnums = count -1;

    /* Imprime os numeros digitados */

    printf ("\n\n\n\t Os numeros que voce digitou foram:\n\n");
    
    for (count = 0; count < totalnums; count++) {
        printf (" %d\n", num[count]);}

    /* Verifica se e um vetor unico */

    if (totalnums ==1) {
        maximo = num [0];
        minimo = num [0];
    }
    else {

    /* Calcula o valor maximo do vetor */

        while (i < totalnums) {
            for (count=1; count<(totalnums); count++) {
                if (num [i] >= num [count]) {
                    maximo = num [i];}
                else { 
                    i++;
                    maximo = -999;}}
            if (maximo != -999) {
                break;}
            if (i == (totalnums-1)) {
                maximo = (num[i]);
                break;}}

    /* Calcula o valor minimo do vetor */

        while (j < totalnums) {
            for (count=1; count<(totalnums); count++) {
                if (num [j] <= num [count]) {
                    minimo = num [j];}
                else {
                    j++;
                    minimo = -999;}
            }
            
            if (minimo != -999) {
                break;
            }

            if (j == (totalnums -1)) {
                minimo = num [j];
                break;
            }
        }
    }   
    
    /* Calcula a media do  vetor */ 

    for (i =0; i<totalnums; i++) {
        soma += num [i];
    }
    media = ( (float) soma) / ((float) totalnums);

    /* Imprime os valores minimo, maximo e media */

    printf ("\n O valor minimo e igual a %d \n", minimo);
    printf ("\n O valor maximo e igual a %d \n", maximo);
    printf ("\n A media dos numeros digitados e igual a %.2f \n", media);
    }
