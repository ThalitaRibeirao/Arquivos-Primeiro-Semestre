# include <stdio.h>
# include <string.h>
int main ( ) {
    char nome [100];
    char filtro [10] = {'a','e','i','o','u','A','E','I','O','U'}; 
    int x = 0, y, vogais = 0, t = 0;

    /* Capta um nome do usuario */

    printf ("\n Digite um nome: ");
    gets (nome);

    /* Verifica a quantidade de vogais declarada no nome */

    while (x < strlen (nome)){
        for (y= 0; y < strlen(filtro); y++){
            if (filtro[y] == nome [x]){
                vogais++;
            }
        }
        x++;    
    }

    /* Imprime a quantidade de vogais */

    printf ("\n A quantidade de vogais no nome e igual a %i", vogais);
    return 0;
}