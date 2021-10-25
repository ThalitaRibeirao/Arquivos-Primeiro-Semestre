# include <stdio.h>
# include <string.h>
int main ( ) {
    char nome [100];
    int x, a=0, e=0, i=0, o=0, u=0;

    /* Recebe um nome */ 

    printf ("\n Digite um nome: ");
    gets (nome);

    /* Verifica a quantidade de vogais no nome */

    for (x = 0; x < strlen (nome); x++) {
        if ((nome[x]) == 'a' || (nome[x])== 'A'){
            a++;
        };
        if ((nome[x]) == 'e' || (nome[x])== 'E'){
            e++;
        };
        if ((nome[x]) == 'i' || (nome[x])== 'I'){
            i++;
        };
        if ((nome[x]) == 'o' || (nome[x])== 'O'){
            o++;
        };
        if ((nome[x]) == 'u' || (nome[x])== 'U'){
            u++;
        };
    };
    
    /* Imprime a quantidade de vogais*/

    printf ("\n A quantidade de vogais no nome e igual a");
    printf ("\n A = %i \n E = %i \n I = %i \n O = %i \n U = %i \n", a, e, i, o, u);
    return 0;
}