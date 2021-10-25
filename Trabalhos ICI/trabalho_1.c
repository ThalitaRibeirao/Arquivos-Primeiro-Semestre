#include <stdio.h>
#include <math.h>
int main () {
    int valores [6], pesos [6];
    int i, j,  opcao, soma, menor, maior, produto, soma_pesos;
    float media, media_ponderada, desvio_padrao, diferenca;

    /* Recebe 5 valores do usuario e guarda num vetor */

    for (i=0; i<5; i++){
        printf ("\n Digite o numero %d: ", (i+1));
        scanf ("%d", &(valores [i]));
    }
    
    do {

        /* Imprime o menu de opcoes */

        printf ("\n \n \n  ---------- MENU ----------");
        printf ("\n Digite a operacao que deseja realizar ");
        printf ("\n 1: Media aritmetica simples");
        printf ("\n 2: Media aritmetica ponderada");
        printf ("\n 3: Desvio padrao");
        printf ("\n 4: Descobrir o menor valor");
        printf ("\n 5: Descobrir o maior valor");
        printf ("\n 6: Redigitar os numeros");
        printf ("\n Obs.: Para finalizar o programa, digite -999 \n");
        printf ("\n \n Opcao: ");
        scanf ("%d", &opcao);

        /* Verifica se a opcao do usuario esta no menu */

        if (opcao > 6 || (opcao < 1 && opcao != -999)) {
            printf ("Digite uma operacao valida!");
            continue;
        }

        /* Executa as operacoes do menu*/

        switch (opcao) {

            /* Faz a media aritmetica dos 5 valores */

            case 1:
            media = 0;
            soma = 0;
            for (i = 0; i<5 ; i++) {
                soma += valores [i];
            }
            media = ((float) (soma))/5;
            printf ("\n A media entre %d, %d, %d, %d e %d e igual a ", valores[0], valores[1], valores[2], valores[3], valores[4]);
            printf ("%.2f", media);

            break;

            /* Faz a media ponderada dos 5 valores */

            case 2:
            produto = 0;
            soma_pesos = 0;
            media_ponderada = 0;
            for (i=0; i<5; i++) {
                printf ("\n Qual o peso do valor %d (%d)?: ", (i+1), valores[i]);
                scanf ("%d", &(pesos[i]));
                produto += (valores[i])*(pesos[i]);
                soma_pesos += (pesos[i]);
            } 
            media_ponderada = ((float)(produto)) / ((float) (soma_pesos));
            printf ("\n A media ponderada entre %d, %d, %d, %d e %d e igual a ", valores[0], valores[1], valores[2], valores[3], valores[4]);
            printf ("%.2f", media_ponderada);
            break;

            /* Faz o desvio padrao dos 5 valores */

            case 3:
            soma = 0;
            media = 0;
            diferenca = 0;
            desvio_padrao = 0;
            for (i = 0; i<5 ; i++) {
                soma += valores [i];
            }
            media = ((float) (soma))/5;
            
            for (i=0; i<5; i++) {
                diferenca += ((valores[i]) - media)* ((valores[i]) - media);
            }
            desvio_padrao = sqrt(diferenca/5);
            printf ("\n O desvio padrao entre %d, %d, %d, %d e %d e igual a ", valores[0], valores[1], valores[2], valores[3], valores[4]);
            printf ("%.2f", desvio_padrao);
            break; 

            /* Verifica qual o menor valor dos 5 numeros */

            case 4: 
            i = 0;
            while (i<5) {
                for (j=1; j<5; j++) {
                    if (valores[i] <= valores [j]){
                        menor = valores [i];
                    }
                    else {
                        i++;
                        menor = -999;
                    }
                }
                if ((menor != -999) || (i == 4)) {
                    menor = valores [i];
                    break;
                }
        
            }
            printf ("\n O menor valor entre %d, %d, %d, %d e %d e igual a ", valores[0], valores[1], valores[2], valores[3], valores[4]);
            printf ("%d", menor);
            break;

            /* Verifica qual o maior valor dos 5 numeros */

            case 5:
            i = 0;
            while (i<5) {
                for (j=1; j<5; j++) {
                    if (valores[i] >= valores [j]){
                        maior = valores [i];
                    }
                    else {
                        i++;
                        maior = -999;
                    }
                }
                if ((maior != -999) || (i == 4)) {
                    maior = valores [i];
                    break;
                }
        
            }
            printf ("\n O maior valor entre %d, %d, %d, %d e %d e igual a ", valores[0], valores[1], valores[2], valores[3], valores[4]);
            printf ("%d", maior);
            break;

            /* Redefine os 5 valores */

            case 6:
            for (i=0; i<5; i++){
        printf ("\n Digite o numero %d: ", (i+1));
        scanf ("%d", &(valores [i]));
    }
            break;
            }
        }
    while (opcao != -999);
    return 0;

}
