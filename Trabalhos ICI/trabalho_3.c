/* Nome: Thalita Alves da Silva    Numero USP: 12567349 */

#include <stdio.h>
#include <string.h>

int posicao ();
int main () {

    /* Declara duas strings */

    char string[100];
    char substring[100];
    int lugar;

    printf ("\n Digite uma string: ");
    gets(string);

    printf ("\n Digite uma substring: ");
    gets (substring);

    lugar = posicao (string, substring);

    if (lugar == 0) {
        printf ("\n A substring nao esta contida na string.");
    }
    else {
        printf ("\n A substring esta contida na posicao %d ", lugar);
    }
    return 0;

}

/* Verifica se a segunda string esta contida na primeira*/

int posicao (char lista [100], char sub_lista [100]) {
    int tamanho_1, tamanho_2, i, j, h, k = 0;
    int ocorrencias [100];

    tamanho_1 = strlen (lista);
    tamanho_2 = strlen (sub_lista);

    /* Se o tamanho da substring eh maior que a string, nao tem como ela estar contida */

    if (tamanho_2 > tamanho_1) {
        return 0;
    }

    /* Verifica em quais lugares ha repeticao de caracteres */

    for (i = 0; i < tamanho_1 ; i ++) {
        for (j = 0; j < tamanho_2 ; j++) {
            if (lista[i] == sub_lista [j]) {

                if (tamanho_2 == 1) {
                    return (i+1);
                }

                else {
                    ocorrencias[k] = i;
                    k++;
                }
            }
        }
    }
    
    /* Verifica se houve repeticao na ordem correta */

    tamanho_2--;

    for (i = 0; i < k; i++) {
            if (i == (k- tamanho_2)) {
                return 0;
                break;
            }

            else {

                h = ocorrencias[i] + tamanho_2;
                if (h == (ocorrencias [i+tamanho_2])) {
                    return ((ocorrencias[i]) + 1);
                    break;
                }
            }
        
    }
  
}